#
# OMNeT++/OMNEST Makefile for libinet
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -o inet -O out -pINET -Xapplications/voipstream -Xtransport/tcp_lwip -Xtransport/tcp_nsc -DWITH_TCP_COMMON -DWITH_TCP_INET -DWITH_IPv4 -DWITH_IPv6 -DWITH_xMIPv6 -DWITH_UDP -DWITH_RTP -DWITH_SCTP -DWITH_DHCP -DWITH_ETHERNET -DWITH_PPP -DWITH_EXT_IF -DWITH_MPLS -DWITH_OSPFv2 -DWITH_BGPv4 -DWITH_TRACI -DWITH_MANET
#

# Name of target to be created (-o option)
TARGET = libinet$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I. \
    -Iapplications \
    -Iapplications/dhcp \
    -Iapplications/ethernet \
    -Iapplications/generic \
    -Iapplications/httptools \
    -Iapplications/pingapp \
    -Iapplications/rtpapp \
    -Iapplications/sctpapp \
    -Iapplications/tcpapp \
    -Iapplications/traci \
    -Iapplications/trafgen \
    -Iapplications/udpapp \
    -Iapplications/util \
    -Iapplications/voip \
    -Ibase \
    -Ibattery \
    -Ibattery/models \
    -Igeneric \
    -Ilinklayer \
    -Ilinklayer/channels \
    -Ilinklayer/collStats \
    -Ilinklayer/common \
    -Ilinklayer/contract \
    -Ilinklayer/ethernet \
    -Ilinklayer/ethernet/switch \
    -Ilinklayer/ext \
    -Ilinklayer/idealwireless \
    -Ilinklayer/ieee80211 \
    -Ilinklayer/ieee80211/mac \
    -Ilinklayer/ieee80211/mgmt \
    -Ilinklayer/ieee80211/radio \
    -Ilinklayer/ieee80211/radio/errormodel \
    -Ilinklayer/ieee80211mesh \
    -Ilinklayer/ieee80211mesh/ethernet \
    -Ilinklayer/ieee80211mesh/hwmp \
    -Ilinklayer/ieee80211mesh/locator \
    -Ilinklayer/ieee80211mesh/mgmt \
    -Ilinklayer/ieee80211mesh/nodes \
    -Ilinklayer/ieee8021d \
    -Ilinklayer/ieee8021d/common \
    -Ilinklayer/ieee8021d/ethernet \
    -Ilinklayer/ieee8021d/ieee8021AD \
    -Ilinklayer/ieee8021d/ieee8021AH \
    -Ilinklayer/ieee8021d/ieee8021Q \
    -Ilinklayer/ieee8021d/MVRP \
    -Ilinklayer/ieee8021d/RSTP \
    -Ilinklayer/ieee8021d/Tester \
    -Ilinklayer/loopback \
    -Ilinklayer/ppp \
    -Ilinklayer/queue \
    -Ilinklayer/radio \
    -Ilinklayer/radio/propagation \
    -Ilinklayer/rstp \
    -Imobility \
    -Imobility/models \
    -Inetworklayer \
    -Inetworklayer/arp \
    -Inetworklayer/autorouting \
    -Inetworklayer/autorouting/ipv4 \
    -Inetworklayer/autorouting/ipv6 \
    -Inetworklayer/bgpv4 \
    -Inetworklayer/bgpv4/BGPMessage \
    -Inetworklayer/common \
    -Inetworklayer/contract \
    -Inetworklayer/diffserv \
    -Inetworklayer/extras \
    -Inetworklayer/icmpv6 \
    -Inetworklayer/internetcloud \
    -Inetworklayer/ipv4 \
    -Inetworklayer/ipv6 \
    -Inetworklayer/ipv6/_6lowpan \
    -Inetworklayer/ipv6tunneling \
    -Inetworklayer/ldp \
    -Inetworklayer/manetrouting \
    -Inetworklayer/manetrouting/aodv \
    -Inetworklayer/manetrouting/aodv/aodv-uu \
    -Inetworklayer/manetrouting/base \
    -Inetworklayer/manetrouting/batman \
    -Inetworklayer/manetrouting/batman/batmand \
    -Inetworklayer/manetrouting/batman/batmand/orig \
    -Inetworklayer/manetrouting/dsdv \
    -Inetworklayer/manetrouting/dsr \
    -Inetworklayer/manetrouting/dsr/dsr-uu \
    -Inetworklayer/manetrouting/dymo \
    -Inetworklayer/manetrouting/dymo/dymoum \
    -Inetworklayer/manetrouting/dymo_fau \
    -Inetworklayer/manetrouting/olsr \
    -Inetworklayer/manetrouting/PASER \
    -Inetworklayer/manetrouting/PASER/IP_ADOPTED \
    -Inetworklayer/manetrouting/PASER/paser_buffer \
    -Inetworklayer/manetrouting/PASER/paser_configuration \
    -Inetworklayer/manetrouting/PASER/paser_logic \
    -Inetworklayer/manetrouting/PASER/paser_logic/cryptography \
    -Inetworklayer/manetrouting/PASER/paser_logic/message_processing \
    -Inetworklayer/manetrouting/PASER/paser_logic/route_discovery \
    -Inetworklayer/manetrouting/PASER/paser_logic/route_maintenance \
    -Inetworklayer/manetrouting/PASER/paser_message_structure \
    -Inetworklayer/manetrouting/PASER/paser_socket \
    -Inetworklayer/manetrouting/PASER/paser_tables \
    -Inetworklayer/manetrouting/PASER/paser_timer_management \
    -Inetworklayer/manetrouting/PASER/simple_kdc \
    -Inetworklayer/manetrouting/PASER/simple_kdc/kdc_message \
    -Inetworklayer/mpls \
    -Inetworklayer/ospfv2 \
    -Inetworklayer/ospfv2/interface \
    -Inetworklayer/ospfv2/messagehandler \
    -Inetworklayer/ospfv2/neighbor \
    -Inetworklayer/ospfv2/router \
    -Inetworklayer/rsvp_te \
    -Inetworklayer/ted \
    -Inetworklayer/xmipv6 \
    -Inodes \
    -Inodes/bgp \
    -Inodes/ethernet \
    -Inodes/httptools \
    -Inodes/Ieee8021d \
    -Inodes/inet \
    -Inodes/internetcloud \
    -Inodes/ipv6 \
    -Inodes/mpls \
    -Inodes/ospfv2 \
    -Inodes/rtp \
    -Inodes/wireless \
    -Inodes/xmipv6 \
    -Istatus \
    -Itransport \
    -Itransport/contract \
    -Itransport/rtp \
    -Itransport/rtp/profiles \
    -Itransport/rtp/profiles/avprofile \
    -Itransport/sctp \
    -Itransport/tcp \
    -Itransport/tcp/flavours \
    -Itransport/tcp/queues \
    -Itransport/tcp_common \
    -Itransport/udp \
    -IunderTest \
    -IunderTest/_4gsim \
    -IunderTest/_4gsim/applications \
    -IunderTest/_4gsim/applications/diameter \
    -IunderTest/_4gsim/applications/diameters6a \
    -IunderTest/_4gsim/applications/nas \
    -IunderTest/_4gsim/applications/s1ap \
    -IunderTest/_4gsim/applications/s1ap/message \
    -IunderTest/_4gsim/linklayer \
    -IunderTest/_4gsim/linklayer/lte \
    -IunderTest/_4gsim/networklayer \
    -IunderTest/_4gsim/networklayer/gtp \
    -IunderTest/_4gsim/networklayer/gtp/path \
    -IunderTest/_4gsim/networklayer/gtp/tunnel \
    -IunderTest/_4gsim/nodes \
    -IunderTest/_4gsim/nodes/_4gsim \
    -IunderTest/_4gsim/util \
    -IunderTest/_4gsim/util/asn \
    -IunderTest/_4gsim/util/asn/parser \
    -IunderTest/_4gsim/util/gateway \
    -IunderTest/_4gsim/util/headerserializers \
    -IunderTest/_4gsim/util/subscriber \
    -IunderTest/hip \
    -IunderTest/hip/application \
    -IunderTest/hip/base \
    -IunderTest/hip/nodes \
    -IunderTest/Ieee80211 \
    -IunderTest/Ieee80211/linklayer \
    -IunderTest/Ieee80211/linklayer/ieee80211 \
    -IunderTest/Ieee80211/linklayer/ieee80211/mgmt \
    -IunderTest/Ieee80211/nodes \
    -IunderTest/Ieee80211/nodes/wireless \
    -IunderTest/wimax \
    -IunderTest/wimax/applications \
    -IunderTest/wimax/applications/TrafficGenerator_Erlangen \
    -IunderTest/wimax/linklayer \
    -IunderTest/wimax/linklayer/Ieee80216 \
    -IunderTest/wimax/linklayer/Ieee80216/ControlPlane \
    -IunderTest/wimax/linklayer/Ieee80216/Mac \
    -IunderTest/wimax/linklayer/Ieee80216/MACSublayer \
    -IunderTest/wimax/linklayer/Ieee80216/MACSublayer/QoS \
    -IunderTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver \
    -IunderTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver \
    -IunderTest/wimax/linklayer/Ieee80216/phyLayer \
    -IunderTest/wimax/linklayer/Ieee80216/phyLayer/decider \
    -IunderTest/wimax/linklayer/Ieee80216/phyLayer/snrEval \
    -IunderTest/wimax/linklayer/radio \
    -IunderTest/wimax/nodes \
    -Iutil \
    -Iutil/headerserializers \
    -Iutil/headerserializers/headers \
    -Iutil/headerserializers/ipv4 \
    -Iutil/headerserializers/ipv4/headers \
    -Iutil/headerserializers/sctp \
    -Iutil/headerserializers/sctp/headers \
    -Iutil/headerserializers/tcp \
    -Iutil/headerserializers/tcp/headers \
    -Iutil/headerserializers/udp \
    -Iutil/headerserializers/udp/headers \
    -Iworld \
    -Iworld/annotations \
    -Iworld/httptools \
    -Iworld/obstacles \
    -Iworld/powercontrol \
    -Iworld/radio \
    -Iworld/scenario \
    -Iworld/traci \
    -Iwpan \
    -Iwpan/applications \
    -Iwpan/applications/Ieee802154TestApp \
    -Iwpan/Isabel \
    -Iwpan/Isabel/Analysis \
    -Iwpan/Isabel/Base \
    -Iwpan/linklayer \
    -Iwpan/linklayer/bmac \
    -Iwpan/linklayer/ieee802154 \
    -Iwpan/linklayer/ieee802154/contract \
    -Iwpan/linklayer/ieee802154/mac \
    -Iwpan/networklayer \
    -Iwpan/networklayer/contract \
    -Iwpan/networklayer/Ieee802154StarRouting \
    -Iwpan/nodes \
    -Iwpan/phyLayer \
    -Iwpan/phyLayer/ieee802154

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = /src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/AppBase.o \
    $O/applications/dhcp/DHCPClient.o \
    $O/applications/dhcp/DHCPServer.o \
    $O/applications/ethernet/EtherAppCli.o \
    $O/applications/ethernet/EtherAppSrv.o \
    $O/applications/ethernet/EthernetApplication.o \
    $O/applications/ethernet/EtherTrafGen.o \
    $O/applications/generic/IPvXTrafGen.o \
    $O/applications/generic/IPvXTrafSink.o \
    $O/applications/httptools/HttpBrowser.o \
    $O/applications/httptools/HttpBrowserBase.o \
    $O/applications/httptools/HttpBrowserDirect.o \
    $O/applications/httptools/HttpNodeBase.o \
    $O/applications/httptools/HttpRandom.o \
    $O/applications/httptools/HttpServer.o \
    $O/applications/httptools/HttpServerBase.o \
    $O/applications/httptools/HttpServerDirect.o \
    $O/applications/httptools/HttpServerDirectEvilA.o \
    $O/applications/httptools/HttpServerDirectEvilB.o \
    $O/applications/httptools/HttpServerEvilA.o \
    $O/applications/httptools/HttpServerEvilB.o \
    $O/applications/httptools/HttpUtils.o \
    $O/applications/pingapp/PingApp.o \
    $O/applications/pingapp/PingTestApp.o \
    $O/applications/rtpapp/RTPApplication.o \
    $O/applications/sctpapp/SCTPClient.o \
    $O/applications/sctpapp/SCTPPeer.o \
    $O/applications/sctpapp/SCTPServer.o \
    $O/applications/tcpapp/TCPBasicClientApp.o \
    $O/applications/tcpapp/TCPEchoApp.o \
    $O/applications/tcpapp/TCPGenericCliAppBase.o \
    $O/applications/tcpapp/TCPGenericCliAppBasePromis.o \
    $O/applications/tcpapp/TCPGenericSrvApp.o \
    $O/applications/tcpapp/TCPGenericSrvThread.o \
    $O/applications/tcpapp/TCPSessionApp.o \
    $O/applications/tcpapp/TCPSinkApp.o \
    $O/applications/tcpapp/TCPSrvHostApp.o \
    $O/applications/tcpapp/TelnetApp.o \
    $O/applications/traci/TraCIDemo.o \
    $O/applications/traci/TraCITestApp.o \
    $O/applications/trafgen/TrafGen.o \
    $O/applications/trafgen/TrafGenPar.o \
    $O/applications/udpapp/PASERUdpTrafficReceiver.o \
    $O/applications/udpapp/PASERUdpTrafficSender.o \
    $O/applications/udpapp/UDPBasicApp.o \
    $O/applications/udpapp/UDPBasicBurst.o \
    $O/applications/udpapp/UDPBasicBurstNotification.o \
    $O/applications/udpapp/UDPBasicFlooding.o \
    $O/applications/udpapp/UDPEchoApp.o \
    $O/applications/udpapp/UDPSink.o \
    $O/applications/udpapp/UDPVideoStreamCli.o \
    $O/applications/udpapp/UDPVideoStreamCli2.o \
    $O/applications/udpapp/UDPVideoStreamSvr.o \
    $O/applications/udpapp/UDPVideoStreamSvr2.o \
    $O/applications/util/AddressModule.o \
    $O/applications/voip/SimpleVoIPReceiver.o \
    $O/applications/voip/SimpleVoIPSender.o \
    $O/base/AbstractQueue.o \
    $O/base/BasicModule.o \
    $O/base/ByteArray.o \
    $O/base/ByteArrayBuffer.o \
    $O/base/ByteArrayMessage.o \
    $O/base/Coord.o \
    $O/base/erfc.o \
    $O/base/InterfaceOperations.o \
    $O/base/Join.o \
    $O/base/LifecycleController.o \
    $O/base/MMapBoard.o \
    $O/base/ModuleAccess.o \
    $O/base/NedFunctions.o \
    $O/base/NodeOperations.o \
    $O/base/NotificationBoard.o \
    $O/base/NotifierConsts.o \
    $O/base/PassiveQueueBase.o \
    $O/base/ProtocolMap.o \
    $O/base/QueueBase.o \
    $O/base/QueueWithQoS.o \
    $O/base/ReassemblyBuffer.o \
    $O/base/ResultFilters.o \
    $O/base/Sink.o \
    $O/base/Topology.o \
    $O/base/UnimplementedModule.o \
    $O/base/WeightedTopology.o \
    $O/battery/models/BasicBattery.o \
    $O/battery/models/InetSimpleBattery.o \
    $O/generic/RPSSocket.o \
    $O/linklayer/channels/LinkFailureManager.o \
    $O/linklayer/channels/MyThroughputMeteringChannel.o \
    $O/linklayer/channels/ProgramedFailureChannel.o \
    $O/linklayer/collStats/collStats.o \
    $O/linklayer/common/MACBase.o \
    $O/linklayer/common/WirelessMacBase.o \
    $O/linklayer/contract/MACAddress.o \
    $O/linklayer/ethernet/EtherBus.o \
    $O/linklayer/ethernet/EtherEncap.o \
    $O/linklayer/ethernet/EtherFrameClassifier.o \
    $O/linklayer/ethernet/EtherHub.o \
    $O/linklayer/ethernet/EtherLLC.o \
    $O/linklayer/ethernet/EtherMAC.o \
    $O/linklayer/ethernet/EtherMACBase.o \
    $O/linklayer/ethernet/EtherMACFullDuplex.o \
    $O/linklayer/ethernet/switch/MACRelayUnitBase.o \
    $O/linklayer/ethernet/switch/MACRelayUnitNP.o \
    $O/linklayer/ethernet/switch/MACRelayUnitPP.o \
    $O/linklayer/ext/cSocketRTScheduler.o \
    $O/linklayer/ext/ExtInterface.o \
    $O/linklayer/idealwireless/IdealWirelessMac.o \
    $O/linklayer/ieee80211/mac/Ieee80211DataRate.o \
    $O/linklayer/ieee80211/mac/Ieee80211eClassifier.o \
    $O/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.o \
    $O/linklayer/ieee80211/mac/MultiQueue.o \
    $O/linklayer/ieee80211/mac/WifiMode.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Etx.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/linklayer/ieee80211/radio/BerParseFile.o \
    $O/linklayer/ieee80211/radio/Ieee80211RadioModel.o \
    $O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o \
    $O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o \
    $O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o \
    $O/linklayer/ieee80211mesh/ethernet/EtherEncapMesh.o \
    $O/linklayer/ieee80211mesh/hwmp/hwmp-rtable.o \
    $O/linklayer/ieee80211mesh/hwmp/hwmp.o \
    $O/linklayer/ieee80211mesh/locator/BigUint.o \
    $O/linklayer/ieee80211mesh/locator/LocatorModule.o \
    $O/linklayer/ieee80211mesh/locator/LocatorModuleClient.o \
    $O/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.o \
    $O/linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.o \
    $O/linklayer/ieee80211mesh/mgmt/lwmpls_data.o \
    $O/linklayer/ieee8021d/ethernet/EthernetLink.o \
    $O/linklayer/ieee8021d/ieee8021AD/PortFilt1ad.o \
    $O/linklayer/ieee8021d/ieee8021AH/Admacrelay.o \
    $O/linklayer/ieee8021d/ieee8021AH/Cache1AH.o \
    $O/linklayer/ieee8021d/ieee8021AH/IComponent.o \
    $O/linklayer/ieee8021d/ieee8021AH/ITagTable.o \
    $O/linklayer/ieee8021d/ieee8021AH/PortFilt1ah.o \
    $O/linklayer/ieee8021d/ieee8021Q/Cache1Q.o \
    $O/linklayer/ieee8021d/ieee8021Q/PortFilt.o \
    $O/linklayer/ieee8021d/ieee8021Q/Relay1Q.o \
    $O/linklayer/ieee8021d/MVRP/MVRP.o \
    $O/linklayer/ieee8021d/RSTP/RSTP.o \
    $O/linklayer/ieee8021d/Tester/TesterObject.o \
    $O/linklayer/loopback/Loopback.o \
    $O/linklayer/ppp/PPP.o \
    $O/linklayer/queue/AlgorithmicDropperBase.o \
    $O/linklayer/queue/DropTailQueue.o \
    $O/linklayer/queue/FIFOQueue.o \
    $O/linklayer/queue/PriorityScheduler.o \
    $O/linklayer/queue/REDDropper.o \
    $O/linklayer/queue/SchedulerBase.o \
    $O/linklayer/queue/ThresholdDropper.o \
    $O/linklayer/queue/WeightedFairQueue.o \
    $O/linklayer/queue/WRRScheduler.o \
    $O/linklayer/radio/GenericRadioModel.o \
    $O/linklayer/radio/IdealRadio.o \
    $O/linklayer/radio/Modulation.o \
    $O/linklayer/radio/Radio.o \
    $O/linklayer/radio/propagation/FreeSpaceModel.o \
    $O/linklayer/radio/propagation/LogNormalShadowingModel.o \
    $O/linklayer/radio/propagation/NakagamiModel.o \
    $O/linklayer/radio/propagation/RayleighModel.o \
    $O/linklayer/radio/propagation/RiceModel.o \
    $O/linklayer/radio/propagation/TwoRayGroundModel.o \
    $O/linklayer/rstp/MACRelayUnitSTPNP.o \
    $O/linklayer/rstp/STPDefinitions.o \
    $O/mobility/models/ANSimMobility.o \
    $O/mobility/models/BonnMotionFileCache.o \
    $O/mobility/models/BonnMotionMobility.o \
    $O/mobility/models/ChiangMobility.o \
    $O/mobility/models/CircleMobility.o \
    $O/mobility/models/ConstSpeedMobility.o \
    $O/mobility/models/GaussMarkovMobility.o \
    $O/mobility/models/LaptopModelManager.o \
    $O/mobility/models/LinearMobility.o \
    $O/mobility/models/LinearNodeDistributionMobility.o \
    $O/mobility/models/LineSegmentsMobilityBase.o \
    $O/mobility/models/MassMobility.o \
    $O/mobility/models/MoBANCoordinator.o \
    $O/mobility/models/MoBANLocal.o \
    $O/mobility/models/MobilityAccess.o \
    $O/mobility/models/MobilityBase.o \
    $O/mobility/models/MovingMobilityBase.o \
    $O/mobility/models/Ns2MotionMobility.o \
    $O/mobility/models/Posture.o \
    $O/mobility/models/PostureTransition.o \
    $O/mobility/models/RandomWPMobility.o \
    $O/mobility/models/RectangleMobility.o \
    $O/mobility/models/StaticGridMobility.o \
    $O/mobility/models/StationaryMobility.o \
    $O/mobility/models/TraCIMobility.o \
    $O/mobility/models/TractorMobility.o \
    $O/mobility/models/TurtleMobility.o \
    $O/networklayer/arp/ARP.o \
    $O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o \
    $O/networklayer/autorouting/ipv4/HostAutoConfigurator.o \
    $O/networklayer/autorouting/ipv4/HostAutoConfigurator2.o \
    $O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o \
    $O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o \
    $O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o \
    $O/networklayer/bgpv4/BGPFSM.o \
    $O/networklayer/bgpv4/BGPRouting.o \
    $O/networklayer/bgpv4/BGPSession.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdate.o \
    $O/networklayer/common/InterfaceEntry.o \
    $O/networklayer/common/InterfaceTable.o \
    $O/networklayer/contract/IPv4Address.o \
    $O/networklayer/contract/IPv4ControlInfo.o \
    $O/networklayer/contract/IPv6Address.o \
    $O/networklayer/contract/IPv6ControlInfo.o \
    $O/networklayer/contract/IPvXAddress.o \
    $O/networklayer/contract/IPvXAddressResolver.o \
    $O/networklayer/diffserv/BehaviorAggregateClassifier.o \
    $O/networklayer/diffserv/DiffservUtil.o \
    $O/networklayer/diffserv/DSCPMarker.o \
    $O/networklayer/diffserv/MultiFieldClassifier.o \
    $O/networklayer/diffserv/SingleRateThreeColorMeter.o \
    $O/networklayer/diffserv/TokenBucketMeter.o \
    $O/networklayer/diffserv/TwoRateThreeColorMeter.o \
    $O/networklayer/extras/Dummy.o \
    $O/networklayer/extras/FailureManager.o \
    $O/networklayer/icmpv6/ICMPv6.o \
    $O/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/networklayer/internetcloud/CloudDelayerBase.o \
    $O/networklayer/internetcloud/InternetCloudTaggerChannel.o \
    $O/networklayer/internetcloud/MatrixCloudDelayer.o \
    $O/networklayer/ipv4/ErrorHandling.o \
    $O/networklayer/ipv4/ICMP.o \
    $O/networklayer/ipv4/IGMPv2.o \
    $O/networklayer/ipv4/IPv4.o \
    $O/networklayer/ipv4/IPv4FragBuf.o \
    $O/networklayer/ipv4/IPv4InterfaceData.o \
    $O/networklayer/ipv4/IPv4Route.o \
    $O/networklayer/ipv4/IPv4RouteRule.o \
    $O/networklayer/ipv4/NetworkInfo.o \
    $O/networklayer/ipv4/RoutingTable.o \
    $O/networklayer/ipv4/RoutingTableParser.o \
    $O/networklayer/ipv4/RoutingTableRecorder.o \
    $O/networklayer/ipv6/IPv6.o \
    $O/networklayer/ipv6/IPv6Datagram.o \
    $O/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders.o \
    $O/networklayer/ipv6/IPv6FragBuf.o \
    $O/networklayer/ipv6/IPv6InterfaceData.o \
    $O/networklayer/ipv6/RoutingTable6.o \
    $O/networklayer/ipv6/_6lowpan/_6lowpan.o \
    $O/networklayer/ipv6tunneling/IPv6Tunneling.o \
    $O/networklayer/ldp/LDP.o \
    $O/networklayer/manetrouting/aodv/aodv_msg_struct.o \
    $O/networklayer/manetrouting/aodv/aodv_uu_omnet.o \
    $O/networklayer/manetrouting/aodv/packet_queue_omnet.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_hello.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_socket.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/debug_aodv.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/list.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/locality.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/routing_table.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/seek_list.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.o \
    $O/networklayer/manetrouting/base/ManetAddress.o \
    $O/networklayer/manetrouting/base/ManetRoutingBase.o \
    $O/networklayer/manetrouting/batman/BatmanMain.o \
    $O/networklayer/manetrouting/batman/batmand/batman.o \
    $O/networklayer/manetrouting/batman/batmand/bitarray.o \
    $O/networklayer/manetrouting/batman/batmand/hna.o \
    $O/networklayer/manetrouting/batman/batmand/originator.o \
    $O/networklayer/manetrouting/batman/batmand/os.o \
    $O/networklayer/manetrouting/batman/batmand/ring_buffer.o \
    $O/networklayer/manetrouting/batman/batmand/schedule.o \
    $O/networklayer/manetrouting/dsdv/DSDV_2.o \
    $O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o \
    $O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/neigh.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o \
    $O/networklayer/manetrouting/dymo/dymo_msg_struct.o \
    $O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o \
    $O/networklayer/manetrouting/dymo/dymo_um_omnet.o \
    $O/networklayer/manetrouting/dymo/dymoum/blacklist.o \
    $O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_re.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o \
    $O/networklayer/manetrouting/dymo/dymoum/rtable.o \
    $O/networklayer/manetrouting/dymo/dymoum/timer_queue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o \
    $O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o \
    $O/networklayer/manetrouting/olsr/OLSR.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_state.o \
    $O/networklayer/manetrouting/olsr/OLSR_rtable.o \
    $O/networklayer/manetrouting/olsr/OLSR_state.o \
    $O/networklayer/manetrouting/olsr/OLSROPT.o \
    $O/networklayer/manetrouting/PASER/IP_ADOPTED/IP_paser.o \
    $O/networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.o \
    $O/networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.o \
    $O/networklayer/manetrouting/PASER/paser_logic/PASER_Global.o \
    $O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.o \
    $O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.o \
    $O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.o \
    $O/networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.o \
    $O/networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.o \
    $O/networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.o \
    $O/networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.o \
    $O/networklayer/manetrouting/PASER/paser_socket/PASER_Socket.o \
    $O/networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.o \
    $O/networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.o \
    $O/networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Entry.o \
    $O/networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.o \
    $O/networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.o \
    $O/networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.o \
    $O/networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.o \
    $O/networklayer/manetrouting/PASER/simple_kdc/SimpleKDC.o \
    $O/networklayer/mpls/LIBTable.o \
    $O/networklayer/mpls/MPLS.o \
    $O/networklayer/mpls/MPLSPacket.o \
    $O/networklayer/ospfv2/OSPFConfigReader.o \
    $O/networklayer/ospfv2/OSPFRouting.o \
    $O/networklayer/ospfv2/interface/OSPFInterface.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceState.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/networklayer/ospfv2/messagehandler/HelloHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/networklayer/ospfv2/messagehandler/MessageHandler.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighbor.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborState.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/networklayer/ospfv2/router/ASExternalLSA.o \
    $O/networklayer/ospfv2/router/LSA.o \
    $O/networklayer/ospfv2/router/NetworkLSA.o \
    $O/networklayer/ospfv2/router/OSPFArea.o \
    $O/networklayer/ospfv2/router/OSPFRouter.o \
    $O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o \
    $O/networklayer/ospfv2/router/RouterLSA.o \
    $O/networklayer/ospfv2/router/SummaryLSA.o \
    $O/networklayer/rsvp_te/RSVP.o \
    $O/networklayer/rsvp_te/SimpleClassifier.o \
    $O/networklayer/rsvp_te/Utils.o \
    $O/networklayer/ted/LinkStateRouting.o \
    $O/networklayer/ted/TED.o \
    $O/networklayer/xmipv6/BindingCache.o \
    $O/networklayer/xmipv6/BindingUpdateList.o \
    $O/networklayer/xmipv6/MobilityHeader.o \
    $O/networklayer/xmipv6/xMIPv6.o \
    $O/status/NodeStatus.o \
    $O/transport/contract/SCTPSocket.o \
    $O/transport/contract/TCPSocket.o \
    $O/transport/contract/TCPSocketMap.o \
    $O/transport/contract/UDPSocket.o \
    $O/transport/rtp/reports.o \
    $O/transport/rtp/RTCP.o \
    $O/transport/rtp/RTCPPacket.o \
    $O/transport/rtp/RTP.o \
    $O/transport/rtp/RTPInnerPacket.o \
    $O/transport/rtp/RTPPacket.o \
    $O/transport/rtp/RTPParticipantInfo.o \
    $O/transport/rtp/RTPPayloadReceiver.o \
    $O/transport/rtp/RTPPayloadSender.o \
    $O/transport/rtp/RTPProfile.o \
    $O/transport/rtp/RTPReceiverInfo.o \
    $O/transport/rtp/RTPSenderInfo.o \
    $O/transport/rtp/sdes.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfile.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o \
    $O/transport/sctp/SCTP.o \
    $O/transport/sctp/SCTPAlg.o \
    $O/transport/sctp/SCTPAssociationAddIP.o \
    $O/transport/sctp/SCTPAssociationBase.o \
    $O/transport/sctp/SCTPAssociationEventProc.o \
    $O/transport/sctp/SCTPAssociationRcvMessage.o \
    $O/transport/sctp/SCTPAssociationSendAll.o \
    $O/transport/sctp/SCTPAssociationStreamReset.o \
    $O/transport/sctp/SCTPAssociationUtil.o \
    $O/transport/sctp/SCTPCCFunctions.o \
    $O/transport/sctp/SCTPGapList.o \
    $O/transport/sctp/SCTPMessage.o \
    $O/transport/sctp/SCTPQueue.o \
    $O/transport/sctp/SCTPReceiveStream.o \
    $O/transport/sctp/SCTPSendStream.o \
    $O/transport/sctp/SCTPSSFunctions.o \
    $O/transport/tcp/TCP.o \
    $O/transport/tcp/TCPConnectionBase.o \
    $O/transport/tcp/TCPConnectionEventProc.o \
    $O/transport/tcp/TCPConnectionRcvSegment.o \
    $O/transport/tcp/TCPConnectionSackUtil.o \
    $O/transport/tcp/TCPConnectionUtil.o \
    $O/transport/tcp/TCPSACKRexmitQueue.o \
    $O/transport/tcp/flavours/DumbTCP.o \
    $O/transport/tcp/flavours/TCPBaseAlg.o \
    $O/transport/tcp/flavours/TCPNewReno.o \
    $O/transport/tcp/flavours/TCPNoCongestionControl.o \
    $O/transport/tcp/flavours/TCPReno.o \
    $O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o \
    $O/transport/tcp/flavours/TCPTahoe.o \
    $O/transport/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/transport/tcp/flavours/TCPVegas.o \
    $O/transport/tcp/flavours/TCPWestwood.o \
    $O/transport/tcp/queues/TCPByteStreamRcvQueue.o \
    $O/transport/tcp/queues/TCPByteStreamSendQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/transport/tcp_common/TCPSegment.o \
    $O/transport/tcp_common/TCPSpoof.o \
    $O/transport/udp/UDP.o \
    $O/underTest/_4gsim/applications/diameter/DiameterApplication.o \
    $O/underTest/_4gsim/applications/diameter/DiameterBase.o \
    $O/underTest/_4gsim/applications/diameter/DiameterConnection.o \
    $O/underTest/_4gsim/applications/diameter/DiameterMessage.o \
    $O/underTest/_4gsim/applications/diameter/DiameterPeer.o \
    $O/underTest/_4gsim/applications/diameter/DiameterSession.o \
    $O/underTest/_4gsim/applications/diameter/DiameterUtils.o \
    $O/underTest/_4gsim/applications/diameters6a/DiameterS6a.o \
    $O/underTest/_4gsim/applications/nas/EMMEntity.o \
    $O/underTest/_4gsim/applications/nas/ESMEntity.o \
    $O/underTest/_4gsim/applications/nas/NAS.o \
    $O/underTest/_4gsim/applications/nas/NASUtils.o \
    $O/underTest/_4gsim/applications/s1ap/S1AP.o \
    $O/underTest/_4gsim/applications/s1ap/S1APConnection.o \
    $O/underTest/_4gsim/applications/s1ap/S1APUtils.o \
    $O/underTest/_4gsim/applications/s1ap/message/S1APContainer.o \
    $O/underTest/_4gsim/applications/s1ap/message/S1APIe.o \
    $O/underTest/_4gsim/applications/s1ap/message/S1APPdu.o \
    $O/underTest/_4gsim/linklayer/lte/LTERadio.o \
    $O/underTest/_4gsim/linklayer/lte/LTERadioModel.o \
    $O/underTest/_4gsim/networklayer/gtp/GTP.o \
    $O/underTest/_4gsim/networklayer/gtp/GTPControl.o \
    $O/underTest/_4gsim/networklayer/gtp/GTPMessage.o \
    $O/underTest/_4gsim/networklayer/gtp/GTPUser.o \
    $O/underTest/_4gsim/networklayer/gtp/GTPUtils.o \
    $O/underTest/_4gsim/networklayer/gtp/path/GTPPath.o \
    $O/underTest/_4gsim/networklayer/gtp/path/GTPPathTable.o \
    $O/underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.o \
    $O/underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.o \
    $O/underTest/_4gsim/util/DCTDump.o \
    $O/underTest/_4gsim/util/asn/ASNTypes.o \
    $O/underTest/_4gsim/util/asn/PerDecoder.o \
    $O/underTest/_4gsim/util/asn/PerEncoder.o \
    $O/underTest/_4gsim/util/gateway/Gateway.o \
    $O/underTest/_4gsim/util/gateway/GatewayTable.o \
    $O/underTest/_4gsim/util/headerserializers/DiameterSerializer.o \
    $O/underTest/_4gsim/util/headerserializers/GTPSerializer.o \
    $O/underTest/_4gsim/util/headerserializers/NASSerializer.o \
    $O/underTest/_4gsim/util/subscriber/BearerContext.o \
    $O/underTest/_4gsim/util/subscriber/LTEUtils.o \
    $O/underTest/_4gsim/util/subscriber/PDNConnection.o \
    $O/underTest/_4gsim/util/subscriber/Subscriber.o \
    $O/underTest/_4gsim/util/subscriber/SubscriberTable.o \
    $O/underTest/hip/application/DNSBase.o \
    $O/underTest/hip/application/DNSClient.o \
    $O/underTest/hip/application/UDPEchoStream.o \
    $O/underTest/hip/base/HIP.o \
    $O/underTest/hip/base/HipFsm.o \
    $O/underTest/hip/base/HipFsmBase.o \
    $O/underTest/hip/base/RvsHIP.o \
    $O/underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211AgentSTAExtended.o \
    $O/underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtAPExtended.o \
    $O/underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtBaseExtended.o \
    $O/underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtSTAExtended.o \
    $O/underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtWDSExtended.o \
    $O/underTest/wimax/applications/TrafficGenerator_Erlangen/WiMAXQoSTrafficGenerator.o \
    $O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneAP.o \
    $O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.o \
    $O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseAP.o \
    $O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseMS.o \
    $O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.o \
    $O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneMobilestation.o \
    $O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneMS.o \
    $O/underTest/wimax/linklayer/Ieee80216/Mac/CommonPartSublayerDown.o \
    $O/underTest/wimax/linklayer/Ieee80216/Mac/CommonPartSublayerUp.o \
    $O/underTest/wimax/linklayer/Ieee80216/Mac/ConvergenceSublayerDown.o \
    $O/underTest/wimax/linklayer/Ieee80216/Mac/ConvergenceSublayerUp.o \
    $O/underTest/wimax/linklayer/Ieee80216/Mac/SecuritySublayerDown.o \
    $O/underTest/wimax/linklayer/Ieee80216/Mac/SecuritySublayerUp.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerAuthorizationModule.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerControlModule.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerFragmentation.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerQoSAP.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerControlModule.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerHeaderCompression.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerTrafficClassification.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/ConvergenceSublayerReceiver.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/SecuritySublayerReceiver.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/CommonPartSublayerTransceiver.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/ConvergenceSublayerTransceiver.o \
    $O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/SecuritySublayerTransceiver.o \
    $O/underTest/wimax/linklayer/Ieee80216/phyLayer/decider/Decider80216.o \
    $O/underTest/wimax/linklayer/radio/Ieee80216Radio.o \
    $O/underTest/wimax/linklayer/radio/Ieee80216RadioModel.o \
    $O/underTest/wimax/linklayer/radio/WiMAXPathLossReceptionModel.o \
    $O/util/common.o \
    $O/util/Delayer.o \
    $O/util/dijktraKShortest.o \
    $O/util/GlobalWirelessLinkInspector.o \
    $O/util/int128.o \
    $O/util/Macho.o \
    $O/util/MessageChecker.o \
    $O/util/NetAnimTrace.o \
    $O/util/opp_utils.o \
    $O/util/OrdinalBasedDropper.o \
    $O/util/OrdinalBasedDuplicator.o \
    $O/util/PacketDump.o \
    $O/util/PatternMatcher.o \
    $O/util/PcapDump.o \
    $O/util/PcapRecorder.o \
    $O/util/TCPDump.o \
    $O/util/ThruputMeter.o \
    $O/util/ThruputMeteringChannel.o \
    $O/util/uint128.o \
    $O/util/WirelessGetNeig.o \
    $O/util/WirelessNumHops.o \
    $O/util/XMLUtils.o \
    $O/util/headerserializers/TCPIPchecksum.o \
    $O/util/headerserializers/ipv4/ICMPSerializer.o \
    $O/util/headerserializers/ipv4/IGMPSerializer.o \
    $O/util/headerserializers/ipv4/IPv4Serializer.o \
    $O/util/headerserializers/sctp/SCTPSerializer.o \
    $O/util/headerserializers/tcp/TCPSerializer.o \
    $O/util/headerserializers/udp/UDPSerializer.o \
    $O/world/annotations/AnnotationDummy.o \
    $O/world/annotations/AnnotationManager.o \
    $O/world/httptools/HttpController.o \
    $O/world/obstacles/Obstacle.o \
    $O/world/obstacles/ObstacleControl.o \
    $O/world/powercontrol/PowerControlManager.o \
    $O/world/radio/ChannelAccess.o \
    $O/world/radio/ChannelControl.o \
    $O/world/radio/IdealChannelModel.o \
    $O/world/radio/IdealChannelModelAccess.o \
    $O/world/scenario/ScenarioManager.o \
    $O/world/traci/TraCIScenarioManager.o \
    $O/world/traci/TraCIScenarioManagerLaunchd.o \
    $O/wpan/applications/Ieee802154TestApp/Ieee802154TestApp.o \
    $O/wpan/Isabel/Analysis/AnalysisEnergy.o \
    $O/wpan/Isabel/Base/Display.o \
    $O/wpan/linklayer/bmac/BMacLayer.o \
    $O/wpan/linklayer/ieee802154/mac/csma802154.o \
    $O/wpan/linklayer/ieee802154/mac/Ieee802154Link.o \
    $O/wpan/linklayer/ieee802154/mac/Ieee802154Mac.o \
    $O/wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.o \
    $O/wpan/phyLayer/ieee802154/Ieee802154Phy.o \
    $O/wpan/phyLayer/ieee802154/Ieee802154RadioModel.o \
    $O/applications/dhcp/DHCP_m.o \
    $O/applications/ethernet/EtherApp_m.o \
    $O/applications/httptools/HttpEventMessages_m.o \
    $O/applications/httptools/HttpMessages_m.o \
    $O/applications/pingapp/PingPayload_m.o \
    $O/applications/tcpapp/GenericAppMsg_m.o \
    $O/applications/udpapp/PaserTrafficDataMsg_m.o \
    $O/applications/udpapp/UDPEchoAppMsg_m.o \
    $O/applications/udpapp/UDPVideoData_m.o \
    $O/applications/udpapp/VideoPacket_m.o \
    $O/applications/voip/SimpleVoIPPacket_m.o \
    $O/base/ByteArray_m.o \
    $O/base/ByteArrayMessage_m.o \
    $O/linklayer/channels/LinkFailureMessage_m.o \
    $O/linklayer/contract/Ieee802Ctrl_m.o \
    $O/linklayer/contract/PhyControlInfo_m.o \
    $O/linklayer/ethernet/EtherFrame_m.o \
    $O/linklayer/ext/ExtFrame_m.o \
    $O/linklayer/idealwireless/IdealWirelessFrame_m.o \
    $O/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/linklayer/ieee80211/mgmt/ETXPacket_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/linklayer/ieee80211mesh/locator/locatorPkt_m.o \
    $O/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.o \
    $O/linklayer/ieee8021d/common/Delivery_m.o \
    $O/linklayer/ieee8021d/MVRP/MVRPDU_m.o \
    $O/linklayer/ieee8021d/RSTP/BPDU_m.o \
    $O/linklayer/ppp/PPPFrame_m.o \
    $O/linklayer/radio/AirFrame_m.o \
    $O/linklayer/radio/IdealAirFrame_m.o \
    $O/linklayer/radio/Radio80211aControlInfo_m.o \
    $O/linklayer/rstp/bpdu_m.o \
    $O/linklayer/rstp/stpTimers_m.o \
    $O/networklayer/arp/ARPPacket_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPHeader_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPOpen_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdate_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o \
    $O/networklayer/contract/IPProtocolId_m.o \
    $O/networklayer/contract/IPv4ControlInfo_m.o \
    $O/networklayer/contract/IPv6ControlInfo_m.o \
    $O/networklayer/diffserv/DSCP_m.o \
    $O/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/networklayer/ipv4/ICMPMessage_m.o \
    $O/networklayer/ipv4/IGMPMessage_m.o \
    $O/networklayer/ipv4/IPv4Datagram_m.o \
    $O/networklayer/ipv6/IPv6Datagram_m.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/networklayer/ipv6/_6lowpan/_6lowpanDatagram_m.o \
    $O/networklayer/ldp/LDPPacket_m.o \
    $O/networklayer/manetrouting/aodv/aodv_msg_struct_m.o \
    $O/networklayer/manetrouting/base/ControlInfoBreakLink_m.o \
    $O/networklayer/manetrouting/base/ControlManetRouting_m.o \
    $O/networklayer/manetrouting/base/LocatorNotificationInfo_m.o \
    $O/networklayer/manetrouting/base/MeshControlInfo_m.o \
    $O/networklayer/manetrouting/batman/BatmanMsg_m.o \
    $O/networklayer/manetrouting/dsdv/DSDVhello_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o \
    $O/networklayer/manetrouting/olsr/OLSRpkt_m.o \
    $O/networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.o \
    $O/networklayer/ospfv2/OSPFPacket_m.o \
    $O/networklayer/ospfv2/OSPFTimer_m.o \
    $O/networklayer/rsvp_te/IntServ_m.o \
    $O/networklayer/rsvp_te/RSVPHello_m.o \
    $O/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/networklayer/ted/LinkStatePacket_m.o \
    $O/networklayer/ted/TED_m.o \
    $O/networklayer/xmipv6/MobilityHeader_m.o \
    $O/transport/contract/SCTPCommand_m.o \
    $O/transport/contract/TCPCommand_m.o \
    $O/transport/contract/UDPControlInfo_m.o \
    $O/transport/rtp/reports_m.o \
    $O/transport/rtp/RTCPPacket1_m.o \
    $O/transport/rtp/RTCPPacket2_m.o \
    $O/transport/rtp/RTCPPacket3_m.o \
    $O/transport/rtp/RTPInnerPacket_m.o \
    $O/transport/rtp/RTPInterfacePacket_m.o \
    $O/transport/rtp/RTPPacket_m.o \
    $O/transport/rtp/RTPParticipantInfo_m.o \
    $O/transport/rtp/RTPSenderControlMessage_m.o \
    $O/transport/rtp/RTPSenderStatusMessage_m.o \
    $O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/transport/sctp/SCTPMessage_m.o \
    $O/transport/tcp_common/TCPSegment_m.o \
    $O/transport/udp/UDPPacket_m.o \
    $O/underTest/_4gsim/applications/diameter/DiameterMessage_m.o \
    $O/underTest/_4gsim/applications/nas/NASMessage_m.o \
    $O/underTest/_4gsim/applications/s1ap/S1APControlInfo_m.o \
    $O/underTest/_4gsim/networklayer/gtp/GTPMessage_m.o \
    $O/underTest/hip/application/DNSBaseMsg_m.o \
    $O/underTest/hip/application/DNSRegRvsMsg_m.o \
    $O/underTest/hip/base/HipMessages_m.o \
    $O/underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.o \
    $O/underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.o \
    $O/underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.o \
    $O/underTest/wimax/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.o \
    $O/underTest/wimax/linklayer/Ieee80216/phyLayer/SnrControlInfo_m.o \
    $O/world/powercontrol/PowerControlMessages_m.o \
    $O/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.o \
    $O/wpan/linklayer/bmac/bmacpkt_m.o \
    $O/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.o \
    $O/wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.o \
    $O/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.o

# Message files
MSGFILES = \
    applications/dhcp/DHCP.msg \
    applications/ethernet/EtherApp.msg \
    applications/httptools/HttpEventMessages.msg \
    applications/httptools/HttpMessages.msg \
    applications/pingapp/PingPayload.msg \
    applications/tcpapp/GenericAppMsg.msg \
    applications/udpapp/PaserTrafficDataMsg.msg \
    applications/udpapp/UDPEchoAppMsg.msg \
    applications/udpapp/UDPVideoData.msg \
    applications/udpapp/VideoPacket.msg \
    applications/voip/SimpleVoIPPacket.msg \
    base/ByteArray.msg \
    base/ByteArrayMessage.msg \
    linklayer/channels/LinkFailureMessage.msg \
    linklayer/contract/Ieee802Ctrl.msg \
    linklayer/contract/PhyControlInfo.msg \
    linklayer/ethernet/EtherFrame.msg \
    linklayer/ext/ExtFrame.msg \
    linklayer/idealwireless/IdealWirelessFrame.msg \
    linklayer/ieee80211/mac/Ieee80211Frame.msg \
    linklayer/ieee80211/mgmt/ETXPacket.msg \
    linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    linklayer/ieee80211mesh/locator/locatorPkt.msg \
    linklayer/ieee80211mesh/mgmt/LWMPLSPacket.msg \
    linklayer/ieee8021d/common/Delivery.msg \
    linklayer/ieee8021d/MVRP/MVRPDU.msg \
    linklayer/ieee8021d/RSTP/BPDU.msg \
    linklayer/ppp/PPPFrame.msg \
    linklayer/radio/AirFrame.msg \
    linklayer/radio/IdealAirFrame.msg \
    linklayer/radio/Radio80211aControlInfo.msg \
    linklayer/rstp/bpdu.msg \
    linklayer/rstp/stpTimers.msg \
    networklayer/arp/ARPPacket.msg \
    networklayer/bgpv4/BGPMessage/BGPASPathSegment.msg \
    networklayer/bgpv4/BGPMessage/BGPHeader.msg \
    networklayer/bgpv4/BGPMessage/BGPKeepAlive.msg \
    networklayer/bgpv4/BGPMessage/BGPOpen.msg \
    networklayer/bgpv4/BGPMessage/BGPUpdate.msg \
    networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes.msg \
    networklayer/contract/IPProtocolId.msg \
    networklayer/contract/IPv4ControlInfo.msg \
    networklayer/contract/IPv6ControlInfo.msg \
    networklayer/diffserv/DSCP.msg \
    networklayer/icmpv6/ICMPv6Message.msg \
    networklayer/icmpv6/IPv6NDMessage.msg \
    networklayer/ipv4/ICMPMessage.msg \
    networklayer/ipv4/IGMPMessage.msg \
    networklayer/ipv4/IPv4Datagram.msg \
    networklayer/ipv6/IPv6Datagram.msg \
    networklayer/ipv6/IPv6ExtensionHeaders.msg \
    networklayer/ipv6/_6lowpan/_6lowpanDatagram.msg \
    networklayer/ldp/LDPPacket.msg \
    networklayer/manetrouting/aodv/aodv_msg_struct.msg \
    networklayer/manetrouting/base/ControlInfoBreakLink.msg \
    networklayer/manetrouting/base/ControlManetRouting.msg \
    networklayer/manetrouting/base/LocatorNotificationInfo.msg \
    networklayer/manetrouting/base/MeshControlInfo.msg \
    networklayer/manetrouting/batman/BatmanMsg.msg \
    networklayer/manetrouting/dsdv/DSDVhello.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Packet.msg \
    networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RERR.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RM.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREP.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREQ.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg \
    networklayer/manetrouting/dymo_fau/DYMO_UERR.msg \
    networklayer/manetrouting/olsr/OLSRpkt.msg \
    networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message.msg \
    networklayer/ospfv2/OSPFPacket.msg \
    networklayer/ospfv2/OSPFTimer.msg \
    networklayer/rsvp_te/IntServ.msg \
    networklayer/rsvp_te/RSVPHello.msg \
    networklayer/rsvp_te/RSVPPacket.msg \
    networklayer/rsvp_te/RSVPPathMsg.msg \
    networklayer/rsvp_te/RSVPResvMsg.msg \
    networklayer/rsvp_te/SignallingMsg.msg \
    networklayer/ted/LinkStatePacket.msg \
    networklayer/ted/TED.msg \
    networklayer/xmipv6/MobilityHeader.msg \
    transport/contract/SCTPCommand.msg \
    transport/contract/TCPCommand.msg \
    transport/contract/UDPControlInfo.msg \
    transport/rtp/reports.msg \
    transport/rtp/RTCPPacket1.msg \
    transport/rtp/RTCPPacket2.msg \
    transport/rtp/RTCPPacket3.msg \
    transport/rtp/RTPInnerPacket.msg \
    transport/rtp/RTPInterfacePacket.msg \
    transport/rtp/RTPPacket.msg \
    transport/rtp/RTPParticipantInfo.msg \
    transport/rtp/RTPSenderControlMessage.msg \
    transport/rtp/RTPSenderStatusMessage.msg \
    transport/rtp/profiles/avprofile/RTPMpegPacket.msg \
    transport/sctp/SCTPMessage.msg \
    transport/tcp_common/TCPSegment.msg \
    transport/udp/UDPPacket.msg \
    underTest/_4gsim/applications/diameter/DiameterMessage.msg \
    underTest/_4gsim/applications/nas/NASMessage.msg \
    underTest/_4gsim/applications/s1ap/S1APControlInfo.msg \
    underTest/_4gsim/networklayer/gtp/GTPMessage.msg \
    underTest/hip/application/DNSBaseMsg.msg \
    underTest/hip/application/DNSRegRvsMsg.msg \
    underTest/hip/base/HipMessages.msg \
    underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages.msg \
    underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives.msg \
    underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader.msg \
    underTest/wimax/linklayer/Ieee80216/Mac/WiMAXRadioControl.msg \
    underTest/wimax/linklayer/Ieee80216/phyLayer/SnrControlInfo.msg \
    world/powercontrol/PowerControlMessages.msg \
    wpan/applications/Ieee802154TestApp/Ieee802154AppPkt.msg \
    wpan/linklayer/bmac/bmacpkt.msg \
    wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives.msg \
    wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg \
    wpan/networklayer/contract/Ieee802154NetworkCtrlInfo.msg

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

COPTS = $(CFLAGS) \
    -DWITH_TCP_COMMON \
    -DWITH_TCP_INET \
    -DWITH_IPv4 \
    -DWITH_IPv6 \
    -DWITH_xMIPv6 \
    -DWITH_UDP \
    -DWITH_RTP \
    -DWITH_SCTP \
    -DWITH_DHCP \
    -DWITH_ETHERNET \
    -DWITH_PPP \
    -DWITH_EXT_IF \
    -DWITH_MPLS \
    -DWITH_OSPFv2 \
    -DWITH_BGPv4 \
    -DWITH_TRACI \
    -DWITH_MANET \
    -DINET_EXPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH) -PINET_API

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
# inserted from file 'makefrag':
# if you want to use external interfaces with inet, you should install
# winpcap (on windows) or libpcap-dev (on linux) and re-run ./configure in
# the omnetpp root directory and comment out the following line:
HAVE_PCAP=no

ifeq ($(HAVE_PCAP),yes)
  # link with PCAP libs too
  LIBS += $(PCAP_LIBS)
else
  # remove the HAVE_PCAP define if we do not need PCAP
  CFLAGS := $(filter-out -DHAVE_PCAP,$(CFLAGS))
endif

#
# TCP implementaion using the Network Simulation Cradle (TCP_NSC feature)
#
ifneq (,$(findstring -DWITH_TCP_NSC,$(COPTS)))
  NSC_VERSION= $(shell ls -d ../3rdparty/nsc* 2>/dev/null | sed 's/^.*-//')
  ifneq ($(NSC_VERSION),)
    CFLAGS += -I../3rdparty/nsc-$(NSC_VERSION)/sim -DHAVE_NSC
    LIBS += -Wl,-rpath,`abspath ../3rdparty/nsc-$(NSC_VERSION)`
  endif
endif

#
# pkg-config:
#
HAVE_PKGCFG := $(shell pkg-config --version 2>/dev/null)
ifeq ($(strip $(HAVE_PKGCFG)),)
  HAVE_PKGCFG := no
else
  HAVE_PKGCFG := yes
  PKGCFG := $(shell which pkg-config)
endif

#
# VoipStream feature:
#
ifneq (,$(findstring -DWITH_VOIPSTREAM,$(COPTS)))
  ifeq ($(HAVE_PKGCFG), yes)
    HAVE_FFMPEG := $(shell $(PKGCFG) --exists libavcodec libavformat libavutil && echo yes || echo no)
    ifeq ($(HAVE_FFMPEG), yes)
      LIBS += $(shell $(PKGCFG) --libs libavcodec libavformat libavutil)
      CFLAGS += $(shell $(PKGCFG) --cflags libavcodec libavformat libavutil) -DHAVE_FFMPEG
    endif
  endif
endif

#
# # # Integrate Contiki 6LoWPAN into INETMANET # # #
#
# When you want to integrate Contiki's 6LoWPAN implementation,
# enable it here by un-commenting the following line and re-compile INETMANET
#
include ./networklayer/ipv6/_6lowpan/Makefile.6lowpan

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
	$(Q)-rm -f inet inet.exe libinet.so libinet.a libinet.dll libinet.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f applications/*_m.cc applications/*_m.h
	$(Q)-rm -f applications/dhcp/*_m.cc applications/dhcp/*_m.h
	$(Q)-rm -f applications/ethernet/*_m.cc applications/ethernet/*_m.h
	$(Q)-rm -f applications/generic/*_m.cc applications/generic/*_m.h
	$(Q)-rm -f applications/httptools/*_m.cc applications/httptools/*_m.h
	$(Q)-rm -f applications/pingapp/*_m.cc applications/pingapp/*_m.h
	$(Q)-rm -f applications/rtpapp/*_m.cc applications/rtpapp/*_m.h
	$(Q)-rm -f applications/sctpapp/*_m.cc applications/sctpapp/*_m.h
	$(Q)-rm -f applications/tcpapp/*_m.cc applications/tcpapp/*_m.h
	$(Q)-rm -f applications/traci/*_m.cc applications/traci/*_m.h
	$(Q)-rm -f applications/trafgen/*_m.cc applications/trafgen/*_m.h
	$(Q)-rm -f applications/udpapp/*_m.cc applications/udpapp/*_m.h
	$(Q)-rm -f applications/util/*_m.cc applications/util/*_m.h
	$(Q)-rm -f applications/voip/*_m.cc applications/voip/*_m.h
	$(Q)-rm -f base/*_m.cc base/*_m.h
	$(Q)-rm -f battery/*_m.cc battery/*_m.h
	$(Q)-rm -f battery/models/*_m.cc battery/models/*_m.h
	$(Q)-rm -f generic/*_m.cc generic/*_m.h
	$(Q)-rm -f linklayer/*_m.cc linklayer/*_m.h
	$(Q)-rm -f linklayer/channels/*_m.cc linklayer/channels/*_m.h
	$(Q)-rm -f linklayer/collStats/*_m.cc linklayer/collStats/*_m.h
	$(Q)-rm -f linklayer/common/*_m.cc linklayer/common/*_m.h
	$(Q)-rm -f linklayer/contract/*_m.cc linklayer/contract/*_m.h
	$(Q)-rm -f linklayer/ethernet/*_m.cc linklayer/ethernet/*_m.h
	$(Q)-rm -f linklayer/ethernet/switch/*_m.cc linklayer/ethernet/switch/*_m.h
	$(Q)-rm -f linklayer/ext/*_m.cc linklayer/ext/*_m.h
	$(Q)-rm -f linklayer/idealwireless/*_m.cc linklayer/idealwireless/*_m.h
	$(Q)-rm -f linklayer/ieee80211/*_m.cc linklayer/ieee80211/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mac/*_m.cc linklayer/ieee80211/mac/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mgmt/*_m.cc linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f linklayer/ieee80211/radio/*_m.cc linklayer/ieee80211/radio/*_m.h
	$(Q)-rm -f linklayer/ieee80211/radio/errormodel/*_m.cc linklayer/ieee80211/radio/errormodel/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/*_m.cc linklayer/ieee80211mesh/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/ethernet/*_m.cc linklayer/ieee80211mesh/ethernet/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/hwmp/*_m.cc linklayer/ieee80211mesh/hwmp/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/locator/*_m.cc linklayer/ieee80211mesh/locator/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/mgmt/*_m.cc linklayer/ieee80211mesh/mgmt/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/nodes/*_m.cc linklayer/ieee80211mesh/nodes/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/*_m.cc linklayer/ieee8021d/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/common/*_m.cc linklayer/ieee8021d/common/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/ethernet/*_m.cc linklayer/ieee8021d/ethernet/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/ieee8021AD/*_m.cc linklayer/ieee8021d/ieee8021AD/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/ieee8021AH/*_m.cc linklayer/ieee8021d/ieee8021AH/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/ieee8021Q/*_m.cc linklayer/ieee8021d/ieee8021Q/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/MVRP/*_m.cc linklayer/ieee8021d/MVRP/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/RSTP/*_m.cc linklayer/ieee8021d/RSTP/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/Tester/*_m.cc linklayer/ieee8021d/Tester/*_m.h
	$(Q)-rm -f linklayer/loopback/*_m.cc linklayer/loopback/*_m.h
	$(Q)-rm -f linklayer/ppp/*_m.cc linklayer/ppp/*_m.h
	$(Q)-rm -f linklayer/queue/*_m.cc linklayer/queue/*_m.h
	$(Q)-rm -f linklayer/radio/*_m.cc linklayer/radio/*_m.h
	$(Q)-rm -f linklayer/radio/propagation/*_m.cc linklayer/radio/propagation/*_m.h
	$(Q)-rm -f linklayer/rstp/*_m.cc linklayer/rstp/*_m.h
	$(Q)-rm -f mobility/*_m.cc mobility/*_m.h
	$(Q)-rm -f mobility/models/*_m.cc mobility/models/*_m.h
	$(Q)-rm -f networklayer/*_m.cc networklayer/*_m.h
	$(Q)-rm -f networklayer/arp/*_m.cc networklayer/arp/*_m.h
	$(Q)-rm -f networklayer/autorouting/*_m.cc networklayer/autorouting/*_m.h
	$(Q)-rm -f networklayer/autorouting/ipv4/*_m.cc networklayer/autorouting/ipv4/*_m.h
	$(Q)-rm -f networklayer/autorouting/ipv6/*_m.cc networklayer/autorouting/ipv6/*_m.h
	$(Q)-rm -f networklayer/bgpv4/*_m.cc networklayer/bgpv4/*_m.h
	$(Q)-rm -f networklayer/bgpv4/BGPMessage/*_m.cc networklayer/bgpv4/BGPMessage/*_m.h
	$(Q)-rm -f networklayer/common/*_m.cc networklayer/common/*_m.h
	$(Q)-rm -f networklayer/contract/*_m.cc networklayer/contract/*_m.h
	$(Q)-rm -f networklayer/diffserv/*_m.cc networklayer/diffserv/*_m.h
	$(Q)-rm -f networklayer/extras/*_m.cc networklayer/extras/*_m.h
	$(Q)-rm -f networklayer/icmpv6/*_m.cc networklayer/icmpv6/*_m.h
	$(Q)-rm -f networklayer/internetcloud/*_m.cc networklayer/internetcloud/*_m.h
	$(Q)-rm -f networklayer/ipv4/*_m.cc networklayer/ipv4/*_m.h
	$(Q)-rm -f networklayer/ipv6/*_m.cc networklayer/ipv6/*_m.h
	$(Q)-rm -f networklayer/ipv6/_6lowpan/*_m.cc networklayer/ipv6/_6lowpan/*_m.h
	$(Q)-rm -f networklayer/ipv6tunneling/*_m.cc networklayer/ipv6tunneling/*_m.h
	$(Q)-rm -f networklayer/ldp/*_m.cc networklayer/ldp/*_m.h
	$(Q)-rm -f networklayer/manetrouting/*_m.cc networklayer/manetrouting/*_m.h
	$(Q)-rm -f networklayer/manetrouting/aodv/*_m.cc networklayer/manetrouting/aodv/*_m.h
	$(Q)-rm -f networklayer/manetrouting/aodv/aodv-uu/*_m.cc networklayer/manetrouting/aodv/aodv-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/base/*_m.cc networklayer/manetrouting/base/*_m.h
	$(Q)-rm -f networklayer/manetrouting/batman/*_m.cc networklayer/manetrouting/batman/*_m.h
	$(Q)-rm -f networklayer/manetrouting/batman/batmand/*_m.cc networklayer/manetrouting/batman/batmand/*_m.h
	$(Q)-rm -f networklayer/manetrouting/batman/batmand/orig/*_m.cc networklayer/manetrouting/batman/batmand/orig/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsdv/*_m.cc networklayer/manetrouting/dsdv/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsr/*_m.cc networklayer/manetrouting/dsr/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsr/dsr-uu/*_m.cc networklayer/manetrouting/dsr/dsr-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo/*_m.cc networklayer/manetrouting/dymo/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo/dymoum/*_m.cc networklayer/manetrouting/dymo/dymoum/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo_fau/*_m.cc networklayer/manetrouting/dymo_fau/*_m.h
	$(Q)-rm -f networklayer/manetrouting/olsr/*_m.cc networklayer/manetrouting/olsr/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/*_m.cc networklayer/manetrouting/PASER/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/IP_ADOPTED/*_m.cc networklayer/manetrouting/PASER/IP_ADOPTED/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_buffer/*_m.cc networklayer/manetrouting/PASER/paser_buffer/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_configuration/*_m.cc networklayer/manetrouting/PASER/paser_configuration/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_logic/*_m.cc networklayer/manetrouting/PASER/paser_logic/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_logic/cryptography/*_m.cc networklayer/manetrouting/PASER/paser_logic/cryptography/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_logic/message_processing/*_m.cc networklayer/manetrouting/PASER/paser_logic/message_processing/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_logic/route_discovery/*_m.cc networklayer/manetrouting/PASER/paser_logic/route_discovery/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_logic/route_maintenance/*_m.cc networklayer/manetrouting/PASER/paser_logic/route_maintenance/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_message_structure/*_m.cc networklayer/manetrouting/PASER/paser_message_structure/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_socket/*_m.cc networklayer/manetrouting/PASER/paser_socket/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_tables/*_m.cc networklayer/manetrouting/PASER/paser_tables/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/paser_timer_management/*_m.cc networklayer/manetrouting/PASER/paser_timer_management/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/simple_kdc/*_m.cc networklayer/manetrouting/PASER/simple_kdc/*_m.h
	$(Q)-rm -f networklayer/manetrouting/PASER/simple_kdc/kdc_message/*_m.cc networklayer/manetrouting/PASER/simple_kdc/kdc_message/*_m.h
	$(Q)-rm -f networklayer/mpls/*_m.cc networklayer/mpls/*_m.h
	$(Q)-rm -f networklayer/ospfv2/*_m.cc networklayer/ospfv2/*_m.h
	$(Q)-rm -f networklayer/ospfv2/interface/*_m.cc networklayer/ospfv2/interface/*_m.h
	$(Q)-rm -f networklayer/ospfv2/messagehandler/*_m.cc networklayer/ospfv2/messagehandler/*_m.h
	$(Q)-rm -f networklayer/ospfv2/neighbor/*_m.cc networklayer/ospfv2/neighbor/*_m.h
	$(Q)-rm -f networklayer/ospfv2/router/*_m.cc networklayer/ospfv2/router/*_m.h
	$(Q)-rm -f networklayer/rsvp_te/*_m.cc networklayer/rsvp_te/*_m.h
	$(Q)-rm -f networklayer/ted/*_m.cc networklayer/ted/*_m.h
	$(Q)-rm -f networklayer/xmipv6/*_m.cc networklayer/xmipv6/*_m.h
	$(Q)-rm -f nodes/*_m.cc nodes/*_m.h
	$(Q)-rm -f nodes/bgp/*_m.cc nodes/bgp/*_m.h
	$(Q)-rm -f nodes/ethernet/*_m.cc nodes/ethernet/*_m.h
	$(Q)-rm -f nodes/httptools/*_m.cc nodes/httptools/*_m.h
	$(Q)-rm -f nodes/Ieee8021d/*_m.cc nodes/Ieee8021d/*_m.h
	$(Q)-rm -f nodes/inet/*_m.cc nodes/inet/*_m.h
	$(Q)-rm -f nodes/internetcloud/*_m.cc nodes/internetcloud/*_m.h
	$(Q)-rm -f nodes/ipv6/*_m.cc nodes/ipv6/*_m.h
	$(Q)-rm -f nodes/mpls/*_m.cc nodes/mpls/*_m.h
	$(Q)-rm -f nodes/ospfv2/*_m.cc nodes/ospfv2/*_m.h
	$(Q)-rm -f nodes/rtp/*_m.cc nodes/rtp/*_m.h
	$(Q)-rm -f nodes/wireless/*_m.cc nodes/wireless/*_m.h
	$(Q)-rm -f nodes/xmipv6/*_m.cc nodes/xmipv6/*_m.h
	$(Q)-rm -f status/*_m.cc status/*_m.h
	$(Q)-rm -f transport/*_m.cc transport/*_m.h
	$(Q)-rm -f transport/contract/*_m.cc transport/contract/*_m.h
	$(Q)-rm -f transport/rtp/*_m.cc transport/rtp/*_m.h
	$(Q)-rm -f transport/rtp/profiles/*_m.cc transport/rtp/profiles/*_m.h
	$(Q)-rm -f transport/rtp/profiles/avprofile/*_m.cc transport/rtp/profiles/avprofile/*_m.h
	$(Q)-rm -f transport/sctp/*_m.cc transport/sctp/*_m.h
	$(Q)-rm -f transport/tcp/*_m.cc transport/tcp/*_m.h
	$(Q)-rm -f transport/tcp/flavours/*_m.cc transport/tcp/flavours/*_m.h
	$(Q)-rm -f transport/tcp/queues/*_m.cc transport/tcp/queues/*_m.h
	$(Q)-rm -f transport/tcp_common/*_m.cc transport/tcp_common/*_m.h
	$(Q)-rm -f transport/udp/*_m.cc transport/udp/*_m.h
	$(Q)-rm -f underTest/*_m.cc underTest/*_m.h
	$(Q)-rm -f underTest/_4gsim/*_m.cc underTest/_4gsim/*_m.h
	$(Q)-rm -f underTest/_4gsim/applications/*_m.cc underTest/_4gsim/applications/*_m.h
	$(Q)-rm -f underTest/_4gsim/applications/diameter/*_m.cc underTest/_4gsim/applications/diameter/*_m.h
	$(Q)-rm -f underTest/_4gsim/applications/diameters6a/*_m.cc underTest/_4gsim/applications/diameters6a/*_m.h
	$(Q)-rm -f underTest/_4gsim/applications/nas/*_m.cc underTest/_4gsim/applications/nas/*_m.h
	$(Q)-rm -f underTest/_4gsim/applications/s1ap/*_m.cc underTest/_4gsim/applications/s1ap/*_m.h
	$(Q)-rm -f underTest/_4gsim/applications/s1ap/message/*_m.cc underTest/_4gsim/applications/s1ap/message/*_m.h
	$(Q)-rm -f underTest/_4gsim/linklayer/*_m.cc underTest/_4gsim/linklayer/*_m.h
	$(Q)-rm -f underTest/_4gsim/linklayer/lte/*_m.cc underTest/_4gsim/linklayer/lte/*_m.h
	$(Q)-rm -f underTest/_4gsim/networklayer/*_m.cc underTest/_4gsim/networklayer/*_m.h
	$(Q)-rm -f underTest/_4gsim/networklayer/gtp/*_m.cc underTest/_4gsim/networklayer/gtp/*_m.h
	$(Q)-rm -f underTest/_4gsim/networklayer/gtp/path/*_m.cc underTest/_4gsim/networklayer/gtp/path/*_m.h
	$(Q)-rm -f underTest/_4gsim/networklayer/gtp/tunnel/*_m.cc underTest/_4gsim/networklayer/gtp/tunnel/*_m.h
	$(Q)-rm -f underTest/_4gsim/nodes/*_m.cc underTest/_4gsim/nodes/*_m.h
	$(Q)-rm -f underTest/_4gsim/nodes/_4gsim/*_m.cc underTest/_4gsim/nodes/_4gsim/*_m.h
	$(Q)-rm -f underTest/_4gsim/util/*_m.cc underTest/_4gsim/util/*_m.h
	$(Q)-rm -f underTest/_4gsim/util/asn/*_m.cc underTest/_4gsim/util/asn/*_m.h
	$(Q)-rm -f underTest/_4gsim/util/asn/parser/*_m.cc underTest/_4gsim/util/asn/parser/*_m.h
	$(Q)-rm -f underTest/_4gsim/util/gateway/*_m.cc underTest/_4gsim/util/gateway/*_m.h
	$(Q)-rm -f underTest/_4gsim/util/headerserializers/*_m.cc underTest/_4gsim/util/headerserializers/*_m.h
	$(Q)-rm -f underTest/_4gsim/util/subscriber/*_m.cc underTest/_4gsim/util/subscriber/*_m.h
	$(Q)-rm -f underTest/hip/*_m.cc underTest/hip/*_m.h
	$(Q)-rm -f underTest/hip/application/*_m.cc underTest/hip/application/*_m.h
	$(Q)-rm -f underTest/hip/base/*_m.cc underTest/hip/base/*_m.h
	$(Q)-rm -f underTest/hip/nodes/*_m.cc underTest/hip/nodes/*_m.h
	$(Q)-rm -f underTest/Ieee80211/*_m.cc underTest/Ieee80211/*_m.h
	$(Q)-rm -f underTest/Ieee80211/linklayer/*_m.cc underTest/Ieee80211/linklayer/*_m.h
	$(Q)-rm -f underTest/Ieee80211/linklayer/ieee80211/*_m.cc underTest/Ieee80211/linklayer/ieee80211/*_m.h
	$(Q)-rm -f underTest/Ieee80211/linklayer/ieee80211/mgmt/*_m.cc underTest/Ieee80211/linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f underTest/Ieee80211/nodes/*_m.cc underTest/Ieee80211/nodes/*_m.h
	$(Q)-rm -f underTest/Ieee80211/nodes/wireless/*_m.cc underTest/Ieee80211/nodes/wireless/*_m.h
	$(Q)-rm -f underTest/wimax/*_m.cc underTest/wimax/*_m.h
	$(Q)-rm -f underTest/wimax/applications/*_m.cc underTest/wimax/applications/*_m.h
	$(Q)-rm -f underTest/wimax/applications/TrafficGenerator_Erlangen/*_m.cc underTest/wimax/applications/TrafficGenerator_Erlangen/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/*_m.cc underTest/wimax/linklayer/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/Ieee80216/*_m.cc underTest/wimax/linklayer/Ieee80216/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/Ieee80216/ControlPlane/*_m.cc underTest/wimax/linklayer/Ieee80216/ControlPlane/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/Ieee80216/Mac/*_m.cc underTest/wimax/linklayer/Ieee80216/Mac/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/Ieee80216/MACSublayer/*_m.cc underTest/wimax/linklayer/Ieee80216/MACSublayer/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/*_m.cc underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/*_m.cc underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/*_m.cc underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/Ieee80216/phyLayer/*_m.cc underTest/wimax/linklayer/Ieee80216/phyLayer/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/Ieee80216/phyLayer/decider/*_m.cc underTest/wimax/linklayer/Ieee80216/phyLayer/decider/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/Ieee80216/phyLayer/snrEval/*_m.cc underTest/wimax/linklayer/Ieee80216/phyLayer/snrEval/*_m.h
	$(Q)-rm -f underTest/wimax/linklayer/radio/*_m.cc underTest/wimax/linklayer/radio/*_m.h
	$(Q)-rm -f underTest/wimax/nodes/*_m.cc underTest/wimax/nodes/*_m.h
	$(Q)-rm -f util/*_m.cc util/*_m.h
	$(Q)-rm -f util/headerserializers/*_m.cc util/headerserializers/*_m.h
	$(Q)-rm -f util/headerserializers/headers/*_m.cc util/headerserializers/headers/*_m.h
	$(Q)-rm -f util/headerserializers/ipv4/*_m.cc util/headerserializers/ipv4/*_m.h
	$(Q)-rm -f util/headerserializers/ipv4/headers/*_m.cc util/headerserializers/ipv4/headers/*_m.h
	$(Q)-rm -f util/headerserializers/sctp/*_m.cc util/headerserializers/sctp/*_m.h
	$(Q)-rm -f util/headerserializers/sctp/headers/*_m.cc util/headerserializers/sctp/headers/*_m.h
	$(Q)-rm -f util/headerserializers/tcp/*_m.cc util/headerserializers/tcp/*_m.h
	$(Q)-rm -f util/headerserializers/tcp/headers/*_m.cc util/headerserializers/tcp/headers/*_m.h
	$(Q)-rm -f util/headerserializers/udp/*_m.cc util/headerserializers/udp/*_m.h
	$(Q)-rm -f util/headerserializers/udp/headers/*_m.cc util/headerserializers/udp/headers/*_m.h
	$(Q)-rm -f world/*_m.cc world/*_m.h
	$(Q)-rm -f world/annotations/*_m.cc world/annotations/*_m.h
	$(Q)-rm -f world/httptools/*_m.cc world/httptools/*_m.h
	$(Q)-rm -f world/obstacles/*_m.cc world/obstacles/*_m.h
	$(Q)-rm -f world/powercontrol/*_m.cc world/powercontrol/*_m.h
	$(Q)-rm -f world/radio/*_m.cc world/radio/*_m.h
	$(Q)-rm -f world/scenario/*_m.cc world/scenario/*_m.h
	$(Q)-rm -f world/traci/*_m.cc world/traci/*_m.h
	$(Q)-rm -f wpan/*_m.cc wpan/*_m.h
	$(Q)-rm -f wpan/applications/*_m.cc wpan/applications/*_m.h
	$(Q)-rm -f wpan/applications/Ieee802154TestApp/*_m.cc wpan/applications/Ieee802154TestApp/*_m.h
	$(Q)-rm -f wpan/Isabel/*_m.cc wpan/Isabel/*_m.h
	$(Q)-rm -f wpan/Isabel/Analysis/*_m.cc wpan/Isabel/Analysis/*_m.h
	$(Q)-rm -f wpan/Isabel/Base/*_m.cc wpan/Isabel/Base/*_m.h
	$(Q)-rm -f wpan/linklayer/*_m.cc wpan/linklayer/*_m.h
	$(Q)-rm -f wpan/linklayer/bmac/*_m.cc wpan/linklayer/bmac/*_m.h
	$(Q)-rm -f wpan/linklayer/ieee802154/*_m.cc wpan/linklayer/ieee802154/*_m.h
	$(Q)-rm -f wpan/linklayer/ieee802154/contract/*_m.cc wpan/linklayer/ieee802154/contract/*_m.h
	$(Q)-rm -f wpan/linklayer/ieee802154/mac/*_m.cc wpan/linklayer/ieee802154/mac/*_m.h
	$(Q)-rm -f wpan/networklayer/*_m.cc wpan/networklayer/*_m.h
	$(Q)-rm -f wpan/networklayer/contract/*_m.cc wpan/networklayer/contract/*_m.h
	$(Q)-rm -f wpan/networklayer/Ieee802154StarRouting/*_m.cc wpan/networklayer/Ieee802154StarRouting/*_m.h
	$(Q)-rm -f wpan/nodes/*_m.cc wpan/nodes/*_m.h
	$(Q)-rm -f wpan/phyLayer/*_m.cc wpan/phyLayer/*_m.h
	$(Q)-rm -f wpan/phyLayer/ieee802154/*_m.cc wpan/phyLayer/ieee802154/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/dhcp/*.cc applications/ethernet/*.cc applications/generic/*.cc applications/httptools/*.cc applications/pingapp/*.cc applications/rtpapp/*.cc applications/sctpapp/*.cc applications/tcpapp/*.cc applications/traci/*.cc applications/trafgen/*.cc applications/udpapp/*.cc applications/util/*.cc applications/voip/*.cc base/*.cc battery/*.cc battery/models/*.cc generic/*.cc linklayer/*.cc linklayer/channels/*.cc linklayer/collStats/*.cc linklayer/common/*.cc linklayer/contract/*.cc linklayer/ethernet/*.cc linklayer/ethernet/switch/*.cc linklayer/ext/*.cc linklayer/idealwireless/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mac/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/ieee80211/radio/*.cc linklayer/ieee80211/radio/errormodel/*.cc linklayer/ieee80211mesh/*.cc linklayer/ieee80211mesh/ethernet/*.cc linklayer/ieee80211mesh/hwmp/*.cc linklayer/ieee80211mesh/locator/*.cc linklayer/ieee80211mesh/mgmt/*.cc linklayer/ieee80211mesh/nodes/*.cc linklayer/ieee8021d/*.cc linklayer/ieee8021d/common/*.cc linklayer/ieee8021d/ethernet/*.cc linklayer/ieee8021d/ieee8021AD/*.cc linklayer/ieee8021d/ieee8021AH/*.cc linklayer/ieee8021d/ieee8021Q/*.cc linklayer/ieee8021d/MVRP/*.cc linklayer/ieee8021d/RSTP/*.cc linklayer/ieee8021d/Tester/*.cc linklayer/loopback/*.cc linklayer/ppp/*.cc linklayer/queue/*.cc linklayer/radio/*.cc linklayer/radio/propagation/*.cc linklayer/rstp/*.cc mobility/*.cc mobility/models/*.cc networklayer/*.cc networklayer/arp/*.cc networklayer/autorouting/*.cc networklayer/autorouting/ipv4/*.cc networklayer/autorouting/ipv6/*.cc networklayer/bgpv4/*.cc networklayer/bgpv4/BGPMessage/*.cc networklayer/common/*.cc networklayer/contract/*.cc networklayer/diffserv/*.cc networklayer/extras/*.cc networklayer/icmpv6/*.cc networklayer/internetcloud/*.cc networklayer/ipv4/*.cc networklayer/ipv6/*.cc networklayer/ipv6/_6lowpan/*.cc networklayer/ipv6tunneling/*.cc networklayer/ldp/*.cc networklayer/manetrouting/*.cc networklayer/manetrouting/aodv/*.cc networklayer/manetrouting/aodv/aodv-uu/*.cc networklayer/manetrouting/base/*.cc networklayer/manetrouting/batman/*.cc networklayer/manetrouting/batman/batmand/*.cc networklayer/manetrouting/batman/batmand/orig/*.cc networklayer/manetrouting/dsdv/*.cc networklayer/manetrouting/dsr/*.cc networklayer/manetrouting/dsr/dsr-uu/*.cc networklayer/manetrouting/dymo/*.cc networklayer/manetrouting/dymo/dymoum/*.cc networklayer/manetrouting/dymo_fau/*.cc networklayer/manetrouting/olsr/*.cc networklayer/manetrouting/PASER/*.cc networklayer/manetrouting/PASER/IP_ADOPTED/*.cc networklayer/manetrouting/PASER/paser_buffer/*.cc networklayer/manetrouting/PASER/paser_configuration/*.cc networklayer/manetrouting/PASER/paser_logic/*.cc networklayer/manetrouting/PASER/paser_logic/cryptography/*.cc networklayer/manetrouting/PASER/paser_logic/message_processing/*.cc networklayer/manetrouting/PASER/paser_logic/route_discovery/*.cc networklayer/manetrouting/PASER/paser_logic/route_maintenance/*.cc networklayer/manetrouting/PASER/paser_message_structure/*.cc networklayer/manetrouting/PASER/paser_socket/*.cc networklayer/manetrouting/PASER/paser_tables/*.cc networklayer/manetrouting/PASER/paser_timer_management/*.cc networklayer/manetrouting/PASER/simple_kdc/*.cc networklayer/manetrouting/PASER/simple_kdc/kdc_message/*.cc networklayer/mpls/*.cc networklayer/ospfv2/*.cc networklayer/ospfv2/interface/*.cc networklayer/ospfv2/messagehandler/*.cc networklayer/ospfv2/neighbor/*.cc networklayer/ospfv2/router/*.cc networklayer/rsvp_te/*.cc networklayer/ted/*.cc networklayer/xmipv6/*.cc nodes/*.cc nodes/bgp/*.cc nodes/ethernet/*.cc nodes/httptools/*.cc nodes/Ieee8021d/*.cc nodes/inet/*.cc nodes/internetcloud/*.cc nodes/ipv6/*.cc nodes/mpls/*.cc nodes/ospfv2/*.cc nodes/rtp/*.cc nodes/wireless/*.cc nodes/xmipv6/*.cc status/*.cc transport/*.cc transport/contract/*.cc transport/rtp/*.cc transport/rtp/profiles/*.cc transport/rtp/profiles/avprofile/*.cc transport/sctp/*.cc transport/tcp/*.cc transport/tcp/flavours/*.cc transport/tcp/queues/*.cc transport/tcp_common/*.cc transport/udp/*.cc underTest/*.cc underTest/_4gsim/*.cc underTest/_4gsim/applications/*.cc underTest/_4gsim/applications/diameter/*.cc underTest/_4gsim/applications/diameters6a/*.cc underTest/_4gsim/applications/nas/*.cc underTest/_4gsim/applications/s1ap/*.cc underTest/_4gsim/applications/s1ap/message/*.cc underTest/_4gsim/linklayer/*.cc underTest/_4gsim/linklayer/lte/*.cc underTest/_4gsim/networklayer/*.cc underTest/_4gsim/networklayer/gtp/*.cc underTest/_4gsim/networklayer/gtp/path/*.cc underTest/_4gsim/networklayer/gtp/tunnel/*.cc underTest/_4gsim/nodes/*.cc underTest/_4gsim/nodes/_4gsim/*.cc underTest/_4gsim/util/*.cc underTest/_4gsim/util/asn/*.cc underTest/_4gsim/util/asn/parser/*.cc underTest/_4gsim/util/gateway/*.cc underTest/_4gsim/util/headerserializers/*.cc underTest/_4gsim/util/subscriber/*.cc underTest/hip/*.cc underTest/hip/application/*.cc underTest/hip/base/*.cc underTest/hip/nodes/*.cc underTest/Ieee80211/*.cc underTest/Ieee80211/linklayer/*.cc underTest/Ieee80211/linklayer/ieee80211/*.cc underTest/Ieee80211/linklayer/ieee80211/mgmt/*.cc underTest/Ieee80211/nodes/*.cc underTest/Ieee80211/nodes/wireless/*.cc underTest/wimax/*.cc underTest/wimax/applications/*.cc underTest/wimax/applications/TrafficGenerator_Erlangen/*.cc underTest/wimax/linklayer/*.cc underTest/wimax/linklayer/Ieee80216/*.cc underTest/wimax/linklayer/Ieee80216/ControlPlane/*.cc underTest/wimax/linklayer/Ieee80216/Mac/*.cc underTest/wimax/linklayer/Ieee80216/MACSublayer/*.cc underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/*.cc underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/*.cc underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/*.cc underTest/wimax/linklayer/Ieee80216/phyLayer/*.cc underTest/wimax/linklayer/Ieee80216/phyLayer/decider/*.cc underTest/wimax/linklayer/Ieee80216/phyLayer/snrEval/*.cc underTest/wimax/linklayer/radio/*.cc underTest/wimax/nodes/*.cc util/*.cc util/headerserializers/*.cc util/headerserializers/headers/*.cc util/headerserializers/ipv4/*.cc util/headerserializers/ipv4/headers/*.cc util/headerserializers/sctp/*.cc util/headerserializers/sctp/headers/*.cc util/headerserializers/tcp/*.cc util/headerserializers/tcp/headers/*.cc util/headerserializers/udp/*.cc util/headerserializers/udp/headers/*.cc world/*.cc world/annotations/*.cc world/httptools/*.cc world/obstacles/*.cc world/powercontrol/*.cc world/radio/*.cc world/scenario/*.cc world/traci/*.cc wpan/*.cc wpan/applications/*.cc wpan/applications/Ieee802154TestApp/*.cc wpan/Isabel/*.cc wpan/Isabel/Analysis/*.cc wpan/Isabel/Base/*.cc wpan/linklayer/*.cc wpan/linklayer/bmac/*.cc wpan/linklayer/ieee802154/*.cc wpan/linklayer/ieee802154/contract/*.cc wpan/linklayer/ieee802154/mac/*.cc wpan/networklayer/*.cc wpan/networklayer/contract/*.cc wpan/networklayer/Ieee802154StarRouting/*.cc wpan/nodes/*.cc wpan/phyLayer/*.cc wpan/phyLayer/ieee802154/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/AppBase.o: applications/AppBase.cc \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  base/ILifecycle.h \
  applications/AppBase.h \
  base/INETDefs.h \
  base/NodeOperations.h \
  base/ModuleAccess.h
$O/applications/dhcp/DHCPClient.o: applications/dhcp/DHCPClient.cc \
  applications/dhcp/Byte.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  applications/dhcp/DHCPLease.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  applications/dhcp/DHCPClient.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  applications/dhcp/DHCP_m.h \
  networklayer/ipv4/IPv4Route.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  applications/dhcp/DHCPOptions.h \
  transport/contract/UDPSocket.h
$O/applications/dhcp/DHCPServer.o: applications/dhcp/DHCPServer.cc \
  applications/dhcp/Byte.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  applications/dhcp/DHCPLease.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  applications/dhcp/DHCPServer.h \
  transport/contract/UDPControlInfo_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  applications/dhcp/DHCP_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  applications/dhcp/DHCPOptions.h \
  transport/contract/UDPSocket.h
$O/applications/dhcp/DHCP_m.o: applications/dhcp/DHCP_m.cc \
  applications/dhcp/Byte.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  applications/dhcp/DHCP_m.h \
  base/INETDefs.h \
  applications/dhcp/DHCPOptions.h
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
  linklayer/contract/MACAddress.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  applications/ethernet/EtherAppCli.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  applications/ethernet/EtherApp_m.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
  linklayer/contract/MACAddress.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  applications/ethernet/EtherApp_m.h \
  applications/ethernet/EtherAppSrv.h
$O/applications/ethernet/EtherTrafGen.o: applications/ethernet/EtherTrafGen.cc \
  linklayer/contract/MACAddress.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  applications/ethernet/EtherTrafGen.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/applications/ethernet/EthernetApplication.o: applications/ethernet/EthernetApplication.cc \
  linklayer/contract/MACAddress.h \
  applications/ethernet/EthernetApplication.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  applications/ethernet/EtherApp_m.h
$O/applications/generic/IPvXTrafGen.o: applications/generic/IPvXTrafGen.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  applications/generic/IPvXTrafSink.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  applications/generic/IPvXTrafGen.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h
$O/applications/generic/IPvXTrafSink.o: applications/generic/IPvXTrafSink.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  applications/generic/IPvXTrafSink.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  applications/generic/IPvXTrafGen.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h
$O/applications/httptools/HttpBrowser.o: applications/httptools/HttpBrowser.cc \
  applications/httptools/HttpBrowser.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  applications/httptools/HttpNodeBase.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpBrowserBase.h \
  transport/contract/TCPCommand_m.h \
  applications/httptools/HttpLogdefs.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  world/httptools/HttpController.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpBrowserBase.o: applications/httptools/HttpBrowserBase.cc \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  status/NodeStatus.h \
  applications/httptools/HttpMessages_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpBrowserBase.h \
  applications/httptools/HttpLogdefs.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpBrowserDirect.o: applications/httptools/HttpBrowserDirect.cc \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpBrowserBase.h \
  applications/httptools/HttpLogdefs.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpBrowserDirect.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpEventMessages_m.o: applications/httptools/HttpEventMessages_m.cc \
  applications/httptools/HttpEventMessages_m.h
$O/applications/httptools/HttpMessages_m.o: applications/httptools/HttpMessages_m.cc \
  applications/httptools/HttpMessages_m.h
$O/applications/httptools/HttpNodeBase.o: applications/httptools/HttpNodeBase.cc \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpLogdefs.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpRandom.o: applications/httptools/HttpRandom.cc \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  base/INETDefs.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServer.o: applications/httptools/HttpServer.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  applications/httptools/HttpServer.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  transport/contract/TCPCommand_m.h \
  applications/httptools/HttpLogdefs.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  world/httptools/HttpController.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServerBase.o: applications/httptools/HttpServerBase.cc \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  status/NodeStatus.h \
  applications/httptools/HttpMessages_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpLogdefs.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServerDirect.o: applications/httptools/HttpServerDirect.cc \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpServerDirect.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpLogdefs.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServerDirectEvilA.o: applications/httptools/HttpServerDirectEvilA.cc \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpServerDirect.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpLogdefs.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  applications/httptools/HttpServerDirectEvilA.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServerDirectEvilB.o: applications/httptools/HttpServerDirectEvilB.cc \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpServerDirect.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpLogdefs.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  applications/httptools/HttpServerDirectEvilB.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServerEvilA.o: applications/httptools/HttpServerEvilA.cc \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpServer.h \
  networklayer/contract/IPv4Address.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpLogdefs.h \
  transport/contract/TCPCommand_m.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  applications/httptools/HttpServerEvilA.h \
  world/httptools/HttpController.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServerEvilB.o: applications/httptools/HttpServerEvilB.cc \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpServer.h \
  networklayer/contract/IPv4Address.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpLogdefs.h \
  transport/contract/TCPCommand_m.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  world/httptools/HttpController.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpServerEvilB.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpUtils.o: applications/httptools/HttpUtils.cc \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpUtils.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  applications/pingapp/PingPayload_m.h \
  base/ILifecycle.h \
  applications/pingapp/PingApp.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h
$O/applications/pingapp/PingTestApp.o: applications/pingapp/PingTestApp.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  applications/pingapp/PingPayload_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  applications/pingapp/PingTestApp.h \
  networklayer/contract/IPvXAddress.h
$O/applications/rtpapp/RTPApplication.o: applications/rtpapp/RTPApplication.cc \
  networklayer/contract/IPv6Address.h \
  transport/rtp/RTPInterfacePacket_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  applications/rtpapp/RTPApplication.h \
  networklayer/contract/IPvXAddress.h
$O/applications/sctpapp/SCTPClient.o: applications/sctpapp/SCTPClient.cc \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/SCTPSocket.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  applications/sctpapp/SCTPClient.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h
$O/applications/sctpapp/SCTPPeer.o: applications/sctpapp/SCTPPeer.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPSocket.h \
  transport/contract/SCTPCommand_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ModuleAccess.h \
  applications/sctpapp/SCTPPeer.h \
  transport/sctp/SCTPSendStream.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h
$O/applications/sctpapp/SCTPServer.o: applications/sctpapp/SCTPServer.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPSocket.h \
  transport/contract/SCTPCommand_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ModuleAccess.h \
  applications/sctpapp/SCTPServer.h \
  transport/sctp/SCTPSendStream.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  applications/tcpapp/TCPGenericCliAppBase.h \
  applications/tcpapp/TCPBasicClientApp.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  base/NodeOperations.h \
  base/ByteArrayMessage.h \
  status/NodeStatus.h \
  base/ByteArrayMessage_m.h \
  base/ModuleAccess.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  applications/tcpapp/TCPEchoApp.h
$O/applications/tcpapp/TCPGenericCliAppBase.o: applications/tcpapp/TCPGenericCliAppBase.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  applications/tcpapp/TCPGenericCliAppBase.h
$O/applications/tcpapp/TCPGenericCliAppBasePromis.o: applications/tcpapp/TCPGenericCliAppBasePromis.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  applications/tcpapp/TCPGenericCliAppBasePromis.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  transport/contract/TCPCommand_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/GenericAppMsg_m.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  applications/tcpapp/TCPGenericSrvApp.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
  applications/tcpapp/TCPSrvHostApp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/GenericAppMsg_m.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  applications/tcpapp/TCPGenericSrvThread.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPSocketMap.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/GenericAppMsg_m.h \
  base/ByteArray_m.h \
  base/ByteArrayMessage.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  base/ByteArrayMessage_m.h \
  applications/tcpapp/TCPSessionApp.h \
  base/ModuleAccess.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
  applications/tcpapp/TCPSinkApp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
  applications/tcpapp/TCPSrvHostApp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPSocketMap.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  applications/tcpapp/TelnetApp.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  applications/tcpapp/TCPGenericCliAppBase.h
$O/applications/traci/TraCIDemo.o: applications/traci/TraCIDemo.cc \
  base/BasicModule.h \
  util/FWMath.h \
  ./mobility/models/MobilityBase.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  base/Coord.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  ./applications/traci/TraCIDemo.h \
  ./world/traci/TraCIScenarioManager.h \
  base/ModuleAccess.h \
  mobility/IMobility.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  ./mobility/models/TraCIMobility.h \
  transport/contract/UDPSocket.h
$O/applications/traci/TraCITestApp.o: applications/traci/TraCITestApp.cc \
  base/BasicModule.h \
  util/FWMath.h \
  ./mobility/models/MobilityBase.h \
  base/Coord.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  ./world/traci/TraCIScenarioManager.h \
  base/ModuleAccess.h \
  mobility/IMobility.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  ./applications/traci/TraCITestApp.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  ./mobility/models/TraCIMobility.h
$O/applications/trafgen/TrafGen.o: applications/trafgen/TrafGen.cc \
  ./applications/trafgen/TrafGen.h
$O/applications/trafgen/TrafGenPar.o: applications/trafgen/TrafGenPar.cc \
  applications/trafgen/TrafGenPar.h
$O/applications/udpapp/PASERUdpTrafficReceiver.o: applications/udpapp/PASERUdpTrafficReceiver.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/models/MobilityBase.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/Coord.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  mobility/IMobility.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/udpapp/PaserTrafficDataMsg_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  mobility/models/RandomWPMobility.h \
  mobility/models/LineSegmentsMobilityBase.h \
  applications/udpapp/PASERUdpTrafficReceiver.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/PASERUdpTrafficSender.o: applications/udpapp/PASERUdpTrafficSender.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/udpapp/PaserTrafficDataMsg_m.h \
  applications/udpapp/PASERUdpTrafficSender.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  applications/AppBase.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/udpapp/UDPBasicApp.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicBurst.o: applications/udpapp/UDPBasicBurst.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  applications/udpapp/UDPBasicBurst.h \
  base/NotifierConsts.h \
  applications/AppBase.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv4/IPv4Route.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicBurstNotification.o: applications/udpapp/UDPBasicBurstNotification.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  applications/udpapp/UDPBasicBurstNotification.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  applications/udpapp/UDPBasicBurst.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  applications/AppBase.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  applications/util/AddressModule.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicFlooding.o: applications/udpapp/UDPBasicFlooding.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  applications/AppBase.h \
  base/ILifecycle.h \
  applications/udpapp/UDPBasicFlooding.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  applications/util/AddressModule.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  applications/udpapp/UDPEchoApp.h \
  transport/contract/UDPControlInfo_m.h \
  applications/AppBase.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  applications/udpapp/UDPSink.h \
  status/NodeStatus.h \
  transport/contract/UDPControlInfo_m.h \
  applications/AppBase.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  transport/contract/UDPControlInfo_m.h \
  applications/AppBase.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/udpapp/UDPVideoStreamCli.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoStreamCli2.o: applications/udpapp/UDPVideoStreamCli2.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  transport/contract/UDPControlInfo_m.h \
  applications/AppBase.h \
  base/ILifecycle.h \
  applications/udpapp/UDPVideoStreamCli2.h \
  applications/udpapp/VideoPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
  networklayer/contract/IPv6Address.h \
  applications/udpapp/UDPVideoStreamSvr.h \
  networklayer/contract/IPv4Address.h \
  status/NodeStatus.h \
  transport/contract/UDPControlInfo_m.h \
  applications/AppBase.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoStreamSvr2.o: applications/udpapp/UDPVideoStreamSvr2.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  applications/udpapp/UDPVideoStreamSvr2.h \
  base/NotifierConsts.h \
  applications/AppBase.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  applications/udpapp/VideoPacket_m.h \
  applications/udpapp/UDPVideoData_m.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/applications/util/AddressModule.o: applications/util/AddressModule.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/util/AddressModule.h
$O/applications/voip/SimpleVoIPPacket_m.o: applications/voip/SimpleVoIPPacket_m.cc \
  applications/voip/SimpleVoIPPacket_m.h
$O/applications/voip/SimpleVoIPReceiver.o: applications/voip/SimpleVoIPReceiver.cc \
  networklayer/contract/IPv6Address.h \
  applications/voip/SimpleVoIPPacket_m.h \
  applications/voip/SimpleVoIPReceiver.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/applications/voip/SimpleVoIPSender.o: applications/voip/SimpleVoIPSender.cc \
  applications/voip/SimpleVoIPSender.h \
  networklayer/contract/IPv6Address.h \
  applications/voip/SimpleVoIPPacket_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
  base/AbstractQueue.h \
  base/INETDefs.h
$O/base/BasicModule.o: base/BasicModule.cc \
  base/BasicModule.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h
$O/base/ByteArray.o: base/ByteArray.cc \
  base/ByteArray_m.h \
  base/ByteArray.h \
  base/INETDefs.h
$O/base/ByteArrayBuffer.o: base/ByteArrayBuffer.cc \
  base/ByteArray_m.h \
  base/ByteArrayBuffer.h \
  base/ByteArray.h \
  base/INETDefs.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
  base/ByteArray_m.h \
  base/ByteArrayMessage.h \
  base/ByteArrayMessage_m.h \
  base/ByteArray.h \
  base/INETDefs.h
$O/base/Coord.o: base/Coord.cc \
  util/FWMath.h \
  base/Coord.h \
  base/INETDefs.h
$O/base/InterfaceOperations.o: base/InterfaceOperations.cc
$O/base/Join.o: base/Join.cc \
  base/INETDefs.h
$O/base/LifecycleController.o: base/LifecycleController.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/IScriptable.h \
  util/opp_utils.h \
  base/LifecycleController.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/base/MMapBoard.o: base/MMapBoard.cc \
  base/MMapBoard.h \
  base/ModuleAccess.h \
  base/INETDefs.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
  base/ModuleAccess.h \
  base/INETDefs.h
$O/base/NedFunctions.o: base/NedFunctions.cc \
  base/INETDefs.h
$O/base/NodeOperations.o: base/NodeOperations.cc \
  base/NodeOperations.h \
  base/ModuleAccess.h \
  base/LifecycleOperation.h \
  base/INETDefs.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
  base/NotifierConsts.h \
  base/INETDefs.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h \
  base/INETDefs.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
  base/INETDefs.h \
  base/ProtocolMap.h
$O/base/QueueBase.o: base/QueueBase.cc \
  base/AbstractQueue.h \
  base/QueueBase.h \
  base/INETDefs.h
$O/base/QueueWithQoS.o: base/QueueWithQoS.cc \
  base/AbstractQueue.h \
  base/EnqueueHook.h \
  base/INETDefs.h \
  base/QueueWithQoS.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
  base/ReassemblyBuffer.h \
  base/INETDefs.h
$O/base/ResultFilters.o: base/ResultFilters.cc \
  util/FWMath.h \
  base/Coord.h \
  base/ResultFilters.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/base/Sink.o: base/Sink.cc \
  base/Sink.h \
  base/INETDefs.h
$O/base/Topology.o: base/Topology.cc \
  base/Topology.h \
  util/PatternMatcher.h \
  util/stlutils.h \
  base/INETDefs.h
$O/base/UnimplementedModule.o: base/UnimplementedModule.cc \
  base/UnimplementedModule.h \
  base/INETDefs.h
$O/base/WeightedTopology.o: base/WeightedTopology.cc \
  base/WeightedTopology.h \
  base/INETDefs.h
$O/base/erfc.o: base/erfc.cc \
  base/INETDefs.h
$O/battery/models/BasicBattery.o: battery/models/BasicBattery.cc \
  base/INotifiable.h \
  base/ModuleAccess.h \
  battery/models/BasicBattery.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h
$O/battery/models/InetSimpleBattery.o: battery/models/InetSimpleBattery.cc \
  battery/models/InetSimpleBattery.h \
  battery/models/Energy.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  battery/models/BasicBattery.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  world/powercontrol/IPowerControl.h
$O/generic/RPSSocket.o: generic/RPSSocket.cc \
  generic/RPSSocket.h
$O/linklayer/channels/LinkFailureManager.o: linklayer/channels/LinkFailureManager.cc \
  linklayer/channels/ProgramedFailureChannel.h \
  linklayer/channels/LinkFailureManager.h \
  linklayer/channels/LinkFailureMessage_m.h
$O/linklayer/channels/MyThroughputMeteringChannel.o: linklayer/channels/MyThroughputMeteringChannel.cc \
  linklayer/channels/MyThroughputMeteringChannel.h
$O/linklayer/channels/ProgramedFailureChannel.o: linklayer/channels/ProgramedFailureChannel.cc \
  linklayer/channels/ProgramedFailureChannel.h \
  linklayer/channels/LinkFailureManager.h
$O/linklayer/collStats/collStats.o: linklayer/collStats/collStats.cc \
  util/FWMath.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/collStats/collStats.h \
  linklayer/radio/ModulationType.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetAddress.h
$O/linklayer/common/MACBase.o: linklayer/common/MACBase.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/INETDefs.h
$O/linklayer/common/WirelessMacBase.o: linklayer/common/WirelessMacBase.cc \
  linklayer/contract/MACAddress.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  linklayer/common/MACBase.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/common/WirelessMacBase.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
  base/INETDefs.h \
  linklayer/ethernet/EtherBus.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  linklayer/ethernet/EtherEncap.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h
$O/linklayer/ethernet/EtherFrameClassifier.o: linklayer/ethernet/EtherFrameClassifier.cc \
  linklayer/ethernet/EtherFrameClassifier.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
  base/INETDefs.h \
  linklayer/ethernet/EtherHub.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherLLC.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  linklayer/ethernet/Ethernet.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/ethernet/EtherMAC.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/common/MACBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NodeOperations.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  base/ModuleAccess.h \
  linklayer/common/MACBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  util/opp_utils.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h
$O/linklayer/ethernet/EtherMACFullDuplex.o: linklayer/ethernet/EtherMACFullDuplex.cc \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMACFullDuplex.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  base/ModuleAccess.h \
  linklayer/common/MACBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h
$O/linklayer/ethernet/switch/MACRelayUnitBase.o: linklayer/ethernet/switch/MACRelayUnitBase.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  base/NodeOperations.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/common/MACBase.h \
  base/ModuleAccess.h \
  linklayer/ethernet/switch/MACRelayUnitBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h
$O/linklayer/ethernet/switch/MACRelayUnitNP.o: linklayer/ethernet/switch/MACRelayUnitNP.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/switch/MACRelayUnitBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/ethernet/switch/MACRelayUnitNP.h
$O/linklayer/ethernet/switch/MACRelayUnitPP.o: linklayer/ethernet/switch/MACRelayUnitPP.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/switch/MACRelayUnitBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/ethernet/switch/MACRelayUnitPP.h
$O/linklayer/ext/ExtFrame_m.o: linklayer/ext/ExtFrame_m.cc \
  linklayer/ext/ExtFrame_m.h
$O/linklayer/ext/ExtInterface.o: linklayer/ext/ExtInterface.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ext/ExtFrame_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  linklayer/common/MACBase.h \
  linklayer/ext/cSocketRTScheduler.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  util/opp_utils.h \
  base/NotificationBoard.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/common/InterfaceTable.h \
  linklayer/ext/ExtInterface.h \
  networklayer/ipv4/IPv4Datagram.h
$O/linklayer/ext/cSocketRTScheduler.o: linklayer/ext/cSocketRTScheduler.cc \
  linklayer/ext/ExtFrame_m.h \
  linklayer/ext/cSocketRTScheduler.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/ethernet.h
$O/linklayer/idealwireless/IdealWirelessMac.o: linklayer/idealwireless/IdealWirelessMac.cc \
  util/FWMath.h \
  base/BasicModule.h \
  world/radio/IdealChannelModel.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/radio/IdealRadio.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  base/IPassiveQueue.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/idealwireless/IdealWirelessMac.h \
  base/ModuleAccess.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  util/opp_utils.h \
  base/NotificationBoard.h \
  linklayer/radio/IdealAirFrame_m.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  world/radio/IdealChannelModelAccess.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/idealwireless/IdealWirelessFrame_m.h \
  linklayer/common/WirelessMacBase.h
$O/linklayer/ieee80211/mac/Ieee80211DataRate.o: linklayer/ieee80211/mac/Ieee80211DataRate.cc \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/WifiMode.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
  util/FWMath.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  base/NodeOperations.h \
  linklayer/ieee80211/mac/Ieee80211Mac.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/ieee80211/mac/MultiQueue.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  base/FSMA.h \
  linklayer/common/MACBase.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mac/Ieee80211eClassifier.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  util/opp_utils.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/radio/ModulationType.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/common/WirelessMacBase.h
$O/linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.o: linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mac/Ieee80211eClassifier.o: linklayer/ieee80211/mac/Ieee80211eClassifier.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/udp/UDPPacket_m.h \
  linklayer/ieee80211/mac/Ieee80211eClassifier.h \
  base/ByteArray.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/IPv4Datagram.h
$O/linklayer/ieee80211/mac/MultiQueue.o: linklayer/ieee80211/mac/MultiQueue.cc \
  linklayer/ieee80211/mac/MultiQueue.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  base/INETDefs.h
$O/linklayer/ieee80211/mac/WifiMode.o: linklayer/ieee80211/mac/WifiMode.cc \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/WifiMode.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
  linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceTable.h
$O/linklayer/ieee80211/mgmt/Ieee80211Etx.o: linklayer/ieee80211/mgmt/Ieee80211Etx.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  util/GlobalWirelessLinkInspector.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211Etx.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mgmt/ETXPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/radio/Radio80211aControlInfo_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ethernet/Ethernet.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ethernet/Ethernet.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ieee80211/mgmt/Ieee80211Etx.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.h \
  linklayer/ieee80211/mgmt/ETXPacket_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.cc \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/PassiveQueueBase.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/ipv4/IPv4Route.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMPMessage.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  base/IPassiveQueue.h \
  base/Coord.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  world/radio/ChannelAccess.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/radio/ModulationType.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  world/radio/IChannelControl.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/radio/BerParseFile.o: linklayer/ieee80211/radio/BerParseFile.cc \
  linklayer/ieee80211/radio/BerParseFile.h \
  base/INETDefs.h
$O/linklayer/ieee80211/radio/Ieee80211RadioModel.o: linklayer/ieee80211/radio/Ieee80211RadioModel.cc \
  util/FWMath.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/radio/IRadioModel.h \
  linklayer/ieee80211/radio/BerParseFile.h \
  linklayer/ieee80211/radio/Ieee80211RadioModel.h \
  linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
  base/Coord.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/radio/SnrList.h
$O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o: linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.cc \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  base/INETDefs.h
$O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o: linklayer/ieee80211/radio/errormodel/nist-error-rate-model.cc \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/WifiMode.h
$O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o: linklayer/ieee80211/radio/errormodel/yans-error-rate-model.cc \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/WifiMode.h
$O/linklayer/ieee80211mesh/ethernet/EtherEncapMesh.o: linklayer/ieee80211mesh/ethernet/EtherEncapMesh.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/EtherMACBase.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ethernet/EtherMAC.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/common/MACBase.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  linklayer/ethernet/EtherEncap.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211mesh/ethernet/EtherEncapMesh.h
$O/linklayer/ieee80211mesh/hwmp/hwmp-rtable.o: linklayer/ieee80211mesh/hwmp/hwmp-rtable.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211mesh/hwmp/hwmp-rtable.h \
  base/INETDefs.h
$O/linklayer/ieee80211mesh/hwmp/hwmp.o: linklayer/ieee80211mesh/hwmp/hwmp.cc \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ieee80211mesh/hwmp/hwmp-rtable.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/ieee80211/mgmt/Ieee80211Etx.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mgmt/ETXPacket_m.h \
  linklayer/ieee80211mesh/hwmp/hwmp.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  networklayer/ipv4/ICMPMessage.h
$O/linklayer/ieee80211mesh/locator/BigUint.o: linklayer/ieee80211mesh/locator/BigUint.cc \
  base/INETDefs.h \
  linklayer/ieee80211mesh/locator/BigUint.h
$O/linklayer/ieee80211mesh/locator/LocatorModule.o: linklayer/ieee80211mesh/locator/LocatorModule.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/contract/UDPControlInfo.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  util/GlobalWirelessLinkInspector.h \
  base/PassiveQueueBase.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  linklayer/ieee80211mesh/locator/LocatorModule.h \
  base/ModuleAccess.h \
  transport/udp/UDP.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  linklayer/ieee80211mesh/locator/locatorPkt_m.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/ipv4/IPv4Route.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  transport/contract/UDPSocket.h
$O/linklayer/ieee80211mesh/locator/LocatorModuleClient.o: linklayer/ieee80211mesh/locator/LocatorModuleClient.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ieee80211mesh/locator/LocatorModuleClient.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/contract/UDPControlInfo.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  base/PassiveQueueBase.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  transport/udp/UDP.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  linklayer/ieee80211mesh/locator/locatorPkt_m.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
  transport/contract/UDPSocket.h
$O/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.o: linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.cc \
  networklayer/manetrouting/base/compatibility.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  ./world/obstacles/Obstacle.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  linklayer/radio/Radio.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  linklayer/ieee80211/mac/Ieee80211Mac.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  world/radio/ChannelAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  linklayer/ieee80211mesh/mgmt/lwmpls_data.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  world/obstacles/ObstacleControl.h \
  linklayer/ieee80211/mgmt/Ieee80211Etx.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  linklayer/ieee80211/mgmt/ETXPacket_m.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/common/WirelessMacBase.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  base/BasicModule.h \
  networklayer/ipv4/ICMP.h \
  linklayer/radio/IRadioModel.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/ieee80211/mac/MultiQueue.h \
  ./world/annotations/AnnotationManager.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/ipv4/IRoutingTable.h \
  base/FSMA.h \
  linklayer/radio/INoiseGenerator.h \
  linklayer/common/MACBase.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  util/opp_utils.h \
  linklayer/ieee80211mesh/locator/locatorPkt_m.h \
  networklayer/manetrouting/olsr/OLSR.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/WirelessNumHops.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
  networklayer/manetrouting/base/MeshControlInfo_m.h \
  world/radio/IChannelControl.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/radio/SnrList.h
$O/linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.o: linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.cc \
  networklayer/manetrouting/base/compatibility.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  ./world/obstacles/Obstacle.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  linklayer/radio/Radio.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/arp/ARPPacket_m.h \
  linklayer/ieee80211/mac/Ieee80211Mac.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv6/IPv6Datagram.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  world/radio/ChannelAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  linklayer/ieee80211mesh/mgmt/lwmpls_data.h \
  networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  world/obstacles/ObstacleControl.h \
  linklayer/ieee80211/mgmt/Ieee80211Etx.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/ieee80211/mgmt/ETXPacket_m.h \
  networklayer/manetrouting/aodv/aodv_msg_struct.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/common/WirelessMacBase.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  base/BasicModule.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ted/LinkStatePacket_m.h \
  linklayer/radio/IRadioModel.h \
  networklayer/ted/TED_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  base/Coord.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  linklayer/radio/AirFrame_m.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  linklayer/ieee80211/mac/MultiQueue.h \
  ./world/annotations/AnnotationManager.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/mpls/MPLSPacket.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/radio/INoiseGenerator.h \
  base/FSMA.h \
  linklayer/common/MACBase.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  linklayer/radio/propagation/IReceptionModel.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSR.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/WirelessNumHops.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
  networklayer/manetrouting/base/MeshControlInfo_m.h \
  world/radio/IChannelControl.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/radio/SnrList.h
$O/linklayer/ieee80211mesh/mgmt/lwmpls_data.o: linklayer/ieee80211mesh/mgmt/lwmpls_data.cc \
  linklayer/ieee80211mesh/mgmt/lwmpls_data.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h
$O/linklayer/ieee8021d/ethernet/EthernetLink.o: linklayer/ieee8021d/ethernet/EthernetLink.cc \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  linklayer/ethernet/EtherMACBase.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee8021d/ethernet/EtherMACAccess.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  status/NodeStatus.h \
  linklayer/ethernet/EtherMAC.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/common/MACBase.h \
  linklayer/ieee8021d/ethernet/EthernetLink.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h
$O/linklayer/ieee8021d/ieee8021AD/PortFilt1ad.o: linklayer/ieee8021d/ieee8021AD/PortFilt1ad.cc \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  linklayer/ieee8021d/RSTP/BPDU_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  util/XMLUtils.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee8021d/ieee8021Q/PortFilt.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h \
  linklayer/ieee8021d/ieee8021AD/PortFilt1ad.h
$O/linklayer/ieee8021d/ieee8021AH/Admacrelay.o: linklayer/ieee8021d/ieee8021AH/Admacrelay.cc \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  linklayer/ieee8021d/ieee8021AH/Admacrelay.h \
  linklayer/ieee8021d/RSTP/BPDU_m.h \
  linklayer/ieee8021d/ieee8021AH/Cache1AHAccess.h \
  linklayer/ieee8021d/MVRP/MVRP.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee8021d/common/Delivery_m.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/RSTP/RSTP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee8021d/RSTP/RSTPAccess.h \
  linklayer/ieee8021d/ieee8021Q/Relay1Q.h \
  linklayer/ieee8021d/ieee8021Q/Cache1Q.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee8021d/MVRP/MVRPAccess.h \
  linklayer/ieee8021d/ieee8021AH/Cache1AH.h \
  linklayer/ieee8021d/ieee8021Q/PortFilt.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h
$O/linklayer/ieee8021d/ieee8021AH/Cache1AH.o: linklayer/ieee8021d/ieee8021AH/Cache1AH.cc \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  linklayer/ieee8021d/ieee8021AH/Admacrelay.h \
  linklayer/ieee8021d/RSTP/BPDU_m.h \
  linklayer/ieee8021d/ieee8021AH/Cache1AHAccess.h \
  linklayer/ieee8021d/MVRP/MVRP.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee8021d/common/Delivery_m.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/RSTP/RSTP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee8021d/ieee8021Q/Relay1Q.h \
  linklayer/ieee8021d/ieee8021AH/AdmacrelayAccess.h \
  util/XMLUtils.h \
  linklayer/ieee8021d/ieee8021Q/Cache1Q.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee8021d/ieee8021AH/Cache1AH.h \
  linklayer/ieee8021d/ieee8021Q/PortFilt.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h
$O/linklayer/ieee8021d/ieee8021AH/IComponent.o: linklayer/ieee8021d/ieee8021AH/IComponent.cc \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  linklayer/ethernet/EtherMACBase.h \
  linklayer/ieee8021d/RSTP/BPDU_m.h \
  linklayer/ieee8021d/ieee8021AH/IComponent.h \
  linklayer/ieee8021d/MVRP/MVRP.h \
  linklayer/ieee8021d/ieee8021AH/ITagTableAccess.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee8021d/common/Delivery_m.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/RSTP/RSTP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee8021d/RSTP/RSTPAccess.h \
  util/XMLUtils.h \
  linklayer/ieee8021d/ieee8021Q/Cache1Q.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/ethernet/EtherMAC.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/common/MACBase.h \
  linklayer/ieee8021d/ieee8021Q/PortFilt.h \
  linklayer/ieee8021d/ieee8021AH/ITagTable.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h
$O/linklayer/ieee8021d/ieee8021AH/ITagTable.o: linklayer/ieee8021d/ieee8021AH/ITagTable.cc \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  util/XMLUtils.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee8021d/ieee8021AH/ITagTable.h \
  base/INETDefs.h
$O/linklayer/ieee8021d/ieee8021AH/PortFilt1ah.o: linklayer/ieee8021d/ieee8021AH/PortFilt1ah.cc \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  linklayer/ieee8021d/RSTP/BPDU_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee8021d/ieee8021AH/PortFilt1ah.h \
  util/XMLUtils.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee8021d/ieee8021Q/PortFilt.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h
$O/linklayer/ieee8021d/ieee8021Q/Cache1Q.o: linklayer/ieee8021d/ieee8021Q/Cache1Q.cc \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  util/XMLUtils.h \
  linklayer/ieee8021d/ieee8021Q/Cache1Q.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h
$O/linklayer/ieee8021d/ieee8021Q/PortFilt.o: linklayer/ieee8021d/ieee8021Q/PortFilt.cc \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  linklayer/ieee8021d/RSTP/BPDU_m.h \
  linklayer/ieee8021d/MVRP/MVRP.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee8021d/common/Delivery_m.h \
  linklayer/ieee8021d/RSTP/RSTP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee8021d/ieee8021Q/Cache1Q.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee8021d/MVRP/MVRPAccess.h \
  linklayer/ieee8021d/ieee8021Q/PortFilt.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h
$O/linklayer/ieee8021d/ieee8021Q/Relay1Q.o: linklayer/ieee8021d/ieee8021Q/Relay1Q.cc \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  base/NodeOperations.h \
  linklayer/ieee8021d/RSTP/BPDU_m.h \
  linklayer/ieee8021d/MVRP/MVRP.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee8021d/common/Delivery_m.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/RSTP/RSTP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee8021d/RSTP/RSTPAccess.h \
  linklayer/ieee8021d/ieee8021Q/Relay1Q.h \
  linklayer/ieee8021d/ieee8021Q/Cache1Q.h \
  linklayer/contract/MACAddress.h \
  status/NodeStatus.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee8021d/MVRP/MVRPAccess.h \
  linklayer/ieee8021d/ieee8021Q/Cache1QAccess.h \
  linklayer/ieee8021d/ieee8021Q/PortFilt.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h
$O/linklayer/ieee8021d/MVRP/MVRP.o: linklayer/ieee8021d/MVRP/MVRP.cc \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  linklayer/ieee8021d/ieee8021AH/Admacrelay.h \
  linklayer/ieee8021d/ieee8021Q/Relay1QAccess.h \
  linklayer/ieee8021d/RSTP/BPDU_m.h \
  linklayer/ieee8021d/ieee8021AH/Cache1AHAccess.h \
  linklayer/ieee8021d/MVRP/MVRP.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee8021d/common/Delivery_m.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/RSTP/RSTP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee8021d/RSTP/RSTPAccess.h \
  linklayer/ieee8021d/ieee8021Q/Relay1Q.h \
  linklayer/ieee8021d/ieee8021AH/AdmacrelayAccess.h \
  linklayer/ieee8021d/ieee8021Q/Cache1Q.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee8021d/ieee8021AH/Cache1AH.h \
  linklayer/ieee8021d/ieee8021Q/PortFilt.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h
$O/linklayer/ieee8021d/RSTP/RSTP.o: linklayer/ieee8021d/RSTP/RSTP.cc \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  linklayer/ieee8021d/ieee8021AH/Admacrelay.h \
  linklayer/ethernet/EtherMACBase.h \
  linklayer/ieee8021d/ieee8021Q/Relay1QAccess.h \
  linklayer/ieee8021d/RSTP/BPDU_m.h \
  linklayer/ieee8021d/ieee8021AH/Cache1AHAccess.h \
  linklayer/ieee8021d/MVRP/MVRP.h \
  base/ModuleAccess.h \
  linklayer/ethernet/switch/MACRelayUnitBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee8021d/common/Delivery_m.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/RSTP/RSTP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee8021d/ieee8021Q/Relay1Q.h \
  linklayer/ieee8021d/ieee8021AH/AdmacrelayAccess.h \
  util/XMLUtils.h \
  linklayer/ieee8021d/ieee8021Q/Cache1Q.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee8021d/ieee8021Q/Cache1QAccess.h \
  linklayer/common/MACBase.h \
  linklayer/ieee8021d/ieee8021AH/Cache1AH.h \
  linklayer/ieee8021d/ieee8021Q/PortFilt.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h
$O/linklayer/ieee8021d/Tester/TesterObject.o: linklayer/ieee8021d/Tester/TesterObject.cc \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee8021d/ieee8021Q/8021Q.h \
  linklayer/ieee8021d/RSTP/BPDU_m.h \
  linklayer/ieee8021d/Tester/TesterObject.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee8021d/common/Delivery_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  util/XMLUtils.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  base/INETDefs.h \
  linklayer/ieee8021d/MVRP/MVRPDU_m.h \
  applications/ethernet/EtherApp_m.h
$O/linklayer/loopback/Loopback.o: linklayer/loopback/Loopback.cc \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/TxNotifDetails.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/common/MACBase.h \
  linklayer/loopback/Loopback.h \
  util/opp_utils.h \
  base/INETDefs.h
$O/linklayer/ppp/PPP.o: linklayer/ppp/PPP.cc \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ppp/PPPFrame_m.h \
  linklayer/contract/TxNotifDetails.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/common/MACBase.h \
  util/opp_utils.h \
  linklayer/ppp/PPP.h \
  base/LifecycleOperation.h \
  base/INETDefs.h
$O/linklayer/queue/AlgorithmicDropperBase.o: linklayer/queue/AlgorithmicDropperBase.cc \
  linklayer/queue/AlgorithmicDropperBase.h \
  linklayer/queue/IQueueAccess.h \
  base/INETDefs.h
$O/linklayer/queue/DropTailQueue.o: linklayer/queue/DropTailQueue.cc \
  base/PassiveQueueBase.h \
  linklayer/queue/DropTailQueue.h \
  base/IPassiveQueue.h \
  base/INETDefs.h
$O/linklayer/queue/FIFOQueue.o: linklayer/queue/FIFOQueue.cc \
  linklayer/queue/FIFOQueue.h \
  base/PassiveQueueBase.h \
  linklayer/queue/IQueueAccess.h \
  base/IPassiveQueue.h \
  base/INETDefs.h
$O/linklayer/queue/PriorityScheduler.o: linklayer/queue/PriorityScheduler.cc \
  linklayer/queue/SchedulerBase.h \
  linklayer/queue/PriorityScheduler.h \
  base/IPassiveQueue.h \
  base/INETDefs.h
$O/linklayer/queue/REDDropper.o: linklayer/queue/REDDropper.cc \
  linklayer/queue/AlgorithmicDropperBase.h \
  linklayer/queue/IQueueAccess.h \
  util/opp_utils.h \
  base/INETDefs.h \
  linklayer/queue/REDDropper.h
$O/linklayer/queue/SchedulerBase.o: linklayer/queue/SchedulerBase.cc \
  linklayer/queue/SchedulerBase.h \
  base/IPassiveQueue.h \
  base/INETDefs.h
$O/linklayer/queue/ThresholdDropper.o: linklayer/queue/ThresholdDropper.cc \
  linklayer/queue/AlgorithmicDropperBase.h \
  linklayer/queue/IQueueAccess.h \
  linklayer/queue/ThresholdDropper.h \
  base/INETDefs.h
$O/linklayer/queue/WRRScheduler.o: linklayer/queue/WRRScheduler.cc \
  linklayer/queue/SchedulerBase.h \
  linklayer/queue/WRRScheduler.h \
  base/IPassiveQueue.h \
  util/opp_utils.h \
  base/INETDefs.h
$O/linklayer/queue/WeightedFairQueue.o: linklayer/queue/WeightedFairQueue.cc \
  base/PassiveQueueBase.h \
  linklayer/queue/IQueueAccess.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  base/IPassiveQueue.h \
  linklayer/queue/WeightedFairQueue.h \
  base/INETDefs.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/radio/IModulation.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/Modulation.h \
  base/Coord.h \
  linklayer/radio/GenericRadioModel.h \
  linklayer/radio/AirFrame_m.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/SnrList.h
$O/linklayer/radio/IdealRadio.o: linklayer/radio/IdealRadio.cc \
  linklayer/radio/IdealRadio.h \
  base/NodeOperations.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  world/radio/IdealChannelModelAccess.h \
  util/FWMath.h \
  base/BasicModule.h \
  world/radio/IdealChannelModel.h \
  base/Coord.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  linklayer/radio/IdealAirFrame_m.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  base/INETDefs.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
  linklayer/radio/IModulation.h \
  linklayer/radio/Modulation.h \
  base/INETDefs.h
$O/linklayer/radio/Radio.o: linklayer/radio/Radio.cc \
  ./world/obstacles/Obstacle.h \
  linklayer/radio/Radio.h \
  base/NodeOperations.h \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  world/obstacles/ObstacleControl.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  base/Coord.h \
  status/NodeStatus.h \
  linklayer/radio/AirFrame_m.h \
  base/INotifiable.h \
  ./world/annotations/AnnotationManager.h \
  linklayer/radio/INoiseGenerator.h \
  linklayer/radio/propagation/IReceptionModel.h \
  battery/models/BasicBattery.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  world/radio/IChannelControl.h \
  linklayer/radio/SnrList.h
$O/linklayer/radio/propagation/FreeSpaceModel.o: linklayer/radio/propagation/FreeSpaceModel.cc \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INETDefs.h \
  world/radio/IChannelControl.h
$O/linklayer/radio/propagation/LogNormalShadowingModel.o: linklayer/radio/propagation/LogNormalShadowingModel.cc \
  linklayer/radio/propagation/FreeSpaceModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/LogNormalShadowingModel.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/NakagamiModel.o: linklayer/radio/propagation/NakagamiModel.cc \
  linklayer/radio/propagation/NakagamiModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/RayleighModel.o: linklayer/radio/propagation/RayleighModel.cc \
  linklayer/radio/propagation/FreeSpaceModel.h \
  linklayer/radio/propagation/RayleighModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/RiceModel.o: linklayer/radio/propagation/RiceModel.cc \
  linklayer/radio/propagation/FreeSpaceModel.h \
  linklayer/radio/propagation/RiceModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/TwoRayGroundModel.o: linklayer/radio/propagation/TwoRayGroundModel.cc \
  linklayer/radio/propagation/TwoRayGroundModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INETDefs.h
$O/linklayer/rstp/MACRelayUnitSTPNP.o: linklayer/rstp/MACRelayUnitSTPNP.cc \
  linklayer/ethernet/switch/MACRelayUnitBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/rstp/bpdu_m.h \
  linklayer/contract/MACAddress.h \
  linklayer/rstp/STPDefinitions.h \
  linklayer/rstp/stpTimers_m.h \
  linklayer/ethernet/Ethernet.h \
  base/INETDefs.h \
  linklayer/rstp/MACRelayUnitSTPNP.h \
  linklayer/ethernet/switch/MACRelayUnitNP.h
$O/linklayer/rstp/STPDefinitions.o: linklayer/rstp/STPDefinitions.cc \
  linklayer/contract/MACAddress.h \
  linklayer/rstp/STPDefinitions.h \
  base/INETDefs.h
$O/linklayer/rstp/bpdu_m.o: linklayer/rstp/bpdu_m.cc \
  linklayer/rstp/bpdu_m.h \
  linklayer/contract/MACAddress.h \
  linklayer/rstp/STPDefinitions.h \
  base/INETDefs.h
$O/linklayer/rstp/stpTimers_m.o: linklayer/rstp/stpTimers_m.cc \
  linklayer/rstp/stpTimers_m.h
$O/mobility/models/ANSimMobility.o: mobility/models/ANSimMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  mobility/models/ANSimMobility.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/BonnMotionFileCache.o: mobility/models/BonnMotionFileCache.cc \
  mobility/models/BonnMotionFileCache.h \
  base/INETDefs.h
$O/mobility/models/BonnMotionMobility.o: mobility/models/BonnMotionMobility.cc \
  mobility/models/MobilityBase.h \
  mobility/models/BonnMotionMobility.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  mobility/models/BonnMotionFileCache.h \
  base/INETDefs.h
$O/mobility/models/ChiangMobility.o: mobility/models/ChiangMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  util/FWMath.h \
  base/BasicModule.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h \
  mobility/models/ChiangMobility.h
$O/mobility/models/CircleMobility.o: mobility/models/CircleMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/CircleMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/ConstSpeedMobility.o: mobility/models/ConstSpeedMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  mobility/models/ConstSpeedMobility.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/GaussMarkovMobility.o: mobility/models/GaussMarkovMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/GaussMarkovMobility.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  util/FWMath.h \
  base/BasicModule.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/LaptopModelManager.o: mobility/models/LaptopModelManager.cc \
  mobility/models/MobilityBase.h \
  mobility/models/LaptopModelManager.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/LineSegmentsMobilityBase.o: mobility/models/LineSegmentsMobilityBase.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/LinearMobility.o: mobility/models/LinearMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/LinearMobility.h \
  mobility/models/MovingMobilityBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/LinearNodeDistributionMobility.o: mobility/models/LinearNodeDistributionMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  mobility/models/StationaryMobility.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/LinearNodeDistributionMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/MassMobility.o: mobility/models/MassMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h \
  mobility/models/MassMobility.h
$O/mobility/models/MoBANCoordinator.o: mobility/models/MoBANCoordinator.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  mobility/models/MobilityAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/models/MoBANCoordinator.h \
  mobility/models/Posture.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  mobility/models/PostureTransition.h \
  base/INETDefs.h \
  mobility/models/MoBANLocal.h
$O/mobility/models/MoBANLocal.o: mobility/models/MoBANLocal.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/models/MoBANCoordinator.h \
  base/Coord.h \
  mobility/models/Posture.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  mobility/models/PostureTransition.h \
  base/INETDefs.h \
  mobility/models/MoBANLocal.h
$O/mobility/models/MobilityAccess.o: mobility/models/MobilityAccess.cc \
  base/ModuleAccess.h \
  mobility/models/MobilityAccess.h \
  util/FWMath.h \
  base/Coord.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/MobilityBase.o: mobility/models/MobilityBase.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/MovingMobilityBase.o: mobility/models/MovingMobilityBase.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  util/FWMath.h \
  base/BasicModule.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/Ns2MotionMobility.o: mobility/models/Ns2MotionMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  mobility/models/Ns2MotionMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/Posture.o: mobility/models/Posture.cc \
  util/FWMath.h \
  base/Coord.h \
  mobility/models/Posture.h \
  base/INETDefs.h
$O/mobility/models/PostureTransition.o: mobility/models/PostureTransition.cc \
  util/FWMath.h \
  base/Coord.h \
  mobility/models/PostureTransition.h \
  base/INETDefs.h
$O/mobility/models/RandomWPMobility.o: mobility/models/RandomWPMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  util/FWMath.h \
  base/BasicModule.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h \
  mobility/models/RandomWPMobility.h
$O/mobility/models/RectangleMobility.o: mobility/models/RectangleMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  mobility/models/RectangleMobility.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/StaticGridMobility.o: mobility/models/StaticGridMobility.cc \
  mobility/models/MobilityBase.h \
  mobility/models/StaticGridMobility.h \
  base/ModuleAccess.h \
  mobility/models/StationaryMobility.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/StationaryMobility.o: mobility/models/StationaryMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  mobility/models/StationaryMobility.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  util/FWMath.h \
  base/BasicModule.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/TraCIMobility.o: mobility/models/TraCIMobility.cc \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  ./mobility/models/TraCIMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  ./mobility/models/MobilityBase.h \
  base/Coord.h \
  base/INotifiable.h \
  ./world/traci/TraCIScenarioManager.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/TractorMobility.o: mobility/models/TractorMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/TractorMobility.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/mobility/models/TurtleMobility.o: mobility/models/TurtleMobility.cc \
  mobility/models/MobilityBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/models/MovingMobilityBase.h \
  mobility/models/LineSegmentsMobilityBase.h \
  mobility/models/TurtleMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h
$O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o: networklayer/autorouting/ipv4/FlatNetworkConfigurator.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/WeightedTopology.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/autorouting/ipv4/HostAutoConfigurator.o: networklayer/autorouting/ipv4/HostAutoConfigurator.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  networklayer/autorouting/ipv4/HostAutoConfigurator.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/autorouting/ipv4/HostAutoConfigurator2.o: networklayer/autorouting/ipv4/HostAutoConfigurator2.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/autorouting/ipv4/HostAutoConfigurator2.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o: networklayer/autorouting/ipv4/IPv4NetworkConfigurator.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/PatternMatcher.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  util/stlutils.h \
  networklayer/ipv4/IPv4Route.h \
  base/Topology.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o: networklayer/autorouting/ipv4/IPv4NodeConfigurator.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/PatternMatcher.h \
  networklayer/contract/IPv4Address.h \
  networklayer/autorouting/ipv4/IPv4NodeConfigurator.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  base/Topology.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  util/opp_utils.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o: networklayer/autorouting/ipv6/FlatNetworkConfigurator6.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/autorouting/ipv6/FlatNetworkConfigurator6.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/bgpv4/BGPFSM.o: networklayer/bgpv4/BGPFSM.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/Macho.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/contract/TCPCommand_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/bgpv4/BGPCommon.h
$O/networklayer/bgpv4/BGPRouting.o: networklayer/bgpv4/BGPRouting.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/Macho.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/contract/TCPCommand_m.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/bgpv4/BGPCommon.h
$O/networklayer/bgpv4/BGPSession.o: networklayer/bgpv4/BGPSession.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/Macho.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/contract/TCPCommand_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/bgpv4/BGPCommon.h
$O/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.o: networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.cc \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h
$O/networklayer/bgpv4/BGPMessage/BGPHeader_m.o: networklayer/bgpv4/BGPMessage/BGPHeader_m.cc \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h
$O/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.o: networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.cc \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h
$O/networklayer/bgpv4/BGPMessage/BGPOpen_m.o: networklayer/bgpv4/BGPMessage/BGPOpen_m.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  base/INETDefs.h
$O/networklayer/bgpv4/BGPMessage/BGPUpdate.o: networklayer/bgpv4/BGPMessage/BGPUpdate.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  base/INETDefs.h
$O/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o: networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  base/INETDefs.h
$O/networklayer/bgpv4/BGPMessage/BGPUpdate_m.o: networklayer/bgpv4/BGPMessage/BGPUpdate_m.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  base/INETDefs.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h
$O/networklayer/contract/IPv4Address.o: networklayer/contract/IPv4Address.cc \
  networklayer/contract/IPv4Address.h \
  base/INETDefs.h
$O/networklayer/contract/IPv4ControlInfo.o: networklayer/contract/IPv4ControlInfo.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/contract/IPvXAddressResolver.o: networklayer/contract/IPvXAddressResolver.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/PatternMatcher.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv4/IPv4Route.h \
  base/Topology.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/diffserv/BehaviorAggregateClassifier.o: networklayer/diffserv/BehaviorAggregateClassifier.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/diffserv/DiffservUtil.h \
  base/ByteArray.h \
  networklayer/diffserv/BehaviorAggregateClassifier.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/diffserv/DSCPMarker.o: networklayer/diffserv/DSCPMarker.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/contract/IPv6Address.h \
  networklayer/diffserv/DSCP_m.h \
  networklayer/diffserv/DSCPMarker.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/diffserv/DSCP_m.o: networklayer/diffserv/DSCP_m.cc \
  networklayer/diffserv/DSCP_m.h \
  base/INETDefs.h
$O/networklayer/diffserv/DiffservUtil.o: networklayer/diffserv/DiffservUtil.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/diffserv/DiffservUtil.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/diffserv/DSCP_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  util/opp_utils.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/diffserv/MultiFieldClassifier.o: networklayer/diffserv/MultiFieldClassifier.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/diffserv/MultiFieldClassifier.h \
  networklayer/diffserv/DiffservUtil.h \
  base/ByteArray.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/diffserv/SingleRateThreeColorMeter.o: networklayer/diffserv/SingleRateThreeColorMeter.cc \
  networklayer/diffserv/DiffservUtil.h \
  base/INETDefs.h \
  networklayer/diffserv/SingleRateThreeColorMeter.h
$O/networklayer/diffserv/TokenBucketMeter.o: networklayer/diffserv/TokenBucketMeter.cc \
  networklayer/diffserv/TokenBucketMeter.h \
  networklayer/diffserv/DiffservUtil.h \
  base/INETDefs.h
$O/networklayer/diffserv/TwoRateThreeColorMeter.o: networklayer/diffserv/TwoRateThreeColorMeter.cc \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/diffserv/TwoRateThreeColorMeter.h \
  base/INETDefs.h
$O/networklayer/extras/Dummy.o: networklayer/extras/Dummy.cc \
  base/INETDefs.h
$O/networklayer/extras/FailureManager.o: networklayer/extras/FailureManager.cc \
  base/IScriptable.h \
  base/INETDefs.h \
  networklayer/extras/FailureManager.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  applications/pingapp/PingPayload_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/contract/IPv6Address.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6Access.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/xmipv6/xMIPv6Access.h \
  networklayer/icmpv6/ICMPv6Access.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/internetcloud/CloudDelayerBase.o: networklayer/internetcloud/CloudDelayerBase.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/internetcloud/CloudDelayerBase.h
$O/networklayer/internetcloud/InternetCloudTaggerChannel.o: networklayer/internetcloud/InternetCloudTaggerChannel.cc \
  networklayer/internetcloud/InternetCloudTaggerChannel.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h
$O/networklayer/internetcloud/MatrixCloudDelayer.o: networklayer/internetcloud/MatrixCloudDelayer.cc \
  networklayer/internetcloud/MatrixCloudDelayer.h \
  util/PatternMatcher.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  util/XMLUtils.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/internetcloud/CloudDelayerBase.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/ErrorHandling.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/ICMP.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/ipv4/IGMPv2.o: networklayer/ipv4/IGMPv2.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IGMPv2.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv4/IGMPMessage_m.h
$O/networklayer/ipv4/IPv4.o: networklayer/ipv4/IPv4.cc \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/arp/ARPPacket_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/ByteArray.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  base/AbstractQueue.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/ipv4/IPv4FragBuf.o: networklayer/ipv4/IPv4FragBuf.cc \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h
$O/networklayer/ipv4/IPv4Route.o: networklayer/ipv4/IPv4Route.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h
$O/networklayer/ipv4/IPv4RouteRule.o: networklayer/ipv4/IPv4RouteRule.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/networklayer/ipv4/NetworkInfo.o: networklayer/ipv4/NetworkInfo.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotifierConsts.h \
  base/IScriptable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/NetworkInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv4/RoutingTableParser.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  util/opp_utils.h \
  base/LifecycleOperation.h \
  base/INETDefs.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv4/RoutingTableParser.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h
$O/networklayer/ipv4/RoutingTableRecorder.o: networklayer/ipv4/RoutingTableRecorder.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableRecorder.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
  base/ReassemblyBuffer.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  networklayer/common/IInterfaceTable.h \
  base/AbstractQueue.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/QueueBase.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/ipv6/IPv6FragBuf.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6ErrorHandling.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/ipv6/IPv6ExtensionHeaders.o: networklayer/ipv6/IPv6ExtensionHeaders.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
  base/ReassemblyBuffer.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ILifecycle.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6FragBuf.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INotifiable.h \
  base/INETDefs.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  util/opp_utils.h \
  base/LifecycleOperation.h \
  base/INETDefs.h
$O/networklayer/ipv6/_6lowpan/_6lowpan.o: networklayer/ipv6/_6lowpan/_6lowpan.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  transport/tcp_common/TCPSegment.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/procinit.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/autostart.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/energest.h \
  base/ByteArray_m.h \
  networklayer/common/InterfaceEntry.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/timer.h \
  transport/tcp_common/TCPSegment_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/rdc.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/contiki-default-conf.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/uipopt.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/packetbuf.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/rtimer.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/lc.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/stimer.h \
  networklayer/ipv6/_6lowpan/_6lowpanDatagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/uip.h \
  base/ILifecycle.h \
  base/ByteArray.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/uip-nd6.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/ctimer.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/lc-switch.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/ipv6/_6lowpan/_6lowpan.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/cc.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/pt.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/rime/rimeaddr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/loader.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/tcpip.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/rtimer-arch.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/etimer.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/clock.h \
  networklayer/contract/IPv6Address.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/queuebuf.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INotifiable.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/sicslowpan.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/contiki-version.h \
  transport/udp/UDPPacket_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/netstack.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/net/contract.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/framer.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/contiki.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/sys/process.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/uip-icmp6.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/ipv6tunneling/IPv6Tunneling.o: networklayer/ipv6tunneling/IPv6Tunneling.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/contract/IPv6Address.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6Access.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/xmipv6/xMIPv6Access.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ted/TEDAccess.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/ldp/LDP.h \
  networklayer/mpls/IClassifier.h \
  transport/contract/TCPSocketMap.h \
  transport/udp/UDPPacket.h \
  networklayer/ted/TED_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/mpls/ConstType.h \
  networklayer/mpls/LIBTable.h \
  networklayer/ldp/LDPPacket_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/ted/TED.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/rsvp_te/IntServ_m.h \
  transport/contract/UDPSocket.h
$O/networklayer/manetrouting/aodv/aodv_msg_struct.o: networklayer/manetrouting/aodv/aodv_msg_struct.cc \
  networklayer/manetrouting/base/compatibility.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/aodv/aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  util/FWMath.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv_uu_omnet.o: networklayer/manetrouting/aodv/aodv_uu_omnet.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/packet_queue_omnet.h \
  util/FWMath.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv_uu_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/packet_queue_omnet.o: networklayer/manetrouting/aodv/packet_queue_omnet.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/packet_queue_omnet.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv_uu_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_hello.o: networklayer/manetrouting/aodv/aodv-uu/aodv_hello.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.o: networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_socket.o: networklayer/manetrouting/aodv/aodv-uu/aodv_socket.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.o: networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/nl.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/debug_aodv.o: networklayer/manetrouting/aodv/aodv-uu/debug_aodv.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/list.o: networklayer/manetrouting/aodv/aodv-uu/list.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h
$O/networklayer/manetrouting/aodv/aodv-uu/locality.o: networklayer/manetrouting/aodv/aodv-uu/locality.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/routing_table.o: networklayer/manetrouting/aodv/aodv-uu/routing_table.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/nl.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/seek_list.o: networklayer/manetrouting/aodv/aodv-uu/seek_list.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.o: networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  base/Coord.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/base/ManetAddress.o: networklayer/manetrouting/base/ManetAddress.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/base/ManetRoutingBase.o: networklayer/manetrouting/base/ManetRoutingBase.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  base/PassiveQueueBase.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  base/ModuleAccess.h \
  mobility/models/MobilityAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  util/FWMath.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
  wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  base/Coord.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  util/GlobalWirelessLinkInspector.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  mobility/IMobility.h \
  networklayer/contract/IPv4ControlInfo.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/batman/BatmanMain.o: networklayer/manetrouting/batman/BatmanMain.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/batman/batmand/batman.o: networklayer/manetrouting/batman/batmand/batman.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/batman/batmand/bitarray.o: networklayer/manetrouting/batman/batmand/bitarray.cc \
  networklayer/manetrouting/base/compatibility.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/batman/batmand/hna.o: networklayer/manetrouting/batman/batmand/hna.cc \
  networklayer/manetrouting/base/compatibility.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/batman/batmand/originator.o: networklayer/manetrouting/batman/batmand/originator.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/batman/batmand/os.o: networklayer/manetrouting/batman/batmand/os.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/batman/batmand/ring_buffer.o: networklayer/manetrouting/batman/batmand/ring_buffer.cc \
  networklayer/manetrouting/base/compatibility.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/batman/batmand/schedule.o: networklayer/manetrouting/batman/batmand/schedule.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/dsdv/DSDV_2.o: networklayer/manetrouting/dsdv/DSDV_2.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsdv/DSDV_2.h \
  networklayer/manetrouting/dsdv/DSDVhello_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
  networklayer/ipv4/ICMP.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  linklayer/contract/MACAddress.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  wpan/linklayer/bmac/bmacpkt_m.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/neigh.o: networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/dev/radio.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/core/net/mac/mac.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  /home/hoferr/MasterThesis/Simulation/omnetpp/contiki/platform/omnetpp/contiki-conf.h
$O/networklayer/manetrouting/dymo/dymo_msg_struct.o: networklayer/manetrouting/dymo/dymo_msg_struct.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymo_um_omnet.o: networklayer/manetrouting/dymo/dymo_um_omnet.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  util/FWMath.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/blacklist.o: networklayer/manetrouting/dymo/dymoum/blacklist.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_re.o: networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/MeshControlInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/rtable.o: networklayer/manetrouting/dymo/dymoum/rtable.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/k_route.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h
$O/networklayer/manetrouting/dymo/dymoum/timer_queue.o: networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/dymo_fau/DYMO.o: networklayer/manetrouting/dymo_fau/DYMO.cc \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  util/FWMath.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  transport/contract/UDPSocket.h
$O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/INotifiable.h \
  base/INETDefs.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/AbstractQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/AbstractQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/INETDefs.h
$O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h
$O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h
$O/networklayer/manetrouting/olsr/OLSR.o: networklayer/manetrouting/olsr/OLSR.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/olsr/OLSROPT.o: networklayer/manetrouting/olsr/OLSROPT.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/olsr/OLSROPT.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/olsr/OLSR_ETX.o: networklayer/manetrouting/olsr/OLSR_ETX.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Coord.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_state.o: networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/olsr/OLSR_rtable.o: networklayer/manetrouting/olsr/OLSR_rtable.cc \
  networklayer/manetrouting/base/compatibility.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/olsr/OLSR_state.o: networklayer/manetrouting/olsr/OLSR_state.cc \
  networklayer/manetrouting/base/compatibility.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  util/opp_utils.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/PASER/IP_ADOPTED/IP_paser.o: networklayer/manetrouting/PASER/IP_ADOPTED/IP_paser.cc \
  networklayer/manetrouting/base/compatibility.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/arp/ARPPacket_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/ByteArray.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/PASER/IP_ADOPTED/IP_paser.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  base/AbstractQueue.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.o: networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/PASER/paser_socket/PASER_Socket.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.h \
  networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.h \
  world/radio/ChannelControl.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.h \
  base/INotifiable.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Entry.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.h \
  networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/PASER/paser_logic/PASER_Global.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.h \
  world/radio/IChannelControl.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.h
$O/networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.o: networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/PASER/paser_socket/PASER_Socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_logic/PASER_Global.o: networklayer/manetrouting/PASER/paser_logic/PASER_Global.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.h \
  world/radio/ChannelAccess.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/PASER/paser_socket/PASER_Socket.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/BasicModule.h \
  util/FWMath.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.h \
  networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.h \
  networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.h \
  base/Coord.h \
  base/INotifiable.h \
  networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.h \
  base/INETDefs.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/PASER/paser_logic/PASER_Global.h \
  world/radio/IChannelControl.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.h \
  networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.h
$O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.o: networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.h \
  base/INETDefs.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.h
$O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.o: networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/PASER/paser_logic/PASER_Global.h
$O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.o: networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.h \
  networklayer/manetrouting/PASER/paser_socket/PASER_Socket.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.h
$O/networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.o: networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.h \
  networklayer/manetrouting/PASER/paser_socket/PASER_Socket.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.h \
  networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.h \
  networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.h \
  base/INETDefs.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/PASER/paser_logic/PASER_Global.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.h \
  networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.h
$O/networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.o: networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.o: networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.h \
  networklayer/manetrouting/PASER/paser_socket/PASER_Socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/PASER/paser_logic/PASER_Global.h
$O/networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.o: networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/PASER/paser_socket/PASER_Socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/PASER/paser_logic/PASER_Global.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_socket/PASER_Socket.o: networklayer/manetrouting/PASER/paser_socket/PASER_Socket.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.h \
  linklayer/ieee80211mesh/locator/ILocator.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/PASER/paser_socket/PASER_Socket.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.h \
  networklayer/manetrouting/base/ManetAddress.h \
  util/FWMath.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.h \
  networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.h \
  world/radio/ChannelControl.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Entry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.h \
  base/INETDefs.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/PASER/paser_logic/PASER_Global.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMPMessage.h \
  world/radio/IChannelControl.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.h \
  networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.h
$O/networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.o: networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.o: networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.h \
  networklayer/manetrouting/PASER/paser_socket/PASER_Socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.o: networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Entry.o: networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Entry.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Entry.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.o: networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.h \
  networklayer/manetrouting/PASER/paser_socket/PASER_Socket.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.h \
  networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.h \
  networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Entry.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.h \
  networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.h \
  base/INETDefs.h \
  networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/PASER/paser_logic/PASER_Global.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.h \
  networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.h
$O/networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.o: networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.o: networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/PASER/simple_kdc/SimpleKDC.o: networklayer/manetrouting/PASER/simple_kdc/SimpleKDC.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/PASER/simple_kdc/SimpleKDC.h \
  networklayer/common/InterfaceToken.h \
  generic/RPSSocket.h \
  generic/Configuration.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.h \
  networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.h \
  transport/contract/UDPSocket.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4Route.h \
  util/XMLUtils.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/ConstType.h \
  networklayer/mpls/LIBTable.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ldp/LDP.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/mpls/IClassifier.h \
  transport/contract/TCPSocketMap.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/mpls/MPLSPacket.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/MPLS.h \
  networklayer/mpls/ConstType.h \
  networklayer/mpls/LIBTable.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/rsvp_te/Utils.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/rsvp_te/IntServ_m.h \
  transport/contract/UDPSocket.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
  networklayer/mpls/MPLSPacket.h \
  base/INETDefs.h
$O/networklayer/ospfv2/OSPFConfigReader.o: networklayer/ospfv2/OSPFConfigReader.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/PatternMatcher.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  util/XMLUtils.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFConfigReader.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/LifecycleOperation.h \
  networklayer/ospfv2/OSPFConfigReader.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/LSA.o: networklayer/ospfv2/router/LSA.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o: networklayer/ospfv2/router/OSPFRoutingTableEntry.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
  networklayer/rsvp_te/RSVPPathMsg.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ted/TEDAccess.h \
  base/ModuleAccess.h \
  base/IScriptable.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/mpls/IClassifier.h \
  util/XMLUtils.h \
  networklayer/ted/TED_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/rsvp_te/RSVPPacket.h \
  util/common.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/ConstType.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/mpls/LIBTable.h \
  networklayer/rsvp_te/Utils.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/ted/TED.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
  networklayer/rsvp_te/RSVPPathMsg.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/IScriptable.h \
  base/NotificationBoard.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/mpls/IClassifier.h \
  util/XMLUtils.h \
  base/INotifiable.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/ConstType.h \
  networklayer/rsvp_te/SimpleClassifier.h \
  networklayer/rsvp_te/RSVPAccess.h \
  networklayer/mpls/LIBTable.h \
  base/INETDefs.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv4Address.h \
  networklayer/rsvp_te/Utils.h \
  base/INETDefs.h \
  networklayer/rsvp_te/IntServ_m.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ted/TEDAccess.h \
  base/ModuleAccess.h \
  networklayer/ted/LinkStateRouting.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ted/LinkStatePacket_m.h \
  networklayer/ted/TED_m.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/ted/TED.h \
  networklayer/rsvp_te/IntServ_m.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ted/TED_m.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/ted/TED.h \
  networklayer/rsvp_te/IntServ_m.h
$O/networklayer/xmipv6/BindingCache.o: networklayer/xmipv6/BindingCache.cc \
  networklayer/xmipv6/BindingCache.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h
$O/networklayer/xmipv6/BindingUpdateList.o: networklayer/xmipv6/BindingUpdateList.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h
$O/networklayer/xmipv6/MobilityHeader.o: networklayer/xmipv6/MobilityHeader.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h
$O/networklayer/xmipv6/MobilityHeader_m.o: networklayer/xmipv6/MobilityHeader_m.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h
$O/networklayer/xmipv6/xMIPv6.o: networklayer/xmipv6/xMIPv6.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/xmipv6/BindingCache.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/xmipv6/BindingUpdateListAccess.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/contract/IPv6Address.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/xmipv6/BindingCacheAccess.h \
  networklayer/contract/IPv6ControlInfo.h
$O/status/NodeStatus.o: status/NodeStatus.cc \
  base/NodeOperations.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  base/INETDefs.h
$O/transport/contract/SCTPSocket.o: transport/contract/SCTPSocket.cc \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPSocket.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand_m.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocketMap.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/UDPControlInfo.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/rtp/RTCP.o: transport/rtp/RTCP.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTCPPacket3_m.h \
  transport/rtp/RTPReceiverInfo.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  transport/rtp/reports_m.h \
  base/ILifecycle.h \
  transport/rtp/RTCPPacket1.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/RTCP.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTCPPacket3.h \
  transport/rtp/RTCPPacket1_m.h \
  networklayer/contract/IPv6Address.h \
  transport/rtp/RTCPPacket2.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/sdes.h \
  status/NodeStatus.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/RTPPacket_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/rtp/reports.h \
  transport/contract/UDPSocket.h
$O/transport/rtp/RTCPPacket.o: transport/rtp/RTCPPacket.cc \
  transport/rtp/RTCPPacket3_m.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTCPPacket1.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/RTCPPacket3.h \
  transport/rtp/RTCPPacket1_m.h \
  transport/rtp/RTCPPacket2.h \
  transport/rtp/sdes.h \
  transport/rtp/RTCPPacket.h \
  base/INETDefs.h \
  transport/rtp/reports.h
$O/transport/rtp/RTCPPacket1_m.o: transport/rtp/RTCPPacket1_m.cc \
  transport/rtp/RTCPPacket1_m.h
$O/transport/rtp/RTCPPacket2_m.o: transport/rtp/RTCPPacket2_m.cc \
  transport/rtp/reports_m.h \
  transport/rtp/RTCPPacket1.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/RTCPPacket1_m.h \
  transport/rtp/sdes.h \
  base/INETDefs.h \
  transport/rtp/reports.h
$O/transport/rtp/RTCPPacket3_m.o: transport/rtp/RTCPPacket3_m.cc \
  transport/rtp/RTCPPacket3_m.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTCPPacket1.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/RTCPPacket1_m.h \
  transport/rtp/RTCPPacket2.h \
  transport/rtp/sdes.h \
  base/INETDefs.h \
  transport/rtp/reports.h
$O/transport/rtp/RTP.o: transport/rtp/RTP.cc \
  transport/rtp/RTPProfile.h \
  transport/rtp/RTPInterfacePacket_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4Route.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTP.h \
  transport/rtp/RTPInnerPacket_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/rtp/RTPInnerPacket.o: transport/rtp/RTPInnerPacket.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h
$O/transport/rtp/RTPInnerPacket_m.o: transport/rtp/RTPInnerPacket_m.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h
$O/transport/rtp/RTPInterfacePacket_m.o: transport/rtp/RTPInterfacePacket_m.cc \
  transport/rtp/RTPInterfacePacket_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/INETDefs.h
$O/transport/rtp/RTPPacket.o: transport/rtp/RTPPacket.cc \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h
$O/transport/rtp/RTPPacket_m.o: transport/rtp/RTPPacket_m.cc \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h
$O/transport/rtp/RTPParticipantInfo.o: transport/rtp/RTPParticipantInfo.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h \
  transport/rtp/reports.h
$O/transport/rtp/RTPParticipantInfo_m.o: transport/rtp/RTPParticipantInfo_m.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPParticipantInfo_m.h \
  base/INETDefs.h
$O/transport/rtp/RTPPayloadReceiver.o: transport/rtp/RTPPayloadReceiver.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h
$O/transport/rtp/RTPPayloadSender.o: transport/rtp/RTPPayloadSender.cc \
  transport/rtp/RTPInterfacePacket_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h \
  transport/rtp/RTPPayloadSender.h
$O/transport/rtp/RTPProfile.o: transport/rtp/RTPProfile.cc \
  transport/rtp/RTPProfile.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h \
  transport/rtp/RTPPayloadSender.h
$O/transport/rtp/RTPReceiverInfo.o: transport/rtp/RTPReceiverInfo.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPReceiverInfo.h \
  transport/rtp/reports_m.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h \
  transport/rtp/reports.h
$O/transport/rtp/RTPSenderControlMessage_m.o: transport/rtp/RTPSenderControlMessage_m.cc \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h
$O/transport/rtp/RTPSenderInfo.o: transport/rtp/RTPSenderInfo.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/reports_m.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h \
  transport/rtp/reports.h
$O/transport/rtp/RTPSenderStatusMessage_m.o: transport/rtp/RTPSenderStatusMessage_m.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/INETDefs.h
$O/transport/rtp/reports.o: transport/rtp/reports.cc \
  transport/rtp/reports_m.h \
  transport/rtp/reports.h
$O/transport/rtp/reports_m.o: transport/rtp/reports_m.cc \
  transport/rtp/reports_m.h
$O/transport/rtp/sdes.o: transport/rtp/sdes.cc \
  transport/rtp/sdes.h \
  base/INETDefs.h
$O/transport/rtp/profiles/avprofile/RTPAVProfile.o: transport/rtp/profiles/avprofile/RTPAVProfile.cc \
  transport/rtp/RTPProfile.h \
  transport/rtp/profiles/avprofile/RTPAVProfile.h \
  base/INETDefs.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h \
  base/INETDefs.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h \
  transport/rtp/RTPPayloadSender.h
$O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o: transport/rtp/profiles/avprofile/RTPMpegPacket_m.cc \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/transport/sctp/SCTP.o: transport/sctp/SCTP.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPAlg.o: transport/sctp/SCTPAlg.cc \
  transport/sctp/SCTPAlg.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPAssociationAddIP.o: transport/sctp/SCTPAssociationAddIP.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  util/common.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPAssociationBase.o: transport/sctp/SCTPAssociationBase.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPAssociationEventProc.o: transport/sctp/SCTPAssociationEventProc.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPAssociationRcvMessage.o: transport/sctp/SCTPAssociationRcvMessage.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  util/common.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPAssociationSendAll.o: transport/sctp/SCTPAssociationSendAll.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPAssociationStreamReset.o: transport/sctp/SCTPAssociationStreamReset.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPAssociationUtil.o: transport/sctp/SCTPAssociationUtil.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  util/common.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPCCFunctions.o: transport/sctp/SCTPCCFunctions.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPGapList.o: transport/sctp/SCTPGapList.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPMessage.o: transport/sctp/SCTPMessage.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPQueue.o: transport/sctp/SCTPQueue.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPReceiveStream.o: transport/sctp/SCTPReceiveStream.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPSSFunctions.o: transport/sctp/SCTPSSFunctions.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPSendStream.o: transport/sctp/SCTPSendStream.cc \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  base/NodeOperations.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/tcp/TCPReceiveQueue.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/queues/TCPByteStreamRcvQueue.h \
  linklayer/contract/MACAddress.h \
  base/ByteArrayBuffer.h \
  status/NodeStatus.h \
  transport/tcp/TCPSendQueue.h \
  networklayer/contract/IPv4ControlInfo.h \
  transport/tcp/queues/TCPByteStreamSendQueue.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp/TCPSendQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSendQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp/TCPSendQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/TCPConnectionSackUtil.o: transport/tcp/TCPConnectionSackUtil.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp/TCPSendQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp/TCPSendQueue.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/TCPSACKRexmitQueue.o: transport/tcp/TCPSACKRexmitQueue.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/DumbTCP.h \
  base/ILifecycle.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ILifecycle.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPNewReno.o: transport/tcp/flavours/TCPNewReno.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/flavours/TCPNewReno.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ILifecycle.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/TCPNoCongestionControl.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPReno.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ILifecycle.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o: transport/tcp/flavours/TCPSegmentTransmitInfoList.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ILifecycle.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/TCPTahoe.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPVegas.o: transport/tcp/flavours/TCPVegas.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/tcp/flavours/TCPVegas.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPConnection.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPWestwood.o: transport/tcp/flavours/TCPWestwood.cc \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPConnection.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/flavours/TCPWestwood.h
$O/transport/tcp/queues/TCPByteStreamRcvQueue.o: transport/tcp/queues/TCPByteStreamRcvQueue.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  base/ByteArrayMessage.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/queues/TCPByteStreamRcvQueue.h \
  base/ByteArrayMessage_m.h \
  transport/tcp/TCPConnection.h \
  base/INETDefs.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/queues/TCPByteStreamSendQueue.o: transport/tcp/queues/TCPByteStreamSendQueue.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  base/ByteArrayMessage.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArrayBuffer.h \
  base/ByteArrayMessage_m.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/queues/TCPByteStreamSendQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  base/ILifecycle.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPConnection.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/ILifecycle.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ILifecycle.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPConnection.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp_common/TCPSegment.o: transport/tcp_common/TCPSegment.cc \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  base/INETDefs.h
$O/transport/tcp_common/TCPSpoof.o: transport/tcp_common/TCPSpoof.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ByteArray.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  transport/tcp_common/TCPSpoof.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/contract/UDPControlInfo.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  transport/udp/UDP.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/icmpv6/ICMPv6Access.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h
$O/underTest/_4gsim/applications/diameter/DiameterApplication.o: underTest/_4gsim/applications/diameter/DiameterApplication.cc \
  underTest/_4gsim/applications/diameter/DiameterMessage.h \
  transport/contract/SCTPSocket.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/applications/diameter/DiameterApplication.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterSession.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  underTest/_4gsim/applications/diameter/DiameterBase.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/diameter/DiameterConnection.h \
  underTest/_4gsim/applications/diameter/DiameterPeer.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/underTest/_4gsim/applications/diameter/DiameterBase.o: underTest/_4gsim/applications/diameter/DiameterBase.cc \
  underTest/_4gsim/applications/diameter/DiameterMessage.h \
  transport/contract/SCTPSocket.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/applications/diameter/DiameterApplication.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterSession.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  underTest/_4gsim/applications/diameter/DiameterBase.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/diameter/DiameterConnection.h \
  underTest/_4gsim/applications/diameter/DiameterPeer.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/underTest/_4gsim/applications/diameter/DiameterConnection.o: underTest/_4gsim/applications/diameter/DiameterConnection.cc \
  underTest/_4gsim/applications/diameter/DiameterMessage.h \
  transport/contract/SCTPSocket.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/applications/diameter/DiameterApplication.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPMessage_m.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterSession.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  underTest/_4gsim/applications/diameter/DiameterBase.h \
  underTest/_4gsim/util/headerserializers/DiameterSerializer.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/diameter/DiameterConnection.h \
  transport/contract/SCTPCommand_m.h \
  underTest/_4gsim/applications/diameter/DiameterPeer.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h
$O/underTest/_4gsim/applications/diameter/DiameterMessage.o: underTest/_4gsim/applications/diameter/DiameterMessage.cc \
  underTest/_4gsim/applications/diameter/DiameterMessage.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/underTest/_4gsim/applications/diameter/DiameterPeer.o: underTest/_4gsim/applications/diameter/DiameterPeer.cc \
  underTest/_4gsim/applications/diameter/DiameterMessage.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPSocket.h \
  underTest/_4gsim/applications/diameter/DiameterApplication.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPMessage_m.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterSession.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  underTest/_4gsim/applications/diameter/DiameterBase.h \
  underTest/_4gsim/util/headerserializers/DiameterSerializer.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/diameter/DiameterConnection.h \
  underTest/_4gsim/applications/diameter/DiameterPeer.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h
$O/underTest/_4gsim/applications/diameter/DiameterSession.o: underTest/_4gsim/applications/diameter/DiameterSession.cc \
  underTest/_4gsim/applications/diameter/DiameterMessage.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPSocket.h \
  underTest/_4gsim/applications/diameter/DiameterApplication.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  underTest/_4gsim/applications/diameter/DiameterSession.h \
  underTest/_4gsim/applications/diameter/DiameterBase.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/diameter/DiameterConnection.h \
  underTest/_4gsim/applications/diameter/DiameterPeer.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h
$O/underTest/_4gsim/applications/diameter/DiameterUtils.o: underTest/_4gsim/applications/diameter/DiameterUtils.cc \
  underTest/_4gsim/applications/diameter/DiameterMessage.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPMessage_m.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  underTest/_4gsim/util/headerserializers/DiameterSerializer.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h
$O/underTest/_4gsim/applications/diameters6a/DiameterS6a.o: underTest/_4gsim/applications/diameters6a/DiameterS6a.cc \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/applications/diameter/DiameterMessage.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPSocket.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/applications/diameter/DiameterApplication.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  networklayer/contract/IPProtocolId_m.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  underTest/_4gsim/applications/diameter/DiameterSession.h \
  transport/contract/UDPControlInfo_m.h \
  underTest/_4gsim/applications/diameter/DiameterBase.h \
  base/NotifierConsts.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/applications/diameters6a/DiameterS6a.h \
  underTest/_4gsim/util/subscriber/SubscriberTableAccess.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/diameter/DiameterConnection.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  base/INotifiable.h \
  underTest/_4gsim/applications/diameter/DiameterPeer.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/applications/nas/EMMEntity.o: underTest/_4gsim/applications/nas/EMMEntity.cc \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4RouteRule.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  networklayer/contract/IPProtocolId_m.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  underTest/_4gsim/applications/nas/NASUtils.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/_4gsim/util/subscriber/SubscriberTableAccess.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  underTest/_4gsim/util/headerserializers/NASSerializer.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/NAS.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/applications/nas/ESMEntity.o: underTest/_4gsim/applications/nas/ESMEntity.cc \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/applications/diameter/DiameterApplication.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4RouteRule.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  networklayer/contract/IPProtocolId_m.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  underTest/_4gsim/applications/nas/NASUtils.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/util/subscriber/SubscriberTableAccess.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  underTest/_4gsim/util/headerserializers/NASSerializer.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/NAS.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/applications/nas/NAS.o: underTest/_4gsim/applications/nas/NAS.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  underTest/_4gsim/applications/s1ap/S1APControlInfo_m.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/contract/IPProtocolId_m.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  underTest/_4gsim/applications/nas/NASUtils.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/_4gsim/util/subscriber/SubscriberTableAccess.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  underTest/_4gsim/applications/s1ap/message/S1APConstant.h \
  networklayer/ipv4/IRoutingTable.h \
  underTest/_4gsim/util/headerserializers/NASSerializer.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/NAS.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/applications/nas/NASUtils.o: underTest/_4gsim/applications/nas/NASUtils.cc \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  underTest/_4gsim/applications/nas/NASUtils.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/util/headerserializers/NASSerializer.h
$O/underTest/_4gsim/applications/s1ap/S1AP.o: underTest/_4gsim/applications/s1ap/S1AP.cc \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  transport/contract/SCTPSocket.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  networklayer/ipv4/RoutingTableAccess.h \
  underTest/_4gsim/applications/s1ap/S1APControlInfo_m.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  networklayer/ipv4/IPv4RouteRule.h \
  underTest/_4gsim/util/asn/ASNTypes.h \
  networklayer/contract/IPProtocolId_m.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  underTest/_4gsim/applications/s1ap/S1APConnection.h \
  underTest/_4gsim/applications/s1ap/S1AP.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/util/subscriber/SubscriberTableAccess.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  underTest/_4gsim/applications/s1ap/message/S1APPdu.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/util/asn/PerEncoder.h \
  transport/contract/SCTPCommand_m.h \
  underTest/_4gsim/applications/s1ap/S1APUtils.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  base/INotifiable.h \
  underTest/_4gsim/util/asn/PerDecoder.h \
  underTest/_4gsim/applications/s1ap/message/S1APConstant.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  underTest/_4gsim/applications/s1ap/message/S1APContainer.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  underTest/_4gsim/applications/s1ap/message/S1APIe.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/applications/s1ap/S1APConnection.o: underTest/_4gsim/applications/s1ap/S1APConnection.cc \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  transport/contract/SCTPSocket.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  underTest/_4gsim/applications/s1ap/S1APControlInfo_m.h \
  networklayer/ipv4/IPv4RouteRule.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/asn/ASNTypes.h \
  networklayer/contract/IPProtocolId_m.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  transport/sctp/SCTPMessage_m.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  underTest/_4gsim/applications/s1ap/S1AP.h \
  underTest/_4gsim/applications/s1ap/S1APConnection.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/util/subscriber/SubscriberTableAccess.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  underTest/_4gsim/applications/s1ap/message/S1APPdu.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/util/asn/PerEncoder.h \
  transport/contract/SCTPCommand_m.h \
  underTest/_4gsim/applications/s1ap/S1APUtils.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  base/INotifiable.h \
  underTest/_4gsim/util/asn/PerDecoder.h \
  underTest/_4gsim/applications/s1ap/message/S1APConstant.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  transport/contract/SCTPCommand.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  underTest/_4gsim/applications/s1ap/message/S1APContainer.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/s1ap/message/S1APIe.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/applications/s1ap/S1APUtils.o: underTest/_4gsim/applications/s1ap/S1APUtils.cc \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  underTest/_4gsim/applications/s1ap/S1APUtils.h
$O/underTest/_4gsim/applications/s1ap/message/S1APContainer.o: underTest/_4gsim/applications/s1ap/message/S1APContainer.cc \
  underTest/_4gsim/util/asn/ASNTypes.h \
  underTest/_4gsim/util/asn/PerEncoder.h \
  underTest/_4gsim/util/asn/PerDecoder.h \
  underTest/_4gsim/applications/s1ap/message/S1APConstant.h \
  underTest/_4gsim/applications/s1ap/message/S1APContainer.h
$O/underTest/_4gsim/applications/s1ap/message/S1APIe.o: underTest/_4gsim/applications/s1ap/message/S1APIe.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/applications/s1ap/S1APControlInfo_m.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/asn/ASNTypes.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  transport/contract/UDPControlInfo_m.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  underTest/_4gsim/applications/s1ap/message/S1APPdu.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/s1ap/S1APUtils.h \
  underTest/_4gsim/util/asn/PerDecoder.h \
  underTest/_4gsim/applications/s1ap/message/S1APConstant.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/s1ap/message/S1APContainer.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/s1ap/message/S1APIe.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/applications/s1ap/message/S1APPdu.o: underTest/_4gsim/applications/s1ap/message/S1APPdu.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/applications/s1ap/S1APControlInfo_m.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/asn/ASNTypes.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  transport/contract/UDPControlInfo_m.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  underTest/_4gsim/applications/s1ap/message/S1APPdu.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/util/asn/PerEncoder.h \
  underTest/_4gsim/applications/s1ap/S1APUtils.h \
  underTest/_4gsim/util/asn/PerDecoder.h \
  underTest/_4gsim/applications/s1ap/message/S1APConstant.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/s1ap/message/S1APContainer.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/s1ap/message/S1APIe.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/linklayer/lte/LTERadio.o: underTest/_4gsim/linklayer/lte/LTERadio.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  ./world/obstacles/Obstacle.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  world/obstacles/ObstacleControl.h \
  linklayer/contract/PhyControlInfo_m.h \
  util/FWMath.h \
  base/BasicModule.h \
  linklayer/radio/IRadioModel.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  underTest/_4gsim/linklayer/lte/LTERadio.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  linklayer/radio/AirFrame_m.h \
  base/INotifiable.h \
  ./world/annotations/AnnotationManager.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  world/radio/IChannelControl.h \
  linklayer/radio/SnrList.h
$O/underTest/_4gsim/linklayer/lte/LTERadioModel.o: underTest/_4gsim/linklayer/lte/LTERadioModel.cc \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/radio/IModulation.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/Modulation.h \
  base/Coord.h \
  linklayer/radio/AirFrame_m.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  underTest/_4gsim/linklayer/lte/LTERadioModel.h \
  linklayer/radio/SnrList.h
$O/underTest/_4gsim/networklayer/gtp/GTP.o: underTest/_4gsim/networklayer/gtp/GTP.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTableAccess.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTableAccess.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/networklayer/gtp/GTPControl.o: underTest/_4gsim/networklayer/gtp/GTPControl.cc \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/util/gateway/GatewayTableAccess.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/gateway/GatewayTable.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/util/subscriber/SubscriberTableAccess.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  base/INotifiable.h \
  underTest/_4gsim/networklayer/gtp/GTPControl.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  underTest/_4gsim/networklayer/gtp/GTPUtils.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  underTest/_4gsim/util/gateway/Gateway.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/networklayer/gtp/GTPMessage.o: underTest/_4gsim/networklayer/gtp/GTPMessage.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  base/INETDefs.h
$O/underTest/_4gsim/networklayer/gtp/GTPUser.o: underTest/_4gsim/networklayer/gtp/GTPUser.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTableAccess.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  underTest/_4gsim/networklayer/gtp/GTPUser.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTableAccess.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/networklayer/gtp/GTPUtils.o: underTest/_4gsim/networklayer/gtp/GTPUtils.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  underTest/_4gsim/util/headerserializers/GTPSerializer.h \
  underTest/_4gsim/networklayer/gtp/GTPUtils.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/networklayer/gtp/path/GTPPath.o: underTest/_4gsim/networklayer/gtp/path/GTPPath.cc \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/gateway/GatewayTable.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  base/INotifiable.h \
  underTest/_4gsim/networklayer/gtp/GTPControl.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  underTest/_4gsim/networklayer/gtp/GTPUtils.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  underTest/_4gsim/util/gateway/Gateway.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/networklayer/gtp/path/GTPPathTable.o: underTest/_4gsim/networklayer/gtp/path/GTPPathTable.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.o: underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.cc \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/gateway/GatewayTable.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  base/INotifiable.h \
  underTest/_4gsim/networklayer/gtp/GTPUser.h \
  underTest/_4gsim/networklayer/gtp/GTPControl.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  underTest/_4gsim/networklayer/gtp/GTPUtils.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  underTest/_4gsim/util/gateway/Gateway.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.o: underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  transport/contract/UDPControlInfo_m.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/util/DCTDump.o: underTest/_4gsim/util/DCTDump.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  underTest/_4gsim/util/DCTDump.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/PacketDump.h \
  util/PcapDump.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/TCPDump.h
$O/underTest/_4gsim/util/asn/ASNTypes.o: underTest/_4gsim/util/asn/ASNTypes.cc \
  underTest/_4gsim/util/asn/ASNTypes.h \
  underTest/_4gsim/util/asn/PerEncoder.h \
  underTest/_4gsim/util/asn/PerDecoder.h
$O/underTest/_4gsim/util/asn/PerDecoder.o: underTest/_4gsim/util/asn/PerDecoder.cc \
  underTest/_4gsim/util/asn/ASNTypes.h \
  underTest/_4gsim/util/asn/PerDecoder.h
$O/underTest/_4gsim/util/asn/PerEncoder.o: underTest/_4gsim/util/asn/PerEncoder.cc \
  underTest/_4gsim/util/asn/ASNTypes.h \
  underTest/_4gsim/util/asn/PerEncoder.h
$O/underTest/_4gsim/util/gateway/Gateway.o: underTest/_4gsim/util/gateway/Gateway.cc \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/util/gateway/Gateway.h
$O/underTest/_4gsim/util/gateway/GatewayTable.o: underTest/_4gsim/util/gateway/GatewayTable.cc \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  underTest/_4gsim/util/gateway/GatewayTable.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/util/gateway/Gateway.h
$O/underTest/_4gsim/util/headerserializers/DiameterSerializer.o: underTest/_4gsim/util/headerserializers/DiameterSerializer.cc \
  underTest/_4gsim/applications/diameter/DiameterMessage.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPMessage_m.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  underTest/_4gsim/util/headerserializers/DiameterSerializer.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h
$O/underTest/_4gsim/util/headerserializers/GTPSerializer.o: underTest/_4gsim/util/headerserializers/GTPSerializer.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  underTest/_4gsim/networklayer/gtp/GTPUtils.h \
  underTest/_4gsim/util/headerserializers/GTPSerializer.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/util/headerserializers/NASSerializer.o: underTest/_4gsim/util/headerserializers/NASSerializer.cc \
  underTest/_4gsim/applications/nas/NASUtils.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/util/headerserializers/NASSerializer.h
$O/underTest/_4gsim/util/subscriber/BearerContext.o: underTest/_4gsim/util/subscriber/BearerContext.cc \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  networklayer/common/InterfaceEntry.h \
  underTest/_4gsim/applications/s1ap/S1APControlInfo_m.h \
  networklayer/ipv4/IPv4RouteRule.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/asn/ASNTypes.h \
  networklayer/contract/IPProtocolId_m.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  networklayer/ipv4/IPv4Route.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/util/subscriber/SubscriberTableAccess.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  underTest/_4gsim/applications/s1ap/S1APUtils.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  underTest/_4gsim/util/asn/PerDecoder.h \
  underTest/_4gsim/applications/s1ap/message/S1APConstant.h \
  networklayer/ipv4/IRoutingTable.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  underTest/_4gsim/util/headerserializers/GTPSerializer.h \
  underTest/_4gsim/networklayer/gtp/GTPUtils.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/NAS.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  underTest/_4gsim/applications/s1ap/message/S1APContainer.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  underTest/_4gsim/applications/s1ap/message/S1APIe.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/util/subscriber/LTEUtils.o: underTest/_4gsim/util/subscriber/LTEUtils.cc \
  underTest/_4gsim/util/subscriber/LTEUtils.h
$O/underTest/_4gsim/util/subscriber/PDNConnection.o: underTest/_4gsim/util/subscriber/PDNConnection.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/applications/diameter/DiameterApplication.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  base/NotificationBoard.h \
  underTest/_4gsim/applications/nas/NASUtils.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  base/INotifiable.h \
  underTest/_4gsim/util/headerserializers/NASSerializer.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  underTest/_4gsim/networklayer/gtp/GTPUtils.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/util/subscriber/Subscriber.o: underTest/_4gsim/util/subscriber/Subscriber.cc \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpointTable.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  base/INotifiable.h \
  underTest/_4gsim/networklayer/gtp/GTP.h \
  underTest/_4gsim/networklayer/gtp/GTPUtils.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPathTable.h \
  transport/contract/UDPSocket.h
$O/underTest/_4gsim/util/subscriber/SubscriberTable.o: underTest/_4gsim/util/subscriber/SubscriberTable.cc \
  underTest/_4gsim/util/subscriber/SubscriberTable.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  underTest/_4gsim/util/subscriber/Subscriber.h \
  underTest/_4gsim/util/subscriber/LTEUtils.h \
  underTest/_4gsim/networklayer/gtp/path/GTPPath.h \
  underTest/_4gsim/util/subscriber/BearerContext.h \
  base/ModuleAccess.h \
  underTest/_4gsim/applications/diameter/DiameterMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  underTest/_4gsim/util/subscriber/PDNConnection.h \
  base/NotificationBoard.h \
  underTest/_4gsim/networklayer/gtp/tunnel/TunnelEndpoint.h \
  underTest/_4gsim/applications/nas/NASMessage_m.h \
  underTest/_4gsim/networklayer/gtp/GTPMessage.h \
  networklayer/contract/IPv6Address.h \
  underTest/_4gsim/applications/nas/EMMEntity.h \
  base/INotifiable.h \
  base/INETDefs.h \
  underTest/_4gsim/applications/nas/ESMEntity.h \
  networklayer/contract/IPvXAddress.h \
  underTest/_4gsim/applications/diameter/DiameterUtils.h \
  transport/contract/UDPSocket.h
$O/underTest/hip/application/DNSBase.o: underTest/hip/application/DNSBase.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  underTest/hip/application/DNSRegRvsMsg_m.h \
  underTest/hip/application/DNSBaseMsg_m.h \
  underTest/hip/application/DNSBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/underTest/hip/application/DNSClient.o: underTest/hip/application/DNSClient.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  underTest/hip/application/DNSBaseMsg_m.h \
  underTest/hip/application/DNSClient.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/underTest/hip/application/UDPEchoStream.o: underTest/hip/application/UDPEchoStream.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/UDPControlInfo_m.h \
  applications/udpapp/UDPEchoAppMsg_m.h \
  networklayer/contract/IPv6Address.h \
  underTest/hip/application/UDPEchoStream.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/underTest/hip/base/HIP.o: underTest/hip/base/HIP.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv6/IPv6Datagram.h \
  underTest/hip/application/DNSRegRvsMsg_m.h \
  networklayer/contract/IPProtocolId_m.h \
  underTest/hip/application/DNSBaseMsg_m.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  underTest/hip/base/HipMessages_m.h \
  underTest/hip/base/HIP.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h
$O/underTest/hip/base/HipFsm.o: underTest/hip/base/HipFsm.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  underTest/hip/base/HipFsmBase.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  underTest/hip/base/HIP.h \
  underTest/hip/base/HipMessages_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  underTest/hip/base/HipFsm.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h
$O/underTest/hip/base/HipFsmBase.o: underTest/hip/base/HipFsmBase.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  underTest/hip/base/HipFsmBase.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  underTest/hip/base/HipMessages_m.h \
  underTest/hip/base/HIP.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv6ControlInfo.h
$O/underTest/hip/base/RvsHIP.o: underTest/hip/base/RvsHIP.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotifierConsts.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  underTest/hip/base/HIP.h \
  underTest/hip/base/HipMessages_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  underTest/hip/base/RvsHIP.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h
$O/underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211AgentSTAExtended.o: underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211AgentSTAExtended.cc \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/ModuleAccess.h \
  underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211AgentSTAExtended.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h
$O/underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtAPExtended.o: underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtAPExtended.cc \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv4/IPv4.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtAPExtended.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/QueueBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h
$O/underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtBaseExtended.o: underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtBaseExtended.cc \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtBaseExtended.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h
$O/underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtSTAExtended.o: underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtSTAExtended.cc \
  networklayer/common/InterfaceEntry.h \
  world/radio/ChannelAccess.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/contract/PhyControlInfo_m.h \
  util/FWMath.h \
  base/BasicModule.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  base/IPassiveQueue.h \
  world/radio/ChannelControl.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtSTAExtended.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  world/radio/IChannelControl.h
$O/underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtWDSExtended.o: underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtWDSExtended.cc \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv4/IPv4.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/ICMP.h \
  underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtBaseExtended.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  underTest/Ieee80211/linklayer/ieee80211/mgmt/Ieee80211MgmtWDSExtended.h \
  base/ProtocolMap.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h
$O/underTest/wimax/applications/TrafficGenerator_Erlangen/WiMAXQoSTrafficGenerator.o: underTest/wimax/applications/TrafficGenerator_Erlangen/WiMAXQoSTrafficGenerator.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  applications/trafgen/TrafGen.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/INETDefs.h \
  underTest/wimax/applications/TrafficGenerator_Erlangen/WiMAXQoSTrafficGenerator.h \
  networklayer/ipv4/IPv4Datagram.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneAP.o: underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneAP.cc \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneAP.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.o: underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.cc \
  ./world/obstacles/Obstacle.h \
  linklayer/radio/Radio.h \
  underTest/wimax/linklayer/radio/Ieee80216Radio.h \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/wimax/linklayer/radio/WiMAXPathLossReceptionModel.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  world/obstacles/ObstacleControl.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.h \
  util/FWMath.h \
  base/BasicModule.h \
  linklayer/radio/IRadioModel.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/radio/Ieee80216Consts.h \
  base/Coord.h \
  linklayer/radio/AirFrame_m.h \
  base/INotifiable.h \
  ./world/annotations/AnnotationManager.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/radio/INoiseGenerator.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  world/radio/IChannelControl.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/radio/SnrList.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h
$O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseAP.o: underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseAP.cc \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneAP.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseAP.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseMS.o: underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseMS.cc
$O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.o: underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.cc \
  ./world/obstacles/Obstacle.h \
  linklayer/radio/Radio.h \
  networklayer/common/InterfaceEntry.h \
  underTest/wimax/linklayer/radio/Ieee80216Radio.h \
  world/radio/ChannelAccess.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  base/ModuleAccess.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/wimax/linklayer/radio/WiMAXPathLossReceptionModel.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.h \
  world/obstacles/ObstacleControl.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  underTest/wimax/linklayer/radio/Ieee80216Consts.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/radio/AirFrame_m.h \
  ./world/annotations/AnnotationManager.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/FSMA.h \
  linklayer/radio/INoiseGenerator.h \
  linklayer/radio/propagation/IReceptionModel.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ModulationsConsts.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  world/radio/IChannelControl.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneMS.o: underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneMS.cc \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneMS.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneMobilestation.o: underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneMobilestation.cc \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ModulationsConsts.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/Mac/CommonPartSublayerDown.o: underTest/wimax/linklayer/Ieee80216/Mac/CommonPartSublayerDown.cc \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/CommonPartSublayerDown.h \
  underTest/wimax/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h
$O/underTest/wimax/linklayer/Ieee80216/Mac/CommonPartSublayerUp.o: underTest/wimax/linklayer/Ieee80216/Mac/CommonPartSublayerUp.cc \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/Mac/CommonPartSublayerUp.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h
$O/underTest/wimax/linklayer/Ieee80216/Mac/ConvergenceSublayerDown.o: underTest/wimax/linklayer/Ieee80216/Mac/ConvergenceSublayerDown.cc \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/Mac/ConvergenceSublayerDown.h \
  base/INETDefs.h
$O/underTest/wimax/linklayer/Ieee80216/Mac/ConvergenceSublayerUp.o: underTest/wimax/linklayer/Ieee80216/Mac/ConvergenceSublayerUp.cc \
  linklayer/contract/PhyControlInfo_m.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/ConvergenceSublayerUp.h
$O/underTest/wimax/linklayer/Ieee80216/Mac/SecuritySublayerDown.o: underTest/wimax/linklayer/Ieee80216/Mac/SecuritySublayerDown.cc \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/Mac/SecuritySublayerDown.h \
  base/INETDefs.h
$O/underTest/wimax/linklayer/Ieee80216/Mac/SecuritySublayerUp.o: underTest/wimax/linklayer/Ieee80216/Mac/SecuritySublayerUp.cc \
  underTest/wimax/linklayer/Ieee80216/Mac/SecuritySublayerUp.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/INETDefs.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerAuthorizationModule.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerAuthorizationModule.cc \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerAuthorizationModule.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/INETDefs.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerControlModule.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerControlModule.cc \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerControlModule.h \
  base/INETDefs.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerFragmentation.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerFragmentation.cc \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerFragmentation.h \
  base/INETDefs.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerQoSAP.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerQoSAP.cc \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerQoSAP.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.cc \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.cc \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.cc \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerControlModule.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerControlModule.cc \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4RouteRule.h \
  networklayer/ipv4/IPv4.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerControlModule.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  base/AbstractQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerHeaderCompression.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerHeaderCompression.cc \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerHeaderCompression.h \
  base/INETDefs.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerTrafficClassification.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerTrafficClassification.cc \
  base/ReassemblyBuffer.h \
  ./world/obstacles/Obstacle.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.h \
  networklayer/contract/IPv4Address.h \
  linklayer/radio/Radio.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4RouteRule.h \
  underTest/wimax/linklayer/radio/Ieee80216Radio.h \
  world/radio/ChannelAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  base/ModuleAccess.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/wimax/linklayer/radio/WiMAXPathLossReceptionModel.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.h \
  base/NotificationBoard.h \
  world/obstacles/ObstacleControl.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneMobilestation.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  networklayer/ipv4/ICMP.h \
  linklayer/radio/IRadioModel.h \
  networklayer/contract/IPv6Address.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.h \
  base/AbstractQueue.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  world/radio/ChannelControl.h \
  underTest/wimax/linklayer/radio/Ieee80216Consts.h \
  base/Coord.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerTrafficClassification.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/radio/AirFrame_m.h \
  ./world/annotations/AnnotationManager.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  linklayer/radio/INoiseGenerator.h \
  base/FSMA.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/ProtocolMap.h \
  linklayer/radio/ModulationType.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  world/radio/IChannelControl.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.cc \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/ConvergenceSublayerReceiver.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/ConvergenceSublayerReceiver.cc \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/ConvergenceSublayerReceiver.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/INETDefs.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/SecuritySublayerReceiver.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/SecuritySublayerReceiver.cc \
  linklayer/contract/PhyControlInfo_m.h \
  base/INETDefs.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/SecuritySublayerReceiver.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/CommonPartSublayerTransceiver.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/CommonPartSublayerTransceiver.cc \
  ./world/obstacles/Obstacle.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.h \
  linklayer/radio/Radio.h \
  networklayer/common/InterfaceEntry.h \
  underTest/wimax/linklayer/radio/Ieee80216Radio.h \
  world/radio/ChannelAccess.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  base/ModuleAccess.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/wimax/linklayer/radio/WiMAXPathLossReceptionModel.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.h \
  base/NotificationBoard.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.h \
  world/obstacles/ObstacleControl.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneMobilestation.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.h \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  world/radio/ChannelControl.h \
  underTest/wimax/linklayer/radio/Ieee80216Consts.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/radio/AirFrame_m.h \
  ./world/annotations/AnnotationManager.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  base/FSMA.h \
  linklayer/radio/INoiseGenerator.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  world/radio/IChannelControl.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/CommonPartSublayerTransceiver.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  underTest/wimax/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/ConvergenceSublayerTransceiver.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/ConvergenceSublayerTransceiver.cc \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/ConvergenceSublayerTransceiver.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/INETDefs.h
$O/underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/SecuritySublayerTransceiver.o: underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/SecuritySublayerTransceiver.cc \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/wimax/linklayer/Ieee80216/MACSublayer/Transceiver/SecuritySublayerTransceiver.h \
  base/INETDefs.h
$O/underTest/wimax/linklayer/Ieee80216/phyLayer/decider/Decider80216.o: underTest/wimax/linklayer/Ieee80216/phyLayer/decider/Decider80216.cc \
  underTest/wimax/linklayer/Ieee80216/phyLayer/decider/Decider80216.h \
  underTest/wimax/linklayer/Ieee80216/phyLayer/SnrControlInfo_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  linklayer/radio/AirFrame_m.h \
  base/INotifiable.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/radio/Ieee80216Radio.o: underTest/wimax/linklayer/radio/Ieee80216Radio.cc \
  ./world/obstacles/Obstacle.h \
  linklayer/radio/Radio.h \
  underTest/wimax/linklayer/radio/Ieee80216Radio.h \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  underTest/wimax/linklayer/radio/WiMAXPathLossReceptionModel.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  world/obstacles/ObstacleControl.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/contract/MACAddress.h \
  underTest/wimax/linklayer/radio/Ieee80216Consts.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/radio/AirFrame_m.h \
  ./world/annotations/AnnotationManager.h \
  linklayer/radio/INoiseGenerator.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  world/radio/IChannelControl.h \
  underTest/wimax/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/radio/Ieee80216RadioModel.o: underTest/wimax/linklayer/radio/Ieee80216RadioModel.cc \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/PhyControlInfo_m.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  base/Coord.h \
  linklayer/radio/AirFrame_m.h \
  underTest/wimax/linklayer/radio/Ieee80216RadioModel.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/SnrList.h
$O/underTest/wimax/linklayer/radio/WiMAXPathLossReceptionModel.o: underTest/wimax/linklayer/radio/WiMAXPathLossReceptionModel.cc \
  underTest/wimax/linklayer/radio/WiMAXPathLossReceptionModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/INETDefs.h
$O/util/Delayer.o: util/Delayer.cc \
  util/Delayer.h \
  base/INETDefs.h
$O/util/GlobalWirelessLinkInspector.o: util/GlobalWirelessLinkInspector.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  util/GlobalWirelessLinkInspector.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/util/Macho.o: util/Macho.cc \
  util/Macho.h
$O/util/MessageChecker.o: util/MessageChecker.cc \
  util/MessageChecker.h \
  base/INETDefs.h
$O/util/NetAnimTrace.o: util/NetAnimTrace.cc \
  util/NetAnimTrace.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/util/OrdinalBasedDropper.o: util/OrdinalBasedDropper.cc \
  util/OrdinalBasedDropper.h \
  base/INETDefs.h
$O/util/OrdinalBasedDuplicator.o: util/OrdinalBasedDuplicator.cc \
  util/OrdinalBasedDuplicator.h \
  base/INETDefs.h
$O/util/PacketDump.o: util/PacketDump.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  base/ByteArray.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  util/PacketDump.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPMessage.h \
  transport/contract/UDPSocket.h
$O/util/PatternMatcher.o: util/PatternMatcher.cc \
  util/PatternMatcher.h \
  base/INETDefs.h
$O/util/PcapDump.o: util/PcapDump.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  transport/udp/UDPPacket_m.h \
  util/PcapDump.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h
$O/util/PcapRecorder.o: util/PcapRecorder.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/PacketDump.h \
  util/PcapRecorder.h \
  util/PcapDump.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h
$O/util/TCPDump.o: util/TCPDump.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/PacketDump.h \
  util/PcapDump.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/TCPDump.h
$O/util/ThruputMeter.o: util/ThruputMeter.cc \
  util/ThruputMeter.h \
  base/INETDefs.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc \
  util/ThruputMeteringChannel.h \
  base/INETDefs.h
$O/util/WirelessGetNeig.o: util/WirelessGetNeig.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  util/WirelessGetNeig.h \
  base/ModuleAccess.h \
  mobility/models/MobilityAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  util/FWMath.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/util/WirelessNumHops.o: util/WirelessNumHops.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ModuleAccess.h \
  mobility/models/MobilityAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  util/FWMath.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  util/WirelessNumHops.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/util/XMLUtils.o: util/XMLUtils.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  util/XMLUtils.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/util/common.o: util/common.cc \
  util/common.h \
  base/INETDefs.h
$O/util/dijktraKShortest.o: util/dijktraKShortest.cc \
  util/uint128.h \
  base/INETDefs.h \
  util/dijktraKShortest.h
$O/util/int128.o: util/int128.cc \
  util/int128.h \
  base/INETDefs.h
$O/util/opp_utils.o: util/opp_utils.cc \
  util/opp_utils.h \
  base/INETDefs.h
$O/util/uint128.o: util/uint128.cc \
  util/uint128.h \
  base/INETDefs.h
$O/util/headerserializers/TCPIPchecksum.o: util/headerserializers/TCPIPchecksum.cc \
  util/headerserializers/TCPIPchecksum.h \
  base/INETDefs.h
$O/util/headerserializers/ipv4/ICMPSerializer.o: util/headerserializers/ipv4/ICMPSerializer.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/ipv4/ICMPSerializer.h \
  util/headerserializers/ipv4/headers/ip_icmp.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/ipv4/headers/ip.h \
  applications/pingapp/PingPayload_m.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/TCPIPchecksum.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/headerserializers/headers/in.h
$O/util/headerserializers/ipv4/IGMPSerializer.o: util/headerserializers/ipv4/IGMPSerializer.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/ipv4/headers/igmp.h \
  util/headerserializers/ipv4/headers/ip.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/TCPIPchecksum.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/ipv4/IGMPMessage_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/headerserializers/headers/in.h \
  util/headerserializers/ipv4/IGMPSerializer.h
$O/util/headerserializers/ipv4/IPv4Serializer.o: util/headerserializers/ipv4/IPv4Serializer.cc \
  transport/tcp_common/TCPSegment.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/ipv4/ICMPSerializer.h \
  util/headerserializers/tcp/TCPSerializer.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/udp/UDPSerializer.h \
  transport/sctp/SCTPMessage.h \
  util/headerserializers/tcp/headers/tcp.h \
  util/headerserializers/ipv4/headers/ip.h \
  base/ByteArray.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/TCPIPchecksum.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPv6Address.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/ipv4/IGMPMessage_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/headerserializers/headers/in.h \
  util/headerserializers/ipv4/IGMPSerializer.h
$O/util/headerserializers/sctp/SCTPSerializer.o: util/headerserializers/sctp/SCTPSerializer.cc \
  util/headerserializers/sctp/SCTPSerializer.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/defs.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPReceiveStream.h \
  util/headerserializers/sctp/headers/sctp.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/headerserializers/headers/in.h \
  transport/contract/UDPSocket.h
$O/util/headerserializers/tcp/TCPSerializer.o: util/headerserializers/tcp/TCPSerializer.cc \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/tcp/TCPSerializer.h \
  util/headerserializers/tcp/headers/tcp.h \
  base/ByteArray.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/TCPIPchecksum.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/contract/IPvXAddress.h \
  util/headerserializers/headers/in.h
$O/util/headerserializers/udp/UDPSerializer.o: util/headerserializers/udp/UDPSerializer.cc \
  base/ByteArray_m.h \
  base/ByteArrayMessage.h \
  util/headerserializers/udp/UDPSerializer.h \
  base/ByteArray.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/udp/headers/udp.h \
  util/headerserializers/TCPIPchecksum.h \
  transport/udp/UDPPacket.h \
  base/ByteArrayMessage_m.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/in.h
$O/world/annotations/AnnotationDummy.o: world/annotations/AnnotationDummy.cc \
  ./world/annotations/AnnotationDummy.h \
  base/INETDefs.h
$O/world/annotations/AnnotationManager.o: world/annotations/AnnotationManager.cc \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  ./world/annotations/AnnotationManager.h \
  base/INETDefs.h
$O/world/httptools/HttpController.o: world/httptools/HttpController.cc \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpLogdefs.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  base/INETDefs.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h
$O/world/obstacles/Obstacle.o: world/obstacles/Obstacle.cc \
  ./world/obstacles/Obstacle.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  ./world/annotations/AnnotationManager.h \
  base/INETDefs.h
$O/world/obstacles/ObstacleControl.o: world/obstacles/ObstacleControl.cc \
  ./world/obstacles/Obstacle.h \
  ./world/obstacles/ObstacleControl.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  ./world/annotations/AnnotationManager.h \
  base/INETDefs.h
$O/world/powercontrol/PowerControlManager.o: world/powercontrol/PowerControlManager.cc \
  world/powercontrol/IPowerControl.h \
  world/powercontrol/PowerControlManager.h \
  base/INETDefs.h \
  world/powercontrol/PowerControlMessages_m.h
$O/world/radio/ChannelAccess.o: world/radio/ChannelAccess.cc \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h \
  world/radio/IChannelControl.h
$O/world/radio/ChannelControl.o: world/radio/ChannelControl.cc \
  util/FWMath.h \
  world/radio/ChannelControl.h \
  base/Coord.h \
  linklayer/radio/AirFrame_m.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  world/radio/IChannelControl.h
$O/world/radio/IdealChannelModel.o: world/radio/IdealChannelModel.cc \
  linklayer/radio/IdealRadio.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  world/radio/IdealChannelModelAccess.h \
  base/BasicModule.h \
  util/FWMath.h \
  world/radio/IdealChannelModel.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/radio/IdealAirFrame_m.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h
$O/world/radio/IdealChannelModelAccess.o: world/radio/IdealChannelModelAccess.cc \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  world/radio/IdealChannelModelAccess.h \
  base/BasicModule.h \
  util/FWMath.h \
  world/radio/IdealChannelModel.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/world/scenario/ScenarioManager.o: world/scenario/ScenarioManager.cc \
  base/IScriptable.h \
  world/scenario/ScenarioManager.h \
  base/INETDefs.h
$O/world/traci/TraCIScenarioManager.o: world/traci/TraCIScenarioManager.cc \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  ./mobility/models/TraCIMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  ./mobility/models/MobilityBase.h \
  base/Coord.h \
  base/INotifiable.h \
  ./world/traci/TraCIScenarioManager.h \
  ./world/traci/TraCIConstants.h \
  mobility/IMobility.h \
  base/INETDefs.h
$O/world/traci/TraCIScenarioManagerLaunchd.o: world/traci/TraCIScenarioManagerLaunchd.cc \
  base/ModuleAccess.h \
  util/FWMath.h \
  ./world/traci/TraCIScenarioManagerLaunchd.h \
  base/Coord.h \
  ./world/traci/TraCIScenarioManager.h \
  ./world/traci/TraCIConstants.h \
  base/INETDefs.h
$O/wpan/applications/Ieee802154TestApp/Ieee802154TestApp.o: wpan/applications/Ieee802154TestApp/Ieee802154TestApp.cc \
  wpan/applications/Ieee802154TestApp/Ieee802154TestApp.h \
  wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.h \
  applications/trafgen/TrafGenPar.h
$O/wpan/Isabel/Analysis/AnalysisEnergy.o: wpan/Isabel/Analysis/AnalysisEnergy.cc \
  battery/models/Energy.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  util/FWMath.h \
  world/radio/ChannelControl.h \
  base/Coord.h \
  base/INotifiable.h \
  wpan/Isabel/Analysis/AnalysisEnergy.h \
  battery/models/BasicBattery.h \
  mobility/IMobility.h \
  base/INETDefs.h \
  world/radio/IChannelControl.h
$O/wpan/Isabel/Base/Display.o: wpan/Isabel/Base/Display.cc \
  wpan/Isabel/Base/Display.h
$O/wpan/linklayer/bmac/BMacLayer.o: wpan/linklayer/bmac/BMacLayer.cc \
  ./world/obstacles/Obstacle.h \
  linklayer/radio/Radio.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  world/radio/ChannelAccess.h \
  wpan/linklayer/bmac/BMacLayer.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
  world/obstacles/ObstacleControl.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/common/WirelessMacBase.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
  wpan/phyLayer/ieee802154/Ieee802154Phy.h \
  base/BasicModule.h \
  util/FWMath.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
  linklayer/radio/IRadioModel.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/Coord.h \
  wpan/linklayer/bmac/bmacpkt_m.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  linklayer/radio/AirFrame_m.h \
  base/INotifiable.h \
  ./world/annotations/AnnotationManager.h \
  linklayer/radio/INoiseGenerator.h \
  linklayer/common/MACBase.h \
  linklayer/radio/propagation/IReceptionModel.h \
  wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  world/radio/IChannelControl.h \
  linklayer/radio/SnrList.h
$O/wpan/linklayer/bmac/bmacpkt_m.o: wpan/linklayer/bmac/bmacpkt_m.cc \
  wpan/linklayer/bmac/bmacpkt_m.h
$O/wpan/linklayer/ieee802154/mac/Ieee802154Link.o: wpan/linklayer/ieee802154/mac/Ieee802154Link.cc \
  wpan/linklayer/ieee802154/mac/Ieee802154Link.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h
$O/wpan/linklayer/ieee802154/mac/Ieee802154Mac.o: wpan/linklayer/ieee802154/mac/Ieee802154Mac.cc \
  ./world/obstacles/Obstacle.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
  linklayer/radio/Radio.h \
  networklayer/common/InterfaceEntry.h \
  base/NodeOperations.h \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  wpan/linklayer/ieee802154/mac/Ieee802154Mac.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
  world/obstacles/ObstacleControl.h \
  wpan/linklayer/ieee802154/mac/Ieee802154Link.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/common/WirelessMacBase.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
  wpan/phyLayer/ieee802154/Ieee802154Phy.h \
  util/FWMath.h \
  base/BasicModule.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
  linklayer/radio/IRadioModel.h \
  wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  linklayer/radio/AirFrame_m.h \
  base/INotifiable.h \
  ./world/annotations/AnnotationManager.h \
  linklayer/radio/INoiseGenerator.h \
  linklayer/common/MACBase.h \
  linklayer/radio/propagation/IReceptionModel.h \
  wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  world/radio/IChannelControl.h \
  linklayer/radio/SnrList.h
$O/wpan/linklayer/ieee802154/mac/csma802154.o: wpan/linklayer/ieee802154/mac/csma802154.cc \
  wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
  ./world/obstacles/Obstacle.h \
  linklayer/radio/Radio.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceEntry.h \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  wpan/linklayer/ieee802154/mac/Ieee802154Mac.h \
  base/ILifecycle.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
  world/obstacles/ObstacleControl.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  wpan/linklayer/ieee802154/mac/Ieee802154Link.h \
  wpan/linklayer/ieee802154/mac/csma802154.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/common/WirelessMacBase.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
  wpan/phyLayer/ieee802154/Ieee802154Phy.h \
  util/FWMath.h \
  base/BasicModule.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
  linklayer/radio/IRadioModel.h \
  wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  base/Coord.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  linklayer/radio/AirFrame_m.h \
  base/INotifiable.h \
  ./world/annotations/AnnotationManager.h \
  linklayer/radio/INoiseGenerator.h \
  linklayer/common/MACBase.h \
  linklayer/radio/propagation/IReceptionModel.h \
  wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  world/radio/IChannelControl.h \
  linklayer/radio/SnrList.h
$O/wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.o: wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.cc \
  wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.h \
  wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.h \
  wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h
$O/wpan/phyLayer/ieee802154/Ieee802154Phy.o: wpan/phyLayer/ieee802154/Ieee802154Phy.cc \
  ./world/obstacles/Obstacle.h \
  linklayer/radio/Radio.h \
  base/NodeOperations.h \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
  world/obstacles/ObstacleControl.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
  linklayer/contract/PhyControlInfo_m.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
  wpan/phyLayer/ieee802154/Ieee802154Phy.h \
  util/FWMath.h \
  base/BasicModule.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
  linklayer/radio/IRadioModel.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  status/NodeStatus.h \
  linklayer/radio/AirFrame_m.h \
  base/INotifiable.h \
  ./world/annotations/AnnotationManager.h \
  linklayer/radio/INoiseGenerator.h \
  linklayer/radio/propagation/IReceptionModel.h \
  battery/models/BasicBattery.h \
  linklayer/contract/RadioState.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  world/radio/IChannelControl.h \
  linklayer/radio/SnrList.h
$O/wpan/phyLayer/ieee802154/Ieee802154RadioModel.o: wpan/phyLayer/ieee802154/Ieee802154RadioModel.cc \
  wpan/phyLayer/ieee802154/Ieee802154RadioModel.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
  linklayer/contract/PhyControlInfo_m.h \
  util/FWMath.h \
  wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
  linklayer/radio/IRadioModel.h \
  linklayer/contract/MACAddress.h \
  base/Coord.h \
  linklayer/radio/AirFrame_m.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/SnrList.h
