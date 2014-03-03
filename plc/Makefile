#
# OMNeT++/OMNEST Makefile for libplc
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -O out -I../inetmanet-2.0/src/util/headerserializers/ipv4 -I../inetmanet-2.0/src/wpan/linklayer/ieee802154/contract -I../inetmanet-2.0/src -I../inetmanet-2.0/src/util/headerserializers -I../inetmanet-2.0/src/networklayer/common -I../inetmanet-2.0/src/battery/models -I../inetmanet-2.0/src/linklayer/radio/propagation -I../inetmanet-2.0/src/networklayer/contract -I../inetmanet-2.0/src/transport/tcp_common -I../inetmanet-2.0/src/wpan/networklayer/contract -I../inetmanet-2.0/src/linklayer/common -I../inetmanet-2.0/src/world/obstacles -I../inetmanet-2.0/src/linklayer/ieee80211/radio -I../inetmanet-2.0/src/networklayer/manetrouting/base -I../inetmanet-2.0/src/networklayer/autorouting/ipv4 -I../inetmanet-2.0/src/util/headerserializers/tcp -I../inetmanet-2.0/src/networklayer/arp -I../inetmanet-2.0/src/base -I../inetmanet-2.0/src/networklayer/ipv6tunneling -I../inetmanet-2.0/src/linklayer/contract -I../inetmanet-2.0/src/wpan/linklayer/ieee802154/mac -I../inetmanet-2.0/src/mobility -I../inetmanet-2.0/src/world/radio -I../inetmanet-2.0/src/linklayer/ieee80211/mac -I../inetmanet-2.0/src/transport/udp -I../inetmanet-2.0/src/applications/pingapp -I../inetmanet-2.0/src/networklayer/ipv6 -I../inetmanet-2.0/src/linklayer/radio -I../inetmanet-2.0/src/transport/contract -I../inetmanet-2.0/src/networklayer/icmpv6 -I../inetmanet-2.0/src/world/powercontrol -I../inetmanet-2.0/src/linklayer/ethernet -I../inetmanet-2.0/src/util/headerserializers/udp -I../inetmanet-2.0/src/linklayer/ieee80211mesh/locator -I../inetmanet-2.0/src/linklayer/ieee80211/mgmt -I../inetmanet-2.0/src/networklayer/ipv4 -I../inetmanet-2.0/src/wpan/phyLayer/ieee802154 -I../inetmanet-2.0/src/linklayer/ieee80211/radio/errormodel -I../inetmanet-2.0/src/util -I../inetmanet-2.0/src/status -I../inetmanet-2.0/src/mobility/models -L../inetmanet-2.0/out/$(CONFIGNAME)/src -linet -DINET_IMPORT -KINETMANET_2_0_PROJ=../inetmanet-2.0
#

# Name of target to be created (-o option)
TARGET = libplc$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../inetmanet-2.0/src/util/headerserializers/ipv4 \
    -I../inetmanet-2.0/src/wpan/linklayer/ieee802154/contract \
    -I../inetmanet-2.0/src \
    -I../inetmanet-2.0/src/util/headerserializers \
    -I../inetmanet-2.0/src/networklayer/common \
    -I../inetmanet-2.0/src/battery/models \
    -I../inetmanet-2.0/src/linklayer/radio/propagation \
    -I../inetmanet-2.0/src/networklayer/contract \
    -I../inetmanet-2.0/src/transport/tcp_common \
    -I../inetmanet-2.0/src/wpan/networklayer/contract \
    -I../inetmanet-2.0/src/linklayer/common \
    -I../inetmanet-2.0/src/world/obstacles \
    -I../inetmanet-2.0/src/linklayer/ieee80211/radio \
    -I../inetmanet-2.0/src/networklayer/manetrouting/base \
    -I../inetmanet-2.0/src/networklayer/autorouting/ipv4 \
    -I../inetmanet-2.0/src/util/headerserializers/tcp \
    -I../inetmanet-2.0/src/networklayer/arp \
    -I../inetmanet-2.0/src/base \
    -I../inetmanet-2.0/src/networklayer/ipv6tunneling \
    -I../inetmanet-2.0/src/linklayer/contract \
    -I../inetmanet-2.0/src/wpan/linklayer/ieee802154/mac \
    -I../inetmanet-2.0/src/mobility \
    -I../inetmanet-2.0/src/world/radio \
    -I../inetmanet-2.0/src/linklayer/ieee80211/mac \
    -I../inetmanet-2.0/src/transport/udp \
    -I../inetmanet-2.0/src/applications/pingapp \
    -I../inetmanet-2.0/src/networklayer/ipv6 \
    -I../inetmanet-2.0/src/linklayer/radio \
    -I../inetmanet-2.0/src/transport/contract \
    -I../inetmanet-2.0/src/networklayer/icmpv6 \
    -I../inetmanet-2.0/src/world/powercontrol \
    -I../inetmanet-2.0/src/linklayer/ethernet \
    -I../inetmanet-2.0/src/util/headerserializers/udp \
    -I../inetmanet-2.0/src/linklayer/ieee80211mesh/locator \
    -I../inetmanet-2.0/src/linklayer/ieee80211/mgmt \
    -I../inetmanet-2.0/src/networklayer/ipv4 \
    -I../inetmanet-2.0/src/wpan/phyLayer/ieee802154 \
    -I../inetmanet-2.0/src/linklayer/ieee80211/radio/errormodel \
    -I../inetmanet-2.0/src/util \
    -I../inetmanet-2.0/src/status \
    -I../inetmanet-2.0/src/mobility/models \
    -I. \
    -IGeneric_Technologies \
    -IMarket_Technologies \
    -IMarket_Technologies/Access_BPLC \
    -IMarket_Technologies/Access_PLC \
    -IMarket_Technologies/InHouse_BPLC \
    -Isimulations \
    -Isimulations/Access_BPLC_Systems \
    -Isimulations/Access_PLC_Systems \
    -Isimulations/Generic_Simulations \
    -Isimulations/InHouse_BPLC_Systems \
    -Isimulations/Laboratory_Test \
    -Isimulations/Networks_for_verification \
    -Isimulations/Old_Networks \
    -Isimulations/Ramon \
    -Isrc

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../inetmanet-2.0/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath ../inetmanet-2.0/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = out
PROJECTRELATIVE_PATH =
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/src/PlcMAC.o \
    $O/src/PlcMACBase.o \
    $O/src/PlcNet.o \
    $O/src/DataCollector.o \
    $O/src/Adapter_PLC.o \
    $O/src/PlcEncap.o \
    $O/src/Adapter_MAC.o \
    $O/src/Adapter_PLC_Base.o \
    $O/src/Adapter_MAC_Base.o \
    $O/src/PlcFrame_m.o

# Message files
MSGFILES = \
    src/PlcFrame.msg

# Other makefile variables (-K)
INETMANET_2_0_PROJ=../inetmanet-2.0

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) -DINET_IMPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating shared library: $@
	$(Q)$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f plc plc.exe libplc.so libplc.a libplc.dll libplc.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f Generic_Technologies/*_m.cc Generic_Technologies/*_m.h
	$(Q)-rm -f Market_Technologies/*_m.cc Market_Technologies/*_m.h
	$(Q)-rm -f Market_Technologies/Access_BPLC/*_m.cc Market_Technologies/Access_BPLC/*_m.h
	$(Q)-rm -f Market_Technologies/Access_PLC/*_m.cc Market_Technologies/Access_PLC/*_m.h
	$(Q)-rm -f Market_Technologies/InHouse_BPLC/*_m.cc Market_Technologies/InHouse_BPLC/*_m.h
	$(Q)-rm -f simulations/*_m.cc simulations/*_m.h
	$(Q)-rm -f simulations/Access_BPLC_Systems/*_m.cc simulations/Access_BPLC_Systems/*_m.h
	$(Q)-rm -f simulations/Access_PLC_Systems/*_m.cc simulations/Access_PLC_Systems/*_m.h
	$(Q)-rm -f simulations/Generic_Simulations/*_m.cc simulations/Generic_Simulations/*_m.h
	$(Q)-rm -f simulations/InHouse_BPLC_Systems/*_m.cc simulations/InHouse_BPLC_Systems/*_m.h
	$(Q)-rm -f simulations/Laboratory_Test/*_m.cc simulations/Laboratory_Test/*_m.h
	$(Q)-rm -f simulations/Networks_for_verification/*_m.cc simulations/Networks_for_verification/*_m.h
	$(Q)-rm -f simulations/Old_Networks/*_m.cc simulations/Old_Networks/*_m.h
	$(Q)-rm -f simulations/Ramon/*_m.cc simulations/Ramon/*_m.h
	$(Q)-rm -f src/*_m.cc src/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc Generic_Technologies/*.cc Market_Technologies/*.cc Market_Technologies/Access_BPLC/*.cc Market_Technologies/Access_PLC/*.cc Market_Technologies/InHouse_BPLC/*.cc simulations/*.cc simulations/Access_BPLC_Systems/*.cc simulations/Access_PLC_Systems/*.cc simulations/Generic_Simulations/*.cc simulations/InHouse_BPLC_Systems/*.cc simulations/Laboratory_Test/*.cc simulations/Networks_for_verification/*.cc simulations/Old_Networks/*.cc simulations/Ramon/*.cc src/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/src/Adapter_MAC.o: src/Adapter_MAC.cc \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	src/Adapter_MAC.h \
	src/Adapter_MAC_Base.h
$O/src/Adapter_MAC_Base.o: src/Adapter_MAC_Base.cc \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	src/Adapter_MAC_Base.h \
	src/Plc.h
$O/src/Adapter_PLC.o: src/Adapter_PLC.cc \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	src/Adapter_PLC.h \
	src/Adapter_PLC_Base.h \
	src/Plc.h \
	src/PlcFrame_m.h
$O/src/Adapter_PLC_Base.o: src/Adapter_PLC_Base.cc \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	src/Adapter_PLC_Base.h \
	src/Plc.h \
	src/PlcFrame_m.h
$O/src/DataCollector.o: src/DataCollector.cc \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	src/DataCollector.h \
	src/Plc.h \
	src/PlcFrame_m.h
$O/src/PlcEncap.o: src/PlcEncap.cc \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	src/Plc.h \
	src/PlcEncap.h \
	src/PlcFrame_m.h \
	src/PlcMAC.h \
	src/PlcMACBase.h
$O/src/PlcFrame_m.o: src/PlcFrame_m.cc \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	src/Plc.h \
	src/PlcFrame_m.h
$O/src/PlcMAC.o: src/PlcMAC.cc \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	src/Plc.h \
	src/PlcFrame_m.h \
	src/PlcMAC.h \
	src/PlcMACBase.h
$O/src/PlcMACBase.o: src/PlcMACBase.cc \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	src/Plc.h \
	src/PlcFrame_m.h \
	src/PlcMACBase.h
$O/src/PlcNet.o: src/PlcNet.cc \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	src/Plc.h \
	src/PlcFrame_m.h \
	src/PlcNet.h

