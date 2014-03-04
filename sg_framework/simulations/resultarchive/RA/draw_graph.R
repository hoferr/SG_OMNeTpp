#Byte..Time Draw plots for PLC analysi
# Usage: R --no-save --slave --args datafile.csv < draw_graph.R

# Limits
Limit.RTT <- c(0,500)
#Limit.Throughput <- c(5e4,1.1e5)
#Limit.Throughput <- c(10000,100000)
#Limit.Throughput <- c(1e5,1.5e6)
Limit.Throughput <- c(1e4,1e6)
Limit.Lostdatagrams <- c(0,1)


# Libraries

library(doBy)
library(ggplot2)
library(plyr)
#library(gplots)


filenames <- list.files(".", pattern="*.sca", full.names=TRUE)
filenames
stop("Done")

# Read command line arguments

args <- commandArgs(trailingOnly = TRUE)


# read file

A <- read.csv(args[1])


# Save environment

main.title <- args[2]
main.distance <- A$Distance.m.[1]


# Set output format

#pdf('test%03d.pdf', onefile = FALSE)
#pdf('test%03d.pdf', onefile = FALSE)
setEPS(height = 5, width = 8, horizontal = FALSE, paper = "special", onefile = FALSE)
#postscript('test%03d.ps')

# Calculate mean values
A.mean <- colMeans(data.matrix(A))

# Calculate grouped mean values
A.mean.grouped <- ddply(A, "TargetPayload.Byte..Time.s.", mean, A.mean.values = mean(TargetPayload.Byte..Time.s.))

# Convert timestamp
A$Timestamp <- strptime(as.character(A$Timestamp), "%Y-%m-%d_%H:%M:%S")

# Calculate throughput
A$Throughput.bit.sec. <- (8 * A$TargetPayload.Byte..Time.s.) / (A$pingRTT.ms. / 2000)


#########
# PLOTS #
#########
# A$LostDatagramsQuotient vs Packetsize
postscript('lostdatagrams.eps')
plot(A.mean.grouped$DatagramSize.Byte., A.mean.grouped$pingLoss, xlab = "Payload [Byte]", ylab = "Packet loss ratio", ylim = Limit.Lostdatagrams)
grid()
#title(main = paste(main.title, '(Lost Datagram Quotient - Payload)'))

# A$LostDatagramsQuotient vs Time
#postscript('lostdatagrams-time.eps')
#p <- ggplot(A, aes(A$Timestamp, A$pingLoss,group=A$TargetPayload.Byte..Time.s.)) +
#geom_line(aes(colout = A$TargetPayload.Byte..Time.s.)) 
#p

# A$pingRTT.ms. vs Packetsize
postscript('rtt.eps')
p <- qplot(factor(A$TargetPayload.Byte..Time.s.), A$pingRTT.ms., data = A, geom="boxplot") + #, main = paste(main.title, "(RTT - Payload)")) + 
xlab("Payload [Byte]") +  ylab("RTT [ms]") +
ylim(Limit.RTT)
p

# A$Throughput vs Packetsize
postscript('throughput-packetsize.eps')
p <- qplot(factor(A$TargetPayload.Byte..Time.s.), A$Throughput.bit.sec., data = A, geom="boxplot") + #, main = paste(main.title, "(Throughput - Payload)")) + 
xlab("Payload [Byte]") +  ylab("Throughput [bit/s]") +
ylim(Limit.Throughput)
#layer(data = a, mapping = aes(x = TargetPayload.Byte..Time.s., y= Bandwidth.bit.sec..median+1, label=round(a$Bandwidth.bit.sec..median)), geom = "text", color="NavyBlue", size=3.5) +
    #facet_grid(.~ses, scales="free", space="free") #+ 
    #theme_bw() + 
    #theme(strip.text.y = element_text())

# Throughput histogram
postscript('throughput_hist.eps')
x <- A$Bandwidth.bit.sec.[!is.na(A$Bandwidth.bit.sec.)]
p <- hist(x, breaks=10, col="red", xlab="Throughput [bit/s]", main = NULL)
xfit<-seq(min(x),max(x),length=40)
yfit<-dnorm(xfit,mean=mean(x),sd=sd(x))
yfit <- yfit*diff(p$mids[1:2])*length(x)
lines(xfit, yfit, col="blue", lwd=2)
p

# A$Throughput vs Time
postscript('throughput-time.eps')
#plot(A$Timestamp, A$Bandwidth.bit.sec., xlab = "Timestamp", ylab = "Bandwidth [bit/s]", ylim = quantile(A$Bandwidth.bit.sec., c(0, .99), na.rm = TRUE))
p <- ggplot(A, aes(A$Timestamp, A$Throughput.bit.sec.,group=A$TargetPayload.Byte..Time.s.)) +
geom_line(aes(colout = A$TargetPayload.Byte..Time.s.)) 
#    geom_point()
p

# Gap histogram
postscript('gaps_hist.eps')
#B <- matrix(nrow = 0, ncol = 2)
#colnames(B) <- c("TimestampStart","GapLength.s.")
gaps <- vector()
times <- vector()
gap.start <- 1
gap.end <- 1
for(i in 2:length(A$Timestamp))
{ #For all rows
    if(is.na(A$pingRTT.ms.[i]))
    { #Currently no connection
        if(!is.na(A$pingRTT.ms.[i-1]))
        { #Connection lost now
            gap.start <- i
        }
        if(!is.na(A$pingRTT.ms.[i+1]))     
        { # Connection restores next time
            gap.end <- i+1
            #B <- rbind( B, c( A$Timestamp[gap.start], as.numeric(A$Timestamp[gap.end]-A$Timestamp[gap.start], units="secs" ) ) ) 
            times <- append(times, A$Timestamp[gap.start])
            gaps <- append(gaps, as.numeric(A$Timestamp[gap.end]-A$Timestamp[gap.start], units="secs") )
        }
    } 
}
x <- gaps
p <- hist(x, breaks=100, col="red", xlab="Ping gaps [s]", main = NULL)
xfit<-seq(min(x),max(x),length=40)
yfit<-dnorm(xfit,mean=mean(x),sd=sd(x))
yfit <- yfit*diff(p$mids[1:2])*length(x)
lines(xfit, yfit, col="blue", lwd=2)
p

# Ping autocorrelation
postscript('ping_aucorrelation.eps')
acf(A$pingRTT.ms., na.action = na.pass, main = "")
