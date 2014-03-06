#
# OMNeT++/OMNEST Makefile for libinet
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -o inet -O out -pINET -Xapplications/dhcp -Xapplications/httptools -Xapplications/rtpapp -Xapplications/sctpapp -Xapplications/traci -Xapplications/voip -Xapplications/voipstream -Xlinklayer/ext -Xlinklayer/ieee8021d -Xlinklayer/rstp -Xnetworklayer/bgpv4 -Xnetworklayer/diffserv -Xnetworklayer/internetcloud -Xnetworklayer/xmipv6 -Xnodes/Ieee8021d -Xnodes/bgp -Xnodes/httptools -Xnodes/internetcloud -Xnodes/xmipv6 -Xtransport/rtp -Xtransport/sctp -Xtransport/tcp_lwip -Xtransport/tcp_nsc -XunderTest/Ieee80211 -XunderTest/_4gsim -XunderTest/hip -XunderTest/wimax -Xutil/headerserializers/sctp -Xworld/httptools -Xworld/traci -Xwpan/linklayer/bmac -DWITH_TCP_COMMON -DWITH_TCP_INET -DWITH_IPv4 -DWITH_IPv6 -DWITH_UDP -DWITH_ETHERNET -DWITH_PPP -DWITH_MANET -DWITH_80215 -DWITH_OSPFv2 -DWITH_80211MESH -DWITH_MPLS
#

# Name of target to be created (-o option)
TARGET = libinet$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I. \
    -Iapplications \
    -Iapplications/ethernet \
    -Iapplications/generic \
    -Iapplications/pingapp \
    -Iapplications/tcpapp \
    -Iapplications/trafgen \
    -Iapplications/udpapp \
    -Iapplications/util \
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
    -Ilinklayer/loopback \
    -Ilinklayer/ppp \
    -Ilinklayer/queue \
    -Ilinklayer/radio \
    -Ilinklayer/radio/propagation \
    -Imobility \
    -Imobility/models \
    -Inetworklayer \
    -Inetworklayer/arp \
    -Inetworklayer/autorouting \
    -Inetworklayer/autorouting/ipv4 \
    -Inetworklayer/autorouting/ipv6 \
    -Inetworklayer/common \
    -Inetworklayer/contract \
    -Inetworklayer/extras \
    -Inetworklayer/icmpv6 \
    -Inetworklayer/ipv4 \
    -Inetworklayer/ipv6 \
    -Inetworklayer/ipv6/_6lowpan \
    -Inetworklayer/ipv6tunneling \
    -Inetworklayer/ldp \
    -Inetworklayer/manetrouting \
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
    -Inetworklayer/mpls \
    -Inetworklayer/ospfv2 \
    -Inetworklayer/ospfv2/interface \
    -Inetworklayer/ospfv2/messagehandler \
    -Inetworklayer/ospfv2/neighbor \
    -Inetworklayer/ospfv2/router \
    -Inetworklayer/rsvp_te \
    -Inetworklayer/ted \
    -Inodes \
    -Inodes/ethernet \
    -Inodes/inet \
    -Inodes/ipv6 \
    -Inodes/mpls \
    -Inodes/ospfv2 \
    -Inodes/rtp \
    -Inodes/wireless \
    -Istatus \
    -Itransport \
    -Itransport/contract \
    -Itransport/tcp \
    -Itransport/tcp/flavours \
    -Itransport/tcp/queues \
    -Itransport/tcp_common \
    -Itransport/udp \
    -IunderTest \
    -Iutil \
    -Iutil/headerserializers \
    -Iutil/headerserializers/headers \
    -Iutil/headerserializers/ipv4 \
    -Iutil/headerserializers/ipv4/headers \
    -Iutil/headerserializers/tcp \
    -Iutil/headerserializers/tcp/headers \
    -Iutil/headerserializers/udp \
    -Iutil/headerserializers/udp/headers \
    -Iworld \
    -Iworld/annotations \
    -Iworld/obstacles \
    -Iworld/powercontrol \
    -Iworld/radio \
    -Iworld/scenario \
    -Iwpan \
    -Iwpan/Isabel \
    -Iwpan/Isabel/Analysis \
    -Iwpan/Isabel/Base \
    -Iwpan/applications \
    -Iwpan/applications/Ieee802154TestApp \
    -Iwpan/linklayer \
    -Iwpan/linklayer/ieee802154 \
    -Iwpan/linklayer/ieee802154/contract \
    -Iwpan/linklayer/ieee802154/mac \
    -Iwpan/networklayer \
    -Iwpan/networklayer/Ieee802154StarRouting \
    -Iwpan/networklayer/contract \
    -Iwpan/nodes \
    -Iwpan/phyLayer \
    -Iwpan/phyLayer/ieee802154

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/AppBase.o \
    $O/applications/ethernet/EthernetApplication.o \
    $O/applications/ethernet/EtherTrafGen.o \
    $O/applications/ethernet/EtherAppCli.o \
    $O/applications/ethernet/EtherAppSrv.o \
    $O/applications/generic/IPvXTrafSink.o \
    $O/applications/generic/IPvXTrafGen.o \
    $O/applications/pingapp/PingApp.o \
    $O/applications/pingapp/PingTestApp.o \
    $O/applications/tcpapp/TCPGenericCliAppBase.o \
    $O/applications/tcpapp/TCPGenericSrvApp.o \
    $O/applications/tcpapp/TCPGenericSrvThread.o \
    $O/applications/tcpapp/TCPEchoApp.o \
    $O/applications/tcpapp/TCPBasicClientApp.o \
    $O/applications/tcpapp/TCPGenericCliAppBasePromis.o \
    $O/applications/tcpapp/TelnetApp.o \
    $O/applications/tcpapp/TCPSrvHostApp.o \
    $O/applications/tcpapp/TCPSessionApp.o \
    $O/applications/tcpapp/TCPSinkApp.o \
    $O/applications/trafgen/TrafGenPar.o \
    $O/applications/trafgen/TrafGen.o \
    $O/applications/udpapp/UDPBasicApp.o \
    $O/applications/udpapp/UDPEchoApp.o \
    $O/applications/udpapp/PASERUdpTrafficSender.o \
    $O/applications/udpapp/UDPVideoStreamCli2.o \
    $O/applications/udpapp/UDPVideoStreamCli.o \
    $O/applications/udpapp/UDPBasicBurstNotification.o \
    $O/applications/udpapp/PASERUdpTrafficReceiver.o \
    $O/applications/udpapp/UDPBasicBurst.o \
    $O/applications/udpapp/UDPVideoStreamSvr2.o \
    $O/applications/udpapp/UDPSink.o \
    $O/applications/udpapp/UDPBasicFlooding.o \
    $O/applications/udpapp/UDPVideoStreamSvr.o \
    $O/applications/util/AddressModule.o \
    $O/base/ModuleAccess.o \
    $O/base/InterfaceOperations.o \
    $O/base/Topology.o \
    $O/base/AbstractQueue.o \
    $O/base/NotifierConsts.o \
    $O/base/QueueBase.o \
    $O/base/ByteArrayBuffer.o \
    $O/base/NedFunctions.o \
    $O/base/UnimplementedModule.o \
    $O/base/ResultFilters.o \
    $O/base/ProtocolMap.o \
    $O/base/LifecycleController.o \
    $O/base/BasicModule.o \
    $O/base/PassiveQueueBase.o \
    $O/base/QueueWithQoS.o \
    $O/base/Coord.o \
    $O/base/WeightedTopology.o \
    $O/base/erfc.o \
    $O/base/Join.o \
    $O/base/NodeOperations.o \
    $O/base/ByteArrayMessage.o \
    $O/base/ReassemblyBuffer.o \
    $O/base/Sink.o \
    $O/base/ByteArray.o \
    $O/base/NotificationBoard.o \
    $O/base/MMapBoard.o \
    $O/battery/models/InetSimpleBattery.o \
    $O/battery/models/BasicBattery.o \
    $O/generic/RPSSocket.o \
    $O/linklayer/channels/LinkFailureManager.o \
    $O/linklayer/channels/MyThroughputMeteringChannel.o \
    $O/linklayer/channels/ProgramedFailureChannel.o \
    $O/linklayer/collStats/collStats.o \
    $O/linklayer/common/MACBase.o \
    $O/linklayer/common/WirelessMacBase.o \
    $O/linklayer/contract/MACAddress.o \
    $O/linklayer/ethernet/EtherHub.o \
    $O/linklayer/ethernet/EtherMAC.o \
    $O/linklayer/ethernet/EtherFrameClassifier.o \
    $O/linklayer/ethernet/EtherBus.o \
    $O/linklayer/ethernet/EtherMACBase.o \
    $O/linklayer/ethernet/EtherEncap.o \
    $O/linklayer/ethernet/EtherMACFullDuplex.o \
    $O/linklayer/ethernet/EtherLLC.o \
    $O/linklayer/ethernet/switch/MACRelayUnitNP.o \
    $O/linklayer/ethernet/switch/MACRelayUnitPP.o \
    $O/linklayer/ethernet/switch/MACRelayUnitBase.o \
    $O/linklayer/idealwireless/IdealWirelessMac.o \
    $O/linklayer/ieee80211/mac/MultiQueue.o \
    $O/linklayer/ieee80211/mac/Ieee80211eClassifier.o \
    $O/linklayer/ieee80211/mac/WifiMode.o \
    $O/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.o \
    $O/linklayer/ieee80211/mac/Ieee80211DataRate.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Etx.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/linklayer/ieee80211/radio/BerParseFile.o \
    $O/linklayer/ieee80211/radio/Ieee80211RadioModel.o \
    $O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o \
    $O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o \
    $O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o \
    $O/linklayer/ieee80211mesh/ethernet/EtherEncapMesh.o \
    $O/linklayer/ieee80211mesh/hwmp/hwmp-rtable.o \
    $O/linklayer/ieee80211mesh/hwmp/hwmp.o \
    $O/linklayer/ieee80211mesh/locator/BigUint.o \
    $O/linklayer/ieee80211mesh/locator/LocatorModuleClient.o \
    $O/linklayer/ieee80211mesh/locator/LocatorModule.o \
    $O/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.o \
    $O/linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.o \
    $O/linklayer/ieee80211mesh/mgmt/lwmpls_data.o \
    $O/linklayer/loopback/Loopback.o \
    $O/linklayer/ppp/PPP.o \
    $O/linklayer/queue/SchedulerBase.o \
    $O/linklayer/queue/DropTailQueue.o \
    $O/linklayer/queue/FIFOQueue.o \
    $O/linklayer/queue/PriorityScheduler.o \
    $O/linklayer/queue/WRRScheduler.o \
    $O/linklayer/queue/AlgorithmicDropperBase.o \
    $O/linklayer/queue/ThresholdDropper.o \
    $O/linklayer/queue/WeightedFairQueue.o \
    $O/linklayer/queue/REDDropper.o \
    $O/linklayer/radio/GenericRadioModel.o \
    $O/linklayer/radio/Modulation.o \
    $O/linklayer/radio/IdealRadio.o \
    $O/linklayer/radio/Radio.o \
    $O/linklayer/radio/propagation/LogNormalShadowingModel.o \
    $O/linklayer/radio/propagation/FreeSpaceModel.o \
    $O/linklayer/radio/propagation/RiceModel.o \
    $O/linklayer/radio/propagation/TwoRayGroundModel.o \
    $O/linklayer/radio/propagation/NakagamiModel.o \
    $O/linklayer/radio/propagation/RayleighModel.o \
    $O/mobility/models/MovingMobilityBase.o \
    $O/mobility/models/BonnMotionMobility.o \
    $O/mobility/models/LinearNodeDistributionMobility.o \
    $O/mobility/models/MobilityBase.o \
    $O/mobility/models/StationaryMobility.o \
    $O/mobility/models/TractorMobility.o \
    $O/mobility/models/MoBANLocal.o \
    $O/mobility/models/MoBANCoordinator.o \
    $O/mobility/models/ConstSpeedMobility.o \
    $O/mobility/models/LaptopModelManager.o \
    $O/mobility/models/ChiangMobility.o \
    $O/mobility/models/RandomWPMobility.o \
    $O/mobility/models/PostureTransition.o \
    $O/mobility/models/BonnMotionFileCache.o \
    $O/mobility/models/MassMobility.o \
    $O/mobility/models/Ns2MotionMobility.o \
    $O/mobility/models/Posture.o \
    $O/mobility/models/RectangleMobility.o \
    $O/mobility/models/LinearMobility.o \
    $O/mobility/models/TurtleMobility.o \
    $O/mobility/models/GaussMarkovMobility.o \
    $O/mobility/models/CircleMobility.o \
    $O/mobility/models/MobilityAccess.o \
    $O/mobility/models/LineSegmentsMobilityBase.o \
    $O/mobility/models/TraCIMobility.o \
    $O/mobility/models/StaticGridMobility.o \
    $O/mobility/models/ANSimMobility.o \
    $O/networklayer/arp/ARP.o \
    $O/networklayer/autorouting/ipv4/HostAutoConfigurator.o \
    $O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o \
    $O/networklayer/autorouting/ipv4/HostAutoConfigurator2.o \
    $O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o \
    $O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o \
    $O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o \
    $O/networklayer/common/InterfaceEntry.o \
    $O/networklayer/common/InterfaceTable.o \
    $O/networklayer/contract/IPv4Address.o \
    $O/networklayer/contract/IPvXAddress.o \
    $O/networklayer/contract/IPv4ControlInfo.o \
    $O/networklayer/contract/IPv6Address.o \
    $O/networklayer/contract/IPv6ControlInfo.o \
    $O/networklayer/contract/IPvXAddressResolver.o \
    $O/networklayer/extras/Dummy.o \
    $O/networklayer/extras/FailureManager.o \
    $O/networklayer/icmpv6/ICMPv6.o \
    $O/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/networklayer/ipv4/IGMPv2.o \
    $O/networklayer/ipv4/IPv4FragBuf.o \
    $O/networklayer/ipv4/IPv4Route.o \
    $O/networklayer/ipv4/ICMP.o \
    $O/networklayer/ipv4/IPv4.o \
    $O/networklayer/ipv4/IPv4RouteRule.o \
    $O/networklayer/ipv4/RoutingTableParser.o \
    $O/networklayer/ipv4/ErrorHandling.o \
    $O/networklayer/ipv4/RoutingTable.o \
    $O/networklayer/ipv4/NetworkInfo.o \
    $O/networklayer/ipv4/RoutingTableRecorder.o \
    $O/networklayer/ipv4/IPv4InterfaceData.o \
    $O/networklayer/ipv6/IPv6Datagram.o \
    $O/networklayer/ipv6/RoutingTable6.o \
    $O/networklayer/ipv6/IPv6.o \
    $O/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/networklayer/ipv6/IPv6FragBuf.o \
    $O/networklayer/ipv6/IPv6InterfaceData.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders.o \
    $O/networklayer/ipv6/_6lowpan/_6lowpan.o \
    $O/networklayer/ipv6tunneling/IPv6Tunneling.o \
    $O/networklayer/ldp/LDP.o \
    $O/networklayer/manetrouting/PASER/IP_ADOPTED/IP_paser.o \
    $O/networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.o \
    $O/networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.o \
    $O/networklayer/manetrouting/PASER/paser_logic/PASER_Global.o \
    $O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.o \
    $O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.o \
    $O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.o \
    $O/networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.o \
    $O/networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.o \
    $O/networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.o \
    $O/networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.o \
    $O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.o \
    $O/networklayer/manetrouting/PASER/paser_socket/PASER_Socket.o \
    $O/networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.o \
    $O/networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Entry.o \
    $O/networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.o \
    $O/networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.o \
    $O/networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.o \
    $O/networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.o \
    $O/networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.o \
    $O/networklayer/manetrouting/PASER/simple_kdc/SimpleKDC.o \
    $O/networklayer/manetrouting/aodv/aodv_uu_omnet.o \
    $O/networklayer/manetrouting/aodv/aodv_msg_struct.o \
    $O/networklayer/manetrouting/aodv/packet_queue_omnet.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/debug_aodv.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/routing_table.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/list.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/seek_list.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_hello.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/locality.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_socket.o \
    $O/networklayer/manetrouting/base/ManetAddress.o \
    $O/networklayer/manetrouting/base/ManetRoutingBase.o \
    $O/networklayer/manetrouting/batman/BatmanMain.o \
    $O/networklayer/manetrouting/batman/batmand/bitarray.o \
    $O/networklayer/manetrouting/batman/batmand/batman.o \
    $O/networklayer/manetrouting/batman/batmand/os.o \
    $O/networklayer/manetrouting/batman/batmand/hna.o \
    $O/networklayer/manetrouting/batman/batmand/originator.o \
    $O/networklayer/manetrouting/batman/batmand/ring_buffer.o \
    $O/networklayer/manetrouting/batman/batmand/schedule.o \
    $O/networklayer/manetrouting/dsdv/DSDV_2.o \
    $O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o \
    $O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/neigh.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o \
    $O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o \
    $O/networklayer/manetrouting/dymo/dymo_um_omnet.o \
    $O/networklayer/manetrouting/dymo/dymo_msg_struct.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o \
    $O/networklayer/manetrouting/dymo/dymoum/timer_queue.o \
    $O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/rtable.o \
    $O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_re.o \
    $O/networklayer/manetrouting/dymo/dymoum/blacklist.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o \
    $O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o \
    $O/networklayer/manetrouting/olsr/OLSR.o \
    $O/networklayer/manetrouting/olsr/OLSROPT.o \
    $O/networklayer/manetrouting/olsr/OLSR_state.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_state.o \
    $O/networklayer/manetrouting/olsr/OLSR_rtable.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX.o \
    $O/networklayer/mpls/MPLSPacket.o \
    $O/networklayer/mpls/LIBTable.o \
    $O/networklayer/mpls/MPLS.o \
    $O/networklayer/ospfv2/OSPFConfigReader.o \
    $O/networklayer/ospfv2/OSPFRouting.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/networklayer/ospfv2/interface/OSPFInterface.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceState.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/networklayer/ospfv2/messagehandler/MessageHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/networklayer/ospfv2/messagehandler/HelloHandler.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighbor.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborState.o \
    $O/networklayer/ospfv2/router/NetworkLSA.o \
    $O/networklayer/ospfv2/router/ASExternalLSA.o \
    $O/networklayer/ospfv2/router/SummaryLSA.o \
    $O/networklayer/ospfv2/router/LSA.o \
    $O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o \
    $O/networklayer/ospfv2/router/OSPFRouter.o \
    $O/networklayer/ospfv2/router/RouterLSA.o \
    $O/networklayer/ospfv2/router/OSPFArea.o \
    $O/networklayer/rsvp_te/SimpleClassifier.o \
    $O/networklayer/rsvp_te/RSVP.o \
    $O/networklayer/rsvp_te/Utils.o \
    $O/networklayer/ted/TED.o \
    $O/networklayer/ted/LinkStateRouting.o \
    $O/status/NodeStatus.o \
    $O/transport/contract/SCTPSocket.o \
    $O/transport/contract/TCPSocket.o \
    $O/transport/contract/TCPSocketMap.o \
    $O/transport/contract/UDPSocket.o \
    $O/transport/tcp/TCPConnectionSackUtil.o \
    $O/transport/tcp/TCP.o \
    $O/transport/tcp/TCPConnectionEventProc.o \
    $O/transport/tcp/TCPConnectionBase.o \
    $O/transport/tcp/TCPConnectionRcvSegment.o \
    $O/transport/tcp/TCPConnectionUtil.o \
    $O/transport/tcp/TCPSACKRexmitQueue.o \
    $O/transport/tcp/flavours/TCPNewReno.o \
    $O/transport/tcp/flavours/DumbTCP.o \
    $O/transport/tcp/flavours/TCPReno.o \
    $O/transport/tcp/flavours/TCPWestwood.o \
    $O/transport/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o \
    $O/transport/tcp/flavours/TCPBaseAlg.o \
    $O/transport/tcp/flavours/TCPVegas.o \
    $O/transport/tcp/flavours/TCPNoCongestionControl.o \
    $O/transport/tcp/flavours/TCPTahoe.o \
    $O/transport/tcp/queues/TCPByteStreamRcvQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/transport/tcp/queues/TCPByteStreamSendQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/transport/tcp_common/TCPSpoof.o \
    $O/transport/tcp_common/TCPSegment.o \
    $O/transport/udp/UDP.o \
    $O/util/WirelessNumHops.o \
    $O/util/ThruputMeteringChannel.o \
    $O/util/MessageChecker.o \
    $O/util/Macho.o \
    $O/util/PcapRecorder.o \
    $O/util/GlobalWirelessLinkInspector.o \
    $O/util/uint128.o \
    $O/util/XMLUtils.o \
    $O/util/OrdinalBasedDropper.o \
    $O/util/PacketDump.o \
    $O/util/PcapDump.o \
    $O/util/ThruputMeter.o \
    $O/util/WirelessGetNeig.o \
    $O/util/common.o \
    $O/util/NetAnimTrace.o \
    $O/util/OrdinalBasedDuplicator.o \
    $O/util/int128.o \
    $O/util/PatternMatcher.o \
    $O/util/TCPDump.o \
    $O/util/Delayer.o \
    $O/util/dijktraKShortest.o \
    $O/util/opp_utils.o \
    $O/util/headerserializers/TCPIPchecksum.o \
    $O/util/headerserializers/ipv4/ICMPSerializer.o \
    $O/util/headerserializers/ipv4/IPv4Serializer.o \
    $O/util/headerserializers/ipv4/IGMPSerializer.o \
    $O/util/headerserializers/tcp/TCPSerializer.o \
    $O/util/headerserializers/udp/UDPSerializer.o \
    $O/world/annotations/AnnotationDummy.o \
    $O/world/annotations/AnnotationManager.o \
    $O/world/obstacles/ObstacleControl.o \
    $O/world/obstacles/Obstacle.o \
    $O/world/powercontrol/PowerControlManager.o \
    $O/world/radio/IdealChannelModel.o \
    $O/world/radio/ChannelControl.o \
    $O/world/radio/IdealChannelModelAccess.o \
    $O/world/radio/ChannelAccess.o \
    $O/world/scenario/ScenarioManager.o \
    $O/wpan/Isabel/Analysis/AnalysisEnergy.o \
    $O/wpan/Isabel/Base/Display.o \
    $O/wpan/applications/Ieee802154TestApp/Ieee802154TestApp.o \
    $O/wpan/linklayer/ieee802154/mac/Ieee802154Mac.o \
    $O/wpan/linklayer/ieee802154/mac/csma802154.o \
    $O/wpan/linklayer/ieee802154/mac/Ieee802154Link.o \
    $O/wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.o \
    $O/wpan/phyLayer/ieee802154/Ieee802154Phy.o \
    $O/wpan/phyLayer/ieee802154/Ieee802154RadioModel.o \
    $O/applications/ethernet/EtherApp_m.o \
    $O/applications/pingapp/PingPayload_m.o \
    $O/applications/tcpapp/GenericAppMsg_m.o \
    $O/applications/udpapp/VideoPacket_m.o \
    $O/applications/udpapp/UDPEchoAppMsg_m.o \
    $O/applications/udpapp/UDPVideoData_m.o \
    $O/applications/udpapp/PaserTrafficDataMsg_m.o \
    $O/base/ByteArray_m.o \
    $O/base/ByteArrayMessage_m.o \
    $O/linklayer/channels/LinkFailureMessage_m.o \
    $O/linklayer/contract/PhyControlInfo_m.o \
    $O/linklayer/contract/Ieee802Ctrl_m.o \
    $O/linklayer/ethernet/EtherFrame_m.o \
    $O/linklayer/idealwireless/IdealWirelessFrame_m.o \
    $O/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/linklayer/ieee80211/mgmt/ETXPacket_m.o \
    $O/linklayer/ieee80211mesh/locator/locatorPkt_m.o \
    $O/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.o \
    $O/linklayer/ppp/PPPFrame_m.o \
    $O/linklayer/radio/Radio80211aControlInfo_m.o \
    $O/linklayer/radio/AirFrame_m.o \
    $O/linklayer/radio/IdealAirFrame_m.o \
    $O/networklayer/arp/ARPPacket_m.o \
    $O/networklayer/contract/IPProtocolId_m.o \
    $O/networklayer/contract/IPv4ControlInfo_m.o \
    $O/networklayer/contract/IPv6ControlInfo_m.o \
    $O/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/networklayer/ipv4/IPv4Datagram_m.o \
    $O/networklayer/ipv4/ICMPMessage_m.o \
    $O/networklayer/ipv4/IGMPMessage_m.o \
    $O/networklayer/ipv6/IPv6Datagram_m.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/networklayer/ipv6/_6lowpan/_6lowpanDatagram_m.o \
    $O/networklayer/ldp/LDPPacket_m.o \
    $O/networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.o \
    $O/networklayer/manetrouting/aodv/aodv_msg_struct_m.o \
    $O/networklayer/manetrouting/base/ControlInfoBreakLink_m.o \
    $O/networklayer/manetrouting/base/MeshControlInfo_m.o \
    $O/networklayer/manetrouting/base/LocatorNotificationInfo_m.o \
    $O/networklayer/manetrouting/base/ControlManetRouting_m.o \
    $O/networklayer/manetrouting/batman/BatmanMsg_m.o \
    $O/networklayer/manetrouting/dsdv/DSDVhello_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o \
    $O/networklayer/manetrouting/olsr/OLSRpkt_m.o \
    $O/networklayer/ospfv2/OSPFTimer_m.o \
    $O/networklayer/ospfv2/OSPFPacket_m.o \
    $O/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/networklayer/rsvp_te/RSVPHello_m.o \
    $O/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/networklayer/rsvp_te/IntServ_m.o \
    $O/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/networklayer/ted/TED_m.o \
    $O/networklayer/ted/LinkStatePacket_m.o \
    $O/transport/contract/SCTPCommand_m.o \
    $O/transport/contract/UDPControlInfo_m.o \
    $O/transport/contract/TCPCommand_m.o \
    $O/transport/tcp_common/TCPSegment_m.o \
    $O/transport/udp/UDPPacket_m.o \
    $O/world/powercontrol/PowerControlMessages_m.o \
    $O/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.o \
    $O/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.o \
    $O/wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.o \
    $O/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.o

# Message files
MSGFILES = \
    applications/ethernet/EtherApp.msg \
    applications/pingapp/PingPayload.msg \
    applications/tcpapp/GenericAppMsg.msg \
    applications/udpapp/VideoPacket.msg \
    applications/udpapp/UDPEchoAppMsg.msg \
    applications/udpapp/UDPVideoData.msg \
    applications/udpapp/PaserTrafficDataMsg.msg \
    base/ByteArray.msg \
    base/ByteArrayMessage.msg \
    linklayer/channels/LinkFailureMessage.msg \
    linklayer/contract/PhyControlInfo.msg \
    linklayer/contract/Ieee802Ctrl.msg \
    linklayer/ethernet/EtherFrame.msg \
    linklayer/idealwireless/IdealWirelessFrame.msg \
    linklayer/ieee80211/mac/Ieee80211Frame.msg \
    linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    linklayer/ieee80211/mgmt/ETXPacket.msg \
    linklayer/ieee80211mesh/locator/locatorPkt.msg \
    linklayer/ieee80211mesh/mgmt/LWMPLSPacket.msg \
    linklayer/ppp/PPPFrame.msg \
    linklayer/radio/Radio80211aControlInfo.msg \
    linklayer/radio/AirFrame.msg \
    linklayer/radio/IdealAirFrame.msg \
    networklayer/arp/ARPPacket.msg \
    networklayer/contract/IPProtocolId.msg \
    networklayer/contract/IPv4ControlInfo.msg \
    networklayer/contract/IPv6ControlInfo.msg \
    networklayer/icmpv6/IPv6NDMessage.msg \
    networklayer/icmpv6/ICMPv6Message.msg \
    networklayer/ipv4/IPv4Datagram.msg \
    networklayer/ipv4/ICMPMessage.msg \
    networklayer/ipv4/IGMPMessage.msg \
    networklayer/ipv6/IPv6Datagram.msg \
    networklayer/ipv6/IPv6ExtensionHeaders.msg \
    networklayer/ipv6/_6lowpan/_6lowpanDatagram.msg \
    networklayer/ldp/LDPPacket.msg \
    networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message.msg \
    networklayer/manetrouting/aodv/aodv_msg_struct.msg \
    networklayer/manetrouting/base/ControlInfoBreakLink.msg \
    networklayer/manetrouting/base/MeshControlInfo.msg \
    networklayer/manetrouting/base/LocatorNotificationInfo.msg \
    networklayer/manetrouting/base/ControlManetRouting.msg \
    networklayer/manetrouting/batman/BatmanMsg.msg \
    networklayer/manetrouting/dsdv/DSDVhello.msg \
    networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Packet.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg \
    networklayer/manetrouting/dymo_fau/DYMO_UERR.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RM.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RERR.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREP.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREQ.msg \
    networklayer/manetrouting/olsr/OLSRpkt.msg \
    networklayer/ospfv2/OSPFTimer.msg \
    networklayer/ospfv2/OSPFPacket.msg \
    networklayer/rsvp_te/RSVPPathMsg.msg \
    networklayer/rsvp_te/RSVPHello.msg \
    networklayer/rsvp_te/RSVPResvMsg.msg \
    networklayer/rsvp_te/IntServ.msg \
    networklayer/rsvp_te/SignallingMsg.msg \
    networklayer/rsvp_te/RSVPPacket.msg \
    networklayer/ted/TED.msg \
    networklayer/ted/LinkStatePacket.msg \
    transport/contract/SCTPCommand.msg \
    transport/contract/UDPControlInfo.msg \
    transport/contract/TCPCommand.msg \
    transport/tcp_common/TCPSegment.msg \
    transport/udp/UDPPacket.msg \
    world/powercontrol/PowerControlMessages.msg \
    wpan/applications/Ieee802154TestApp/Ieee802154AppPkt.msg \
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
    -DWITH_UDP \
    -DWITH_ETHERNET \
    -DWITH_PPP \
    -DWITH_MANET \
    -DWITH_80215 \
    -DWITH_OSPFv2 \
    -DWITH_80211MESH \
    -DWITH_MPLS \
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
	$(Q)-rm -f applications/ethernet/*_m.cc applications/ethernet/*_m.h
	$(Q)-rm -f applications/generic/*_m.cc applications/generic/*_m.h
	$(Q)-rm -f applications/pingapp/*_m.cc applications/pingapp/*_m.h
	$(Q)-rm -f applications/tcpapp/*_m.cc applications/tcpapp/*_m.h
	$(Q)-rm -f applications/trafgen/*_m.cc applications/trafgen/*_m.h
	$(Q)-rm -f applications/udpapp/*_m.cc applications/udpapp/*_m.h
	$(Q)-rm -f applications/util/*_m.cc applications/util/*_m.h
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
	$(Q)-rm -f linklayer/loopback/*_m.cc linklayer/loopback/*_m.h
	$(Q)-rm -f linklayer/ppp/*_m.cc linklayer/ppp/*_m.h
	$(Q)-rm -f linklayer/queue/*_m.cc linklayer/queue/*_m.h
	$(Q)-rm -f linklayer/radio/*_m.cc linklayer/radio/*_m.h
	$(Q)-rm -f linklayer/radio/propagation/*_m.cc linklayer/radio/propagation/*_m.h
	$(Q)-rm -f mobility/*_m.cc mobility/*_m.h
	$(Q)-rm -f mobility/models/*_m.cc mobility/models/*_m.h
	$(Q)-rm -f networklayer/*_m.cc networklayer/*_m.h
	$(Q)-rm -f networklayer/arp/*_m.cc networklayer/arp/*_m.h
	$(Q)-rm -f networklayer/autorouting/*_m.cc networklayer/autorouting/*_m.h
	$(Q)-rm -f networklayer/autorouting/ipv4/*_m.cc networklayer/autorouting/ipv4/*_m.h
	$(Q)-rm -f networklayer/autorouting/ipv6/*_m.cc networklayer/autorouting/ipv6/*_m.h
	$(Q)-rm -f networklayer/common/*_m.cc networklayer/common/*_m.h
	$(Q)-rm -f networklayer/contract/*_m.cc networklayer/contract/*_m.h
	$(Q)-rm -f networklayer/extras/*_m.cc networklayer/extras/*_m.h
	$(Q)-rm -f networklayer/icmpv6/*_m.cc networklayer/icmpv6/*_m.h
	$(Q)-rm -f networklayer/ipv4/*_m.cc networklayer/ipv4/*_m.h
	$(Q)-rm -f networklayer/ipv6/*_m.cc networklayer/ipv6/*_m.h
	$(Q)-rm -f networklayer/ipv6/_6lowpan/*_m.cc networklayer/ipv6/_6lowpan/*_m.h
	$(Q)-rm -f networklayer/ipv6tunneling/*_m.cc networklayer/ipv6tunneling/*_m.h
	$(Q)-rm -f networklayer/ldp/*_m.cc networklayer/ldp/*_m.h
	$(Q)-rm -f networklayer/manetrouting/*_m.cc networklayer/manetrouting/*_m.h
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
	$(Q)-rm -f networklayer/mpls/*_m.cc networklayer/mpls/*_m.h
	$(Q)-rm -f networklayer/ospfv2/*_m.cc networklayer/ospfv2/*_m.h
	$(Q)-rm -f networklayer/ospfv2/interface/*_m.cc networklayer/ospfv2/interface/*_m.h
	$(Q)-rm -f networklayer/ospfv2/messagehandler/*_m.cc networklayer/ospfv2/messagehandler/*_m.h
	$(Q)-rm -f networklayer/ospfv2/neighbor/*_m.cc networklayer/ospfv2/neighbor/*_m.h
	$(Q)-rm -f networklayer/ospfv2/router/*_m.cc networklayer/ospfv2/router/*_m.h
	$(Q)-rm -f networklayer/rsvp_te/*_m.cc networklayer/rsvp_te/*_m.h
	$(Q)-rm -f networklayer/ted/*_m.cc networklayer/ted/*_m.h
	$(Q)-rm -f nodes/*_m.cc nodes/*_m.h
	$(Q)-rm -f nodes/ethernet/*_m.cc nodes/ethernet/*_m.h
	$(Q)-rm -f nodes/inet/*_m.cc nodes/inet/*_m.h
	$(Q)-rm -f nodes/ipv6/*_m.cc nodes/ipv6/*_m.h
	$(Q)-rm -f nodes/mpls/*_m.cc nodes/mpls/*_m.h
	$(Q)-rm -f nodes/ospfv2/*_m.cc nodes/ospfv2/*_m.h
	$(Q)-rm -f nodes/rtp/*_m.cc nodes/rtp/*_m.h
	$(Q)-rm -f nodes/wireless/*_m.cc nodes/wireless/*_m.h
	$(Q)-rm -f status/*_m.cc status/*_m.h
	$(Q)-rm -f transport/*_m.cc transport/*_m.h
	$(Q)-rm -f transport/contract/*_m.cc transport/contract/*_m.h
	$(Q)-rm -f transport/tcp/*_m.cc transport/tcp/*_m.h
	$(Q)-rm -f transport/tcp/flavours/*_m.cc transport/tcp/flavours/*_m.h
	$(Q)-rm -f transport/tcp/queues/*_m.cc transport/tcp/queues/*_m.h
	$(Q)-rm -f transport/tcp_common/*_m.cc transport/tcp_common/*_m.h
	$(Q)-rm -f transport/udp/*_m.cc transport/udp/*_m.h
	$(Q)-rm -f underTest/*_m.cc underTest/*_m.h
	$(Q)-rm -f util/*_m.cc util/*_m.h
	$(Q)-rm -f util/headerserializers/*_m.cc util/headerserializers/*_m.h
	$(Q)-rm -f util/headerserializers/headers/*_m.cc util/headerserializers/headers/*_m.h
	$(Q)-rm -f util/headerserializers/ipv4/*_m.cc util/headerserializers/ipv4/*_m.h
	$(Q)-rm -f util/headerserializers/ipv4/headers/*_m.cc util/headerserializers/ipv4/headers/*_m.h
	$(Q)-rm -f util/headerserializers/tcp/*_m.cc util/headerserializers/tcp/*_m.h
	$(Q)-rm -f util/headerserializers/tcp/headers/*_m.cc util/headerserializers/tcp/headers/*_m.h
	$(Q)-rm -f util/headerserializers/udp/*_m.cc util/headerserializers/udp/*_m.h
	$(Q)-rm -f util/headerserializers/udp/headers/*_m.cc util/headerserializers/udp/headers/*_m.h
	$(Q)-rm -f world/*_m.cc world/*_m.h
	$(Q)-rm -f world/annotations/*_m.cc world/annotations/*_m.h
	$(Q)-rm -f world/obstacles/*_m.cc world/obstacles/*_m.h
	$(Q)-rm -f world/powercontrol/*_m.cc world/powercontrol/*_m.h
	$(Q)-rm -f world/radio/*_m.cc world/radio/*_m.h
	$(Q)-rm -f world/scenario/*_m.cc world/scenario/*_m.h
	$(Q)-rm -f wpan/*_m.cc wpan/*_m.h
	$(Q)-rm -f wpan/Isabel/*_m.cc wpan/Isabel/*_m.h
	$(Q)-rm -f wpan/Isabel/Analysis/*_m.cc wpan/Isabel/Analysis/*_m.h
	$(Q)-rm -f wpan/Isabel/Base/*_m.cc wpan/Isabel/Base/*_m.h
	$(Q)-rm -f wpan/applications/*_m.cc wpan/applications/*_m.h
	$(Q)-rm -f wpan/applications/Ieee802154TestApp/*_m.cc wpan/applications/Ieee802154TestApp/*_m.h
	$(Q)-rm -f wpan/linklayer/*_m.cc wpan/linklayer/*_m.h
	$(Q)-rm -f wpan/linklayer/ieee802154/*_m.cc wpan/linklayer/ieee802154/*_m.h
	$(Q)-rm -f wpan/linklayer/ieee802154/contract/*_m.cc wpan/linklayer/ieee802154/contract/*_m.h
	$(Q)-rm -f wpan/linklayer/ieee802154/mac/*_m.cc wpan/linklayer/ieee802154/mac/*_m.h
	$(Q)-rm -f wpan/networklayer/*_m.cc wpan/networklayer/*_m.h
	$(Q)-rm -f wpan/networklayer/Ieee802154StarRouting/*_m.cc wpan/networklayer/Ieee802154StarRouting/*_m.h
	$(Q)-rm -f wpan/networklayer/contract/*_m.cc wpan/networklayer/contract/*_m.h
	$(Q)-rm -f wpan/nodes/*_m.cc wpan/nodes/*_m.h
	$(Q)-rm -f wpan/phyLayer/*_m.cc wpan/phyLayer/*_m.h
	$(Q)-rm -f wpan/phyLayer/ieee802154/*_m.cc wpan/phyLayer/ieee802154/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/ethernet/*.cc applications/generic/*.cc applications/pingapp/*.cc applications/tcpapp/*.cc applications/trafgen/*.cc applications/udpapp/*.cc applications/util/*.cc base/*.cc battery/*.cc battery/models/*.cc generic/*.cc linklayer/*.cc linklayer/channels/*.cc linklayer/collStats/*.cc linklayer/common/*.cc linklayer/contract/*.cc linklayer/ethernet/*.cc linklayer/ethernet/switch/*.cc linklayer/idealwireless/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mac/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/ieee80211/radio/*.cc linklayer/ieee80211/radio/errormodel/*.cc linklayer/ieee80211mesh/*.cc linklayer/ieee80211mesh/ethernet/*.cc linklayer/ieee80211mesh/hwmp/*.cc linklayer/ieee80211mesh/locator/*.cc linklayer/ieee80211mesh/mgmt/*.cc linklayer/ieee80211mesh/nodes/*.cc linklayer/loopback/*.cc linklayer/ppp/*.cc linklayer/queue/*.cc linklayer/radio/*.cc linklayer/radio/propagation/*.cc mobility/*.cc mobility/models/*.cc networklayer/*.cc networklayer/arp/*.cc networklayer/autorouting/*.cc networklayer/autorouting/ipv4/*.cc networklayer/autorouting/ipv6/*.cc networklayer/common/*.cc networklayer/contract/*.cc networklayer/extras/*.cc networklayer/icmpv6/*.cc networklayer/ipv4/*.cc networklayer/ipv6/*.cc networklayer/ipv6/_6lowpan/*.cc networklayer/ipv6tunneling/*.cc networklayer/ldp/*.cc networklayer/manetrouting/*.cc networklayer/manetrouting/PASER/*.cc networklayer/manetrouting/PASER/IP_ADOPTED/*.cc networklayer/manetrouting/PASER/paser_buffer/*.cc networklayer/manetrouting/PASER/paser_configuration/*.cc networklayer/manetrouting/PASER/paser_logic/*.cc networklayer/manetrouting/PASER/paser_logic/cryptography/*.cc networklayer/manetrouting/PASER/paser_logic/message_processing/*.cc networklayer/manetrouting/PASER/paser_logic/route_discovery/*.cc networklayer/manetrouting/PASER/paser_logic/route_maintenance/*.cc networklayer/manetrouting/PASER/paser_message_structure/*.cc networklayer/manetrouting/PASER/paser_socket/*.cc networklayer/manetrouting/PASER/paser_tables/*.cc networklayer/manetrouting/PASER/paser_timer_management/*.cc networklayer/manetrouting/PASER/simple_kdc/*.cc networklayer/manetrouting/PASER/simple_kdc/kdc_message/*.cc networklayer/manetrouting/aodv/*.cc networklayer/manetrouting/aodv/aodv-uu/*.cc networklayer/manetrouting/base/*.cc networklayer/manetrouting/batman/*.cc networklayer/manetrouting/batman/batmand/*.cc networklayer/manetrouting/batman/batmand/orig/*.cc networklayer/manetrouting/dsdv/*.cc networklayer/manetrouting/dsr/*.cc networklayer/manetrouting/dsr/dsr-uu/*.cc networklayer/manetrouting/dymo/*.cc networklayer/manetrouting/dymo/dymoum/*.cc networklayer/manetrouting/dymo_fau/*.cc networklayer/manetrouting/olsr/*.cc networklayer/mpls/*.cc networklayer/ospfv2/*.cc networklayer/ospfv2/interface/*.cc networklayer/ospfv2/messagehandler/*.cc networklayer/ospfv2/neighbor/*.cc networklayer/ospfv2/router/*.cc networklayer/rsvp_te/*.cc networklayer/ted/*.cc nodes/*.cc nodes/ethernet/*.cc nodes/inet/*.cc nodes/ipv6/*.cc nodes/mpls/*.cc nodes/ospfv2/*.cc nodes/rtp/*.cc nodes/wireless/*.cc status/*.cc transport/*.cc transport/contract/*.cc transport/tcp/*.cc transport/tcp/flavours/*.cc transport/tcp/queues/*.cc transport/tcp_common/*.cc transport/udp/*.cc underTest/*.cc util/*.cc util/headerserializers/*.cc util/headerserializers/headers/*.cc util/headerserializers/ipv4/*.cc util/headerserializers/ipv4/headers/*.cc util/headerserializers/tcp/*.cc util/headerserializers/tcp/headers/*.cc util/headerserializers/udp/*.cc util/headerserializers/udp/headers/*.cc world/*.cc world/annotations/*.cc world/obstacles/*.cc world/powercontrol/*.cc world/radio/*.cc world/scenario/*.cc wpan/*.cc wpan/Isabel/*.cc wpan/Isabel/Analysis/*.cc wpan/Isabel/Base/*.cc wpan/applications/*.cc wpan/applications/Ieee802154TestApp/*.cc wpan/linklayer/*.cc wpan/linklayer/ieee802154/*.cc wpan/linklayer/ieee802154/contract/*.cc wpan/linklayer/ieee802154/mac/*.cc wpan/networklayer/*.cc wpan/networklayer/Ieee802154StarRouting/*.cc wpan/networklayer/contract/*.cc wpan/nodes/*.cc wpan/phyLayer/*.cc wpan/phyLayer/ieee802154/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/AppBase.o: applications/AppBase.cc \
	applications/AppBase.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	status/NodeStatus.h
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
	applications/ethernet/EtherAppCli.h \
	applications/ethernet/EtherApp_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	status/NodeStatus.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
	applications/ethernet/EtherAppSrv.h \
	applications/ethernet/EtherApp_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	status/NodeStatus.h
$O/applications/ethernet/EtherApp_m.o: applications/ethernet/EtherApp_m.cc \
	applications/ethernet/EtherApp_m.h \
	base/INETDefs.h
$O/applications/ethernet/EtherTrafGen.o: applications/ethernet/EtherTrafGen.cc \
	applications/ethernet/EtherTrafGen.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	status/NodeStatus.h
$O/applications/ethernet/EthernetApplication.o: applications/ethernet/EthernetApplication.cc \
	applications/ethernet/EtherApp_m.h \
	applications/ethernet/EthernetApplication.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/applications/generic/IPvXTrafGen.o: applications/generic/IPvXTrafGen.cc \
	applications/generic/IPvXTrafGen.h \
	applications/generic/IPvXTrafSink.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h
$O/applications/generic/IPvXTrafSink.o: applications/generic/IPvXTrafSink.cc \
	applications/generic/IPvXTrafGen.h \
	applications/generic/IPvXTrafSink.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
	applications/pingapp/PingApp.h \
	applications/pingapp/PingPayload_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h
$O/applications/pingapp/PingPayload_m.o: applications/pingapp/PingPayload_m.cc \
	applications/pingapp/PingPayload_m.h \
	base/INETDefs.h
$O/applications/pingapp/PingTestApp.o: applications/pingapp/PingTestApp.cc \
	applications/pingapp/PingPayload_m.h \
	applications/pingapp/PingTestApp.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	status/NodeStatus.h
$O/applications/tcpapp/GenericAppMsg_m.o: applications/tcpapp/GenericAppMsg_m.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	base/INETDefs.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
	applications/tcpapp/TCPBasicClientApp.h \
	applications/tcpapp/TCPGenericCliAppBase.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
	applications/tcpapp/TCPEchoApp.h \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPGenericCliAppBase.o: applications/tcpapp/TCPGenericCliAppBase.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPGenericCliAppBase.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPGenericCliAppBasePromis.o: applications/tcpapp/TCPGenericCliAppBasePromis.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPGenericCliAppBasePromis.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPGenericSrvApp.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPGenericSrvThread.h \
	applications/tcpapp/TCPSrvHostApp.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPSessionApp.h \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
	applications/tcpapp/TCPSinkApp.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
	applications/tcpapp/TCPSrvHostApp.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
	applications/tcpapp/TCPGenericCliAppBase.h \
	applications/tcpapp/TelnetApp.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/trafgen/TrafGen.o: applications/trafgen/TrafGen.cc \
	applications/trafgen/TrafGen.h
$O/applications/trafgen/TrafGenPar.o: applications/trafgen/TrafGenPar.cc \
	applications/trafgen/TrafGenPar.h
$O/applications/udpapp/PASERUdpTrafficReceiver.o: applications/udpapp/PASERUdpTrafficReceiver.cc \
	applications/udpapp/PASERUdpTrafficReceiver.h \
	applications/udpapp/PaserTrafficDataMsg_m.h \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	mobility/IMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	mobility/models/RandomWPMobility.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	util/FWMath.h
$O/applications/udpapp/PASERUdpTrafficSender.o: applications/udpapp/PASERUdpTrafficSender.cc \
	applications/udpapp/PASERUdpTrafficSender.h \
	applications/udpapp/PaserTrafficDataMsg_m.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/PaserTrafficDataMsg_m.o: applications/udpapp/PaserTrafficDataMsg_m.cc \
	applications/udpapp/PaserTrafficDataMsg_m.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
	applications/AppBase.h \
	applications/udpapp/UDPBasicApp.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicBurst.o: applications/udpapp/UDPBasicBurst.cc \
	applications/AppBase.h \
	applications/udpapp/UDPBasicBurst.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicBurstNotification.o: applications/udpapp/UDPBasicBurstNotification.cc \
	applications/AppBase.h \
	applications/udpapp/UDPBasicBurst.h \
	applications/udpapp/UDPBasicBurstNotification.h \
	applications/util/AddressModule.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicFlooding.o: applications/udpapp/UDPBasicFlooding.cc \
	applications/AppBase.h \
	applications/udpapp/UDPBasicFlooding.h \
	applications/util/AddressModule.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
	applications/AppBase.h \
	applications/udpapp/UDPEchoApp.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPEchoAppMsg_m.o: applications/udpapp/UDPEchoAppMsg_m.cc \
	applications/udpapp/UDPEchoAppMsg_m.h \
	base/INETDefs.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
	applications/AppBase.h \
	applications/udpapp/UDPSink.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoData_m.o: applications/udpapp/UDPVideoData_m.cc \
	applications/udpapp/UDPVideoData_m.h \
	base/INETDefs.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
	applications/AppBase.h \
	applications/udpapp/UDPVideoStreamCli.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoStreamCli2.o: applications/udpapp/UDPVideoStreamCli2.cc \
	applications/AppBase.h \
	applications/udpapp/UDPVideoStreamCli2.h \
	applications/udpapp/VideoPacket_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
	applications/AppBase.h \
	applications/udpapp/UDPVideoStreamSvr.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoStreamSvr2.o: applications/udpapp/UDPVideoStreamSvr2.cc \
	applications/AppBase.h \
	applications/udpapp/UDPVideoData_m.h \
	applications/udpapp/UDPVideoStreamSvr2.h \
	applications/udpapp/VideoPacket_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/VideoPacket_m.o: applications/udpapp/VideoPacket_m.cc \
	applications/udpapp/VideoPacket_m.h
$O/applications/util/AddressModule.o: applications/util/AddressModule.cc \
	applications/util/AddressModule.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
	base/AbstractQueue.h \
	base/INETDefs.h
$O/base/BasicModule.o: base/BasicModule.cc \
	base/BasicModule.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h
$O/base/ByteArray.o: base/ByteArray.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/INETDefs.h
$O/base/ByteArrayBuffer.o: base/ByteArrayBuffer.cc \
	base/ByteArray.h \
	base/ByteArrayBuffer.h \
	base/ByteArray_m.h \
	base/INETDefs.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/INETDefs.h
$O/base/ByteArrayMessage_m.o: base/ByteArrayMessage_m.cc \
	base/ByteArray.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/INETDefs.h
$O/base/ByteArray_m.o: base/ByteArray_m.cc \
	base/ByteArray_m.h \
	base/INETDefs.h
$O/base/Coord.o: base/Coord.cc \
	base/Coord.h \
	base/INETDefs.h \
	util/FWMath.h
$O/base/InterfaceOperations.o: base/InterfaceOperations.cc
$O/base/Join.o: base/Join.cc \
	base/INETDefs.h
$O/base/LifecycleController.o: base/LifecycleController.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/IScriptable.h \
	base/LifecycleController.h \
	base/LifecycleOperation.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	util/opp_utils.h
$O/base/MMapBoard.o: base/MMapBoard.cc \
	base/INETDefs.h \
	base/MMapBoard.h \
	base/ModuleAccess.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
	base/INETDefs.h \
	base/ModuleAccess.h
$O/base/NedFunctions.o: base/NedFunctions.cc \
	base/INETDefs.h
$O/base/NodeOperations.o: base/NodeOperations.cc \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
	base/INETDefs.h \
	base/NotifierConsts.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
	base/INETDefs.h \
	base/ProtocolMap.h
$O/base/QueueBase.o: base/QueueBase.cc \
	base/AbstractQueue.h \
	base/INETDefs.h \
	base/QueueBase.h
$O/base/QueueWithQoS.o: base/QueueWithQoS.cc \
	base/AbstractQueue.h \
	base/EnqueueHook.h \
	base/INETDefs.h \
	base/QueueWithQoS.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
	base/INETDefs.h \
	base/ReassemblyBuffer.h
$O/base/ResultFilters.o: base/ResultFilters.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/ResultFilters.h \
	mobility/IMobility.h \
	util/FWMath.h
$O/base/Sink.o: base/Sink.cc \
	base/INETDefs.h \
	base/Sink.h
$O/base/Topology.o: base/Topology.cc \
	base/INETDefs.h \
	base/Topology.h \
	util/PatternMatcher.h \
	util/stlutils.h
$O/base/UnimplementedModule.o: base/UnimplementedModule.cc \
	base/INETDefs.h \
	base/UnimplementedModule.h
$O/base/WeightedTopology.o: base/WeightedTopology.cc \
	base/INETDefs.h \
	base/WeightedTopology.h
$O/base/erfc.o: base/erfc.cc
$O/battery/models/BasicBattery.o: battery/models/BasicBattery.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/models/BasicBattery.h
$O/battery/models/InetSimpleBattery.o: battery/models/InetSimpleBattery.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/models/BasicBattery.h \
	battery/models/Energy.h \
	battery/models/InetSimpleBattery.h \
	linklayer/contract/RadioState.h \
	status/NodeStatus.h \
	world/powercontrol/IPowerControl.h
$O/generic/RPSSocket.o: generic/RPSSocket.cc \
	generic/RPSSocket.h
$O/linklayer/channels/LinkFailureManager.o: linklayer/channels/LinkFailureManager.cc \
	linklayer/channels/LinkFailureManager.h \
	linklayer/channels/LinkFailureMessage_m.h \
	linklayer/channels/ProgramedFailureChannel.h
$O/linklayer/channels/LinkFailureMessage_m.o: linklayer/channels/LinkFailureMessage_m.cc \
	linklayer/channels/LinkFailureManager.h \
	linklayer/channels/LinkFailureMessage_m.h
$O/linklayer/channels/MyThroughputMeteringChannel.o: linklayer/channels/MyThroughputMeteringChannel.cc \
	linklayer/channels/MyThroughputMeteringChannel.h
$O/linklayer/channels/ProgramedFailureChannel.o: linklayer/channels/ProgramedFailureChannel.cc \
	linklayer/channels/LinkFailureManager.h \
	linklayer/channels/ProgramedFailureChannel.h
$O/linklayer/collStats/collStats.o: linklayer/collStats/collStats.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/collStats/collStats.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/ModulationType.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/linklayer/common/MACBase.o: linklayer/common/MACBase.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h
$O/linklayer/common/WirelessMacBase.o: linklayer/common/WirelessMacBase.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h
$O/linklayer/contract/Ieee802Ctrl_m.o: linklayer/contract/Ieee802Ctrl_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceToken.h
$O/linklayer/contract/PhyControlInfo_m.o: linklayer/contract/PhyControlInfo_m.cc \
	base/INETDefs.h \
	linklayer/contract/PhyControlInfo_m.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
	base/INETDefs.h \
	linklayer/ethernet/EtherBus.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherEncap.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h
$O/linklayer/ethernet/EtherFrameClassifier.o: linklayer/ethernet/EtherFrameClassifier.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrameClassifier.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherFrame_m.o: linklayer/ethernet/EtherFrame_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
	base/INETDefs.h \
	linklayer/ethernet/EtherHub.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherLLC.h \
	linklayer/ethernet/Ethernet.h \
	status/NodeStatus.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMAC.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h \
	util/opp_utils.h
$O/linklayer/ethernet/EtherMACFullDuplex.o: linklayer/ethernet/EtherMACFullDuplex.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/EtherMACFullDuplex.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h
$O/linklayer/ethernet/switch/MACRelayUnitBase.o: linklayer/ethernet/switch/MACRelayUnitBase.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ethernet/switch/MACRelayUnitBase.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h
$O/linklayer/ethernet/switch/MACRelayUnitNP.o: linklayer/ethernet/switch/MACRelayUnitNP.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ethernet/switch/MACRelayUnitBase.h \
	linklayer/ethernet/switch/MACRelayUnitNP.h
$O/linklayer/ethernet/switch/MACRelayUnitPP.o: linklayer/ethernet/switch/MACRelayUnitPP.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ethernet/switch/MACRelayUnitBase.h \
	linklayer/ethernet/switch/MACRelayUnitPP.h
$O/linklayer/idealwireless/IdealWirelessFrame_m.o: linklayer/idealwireless/IdealWirelessFrame_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/idealwireless/IdealWirelessFrame_m.h
$O/linklayer/idealwireless/IdealWirelessMac.o: linklayer/idealwireless/IdealWirelessMac.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/RadioState.h \
	linklayer/idealwireless/IdealWirelessFrame_m.h \
	linklayer/idealwireless/IdealWirelessMac.h \
	linklayer/radio/IdealAirFrame_m.h \
	linklayer/radio/IdealRadio.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h \
	util/FWMath.h \
	util/opp_utils.h \
	world/radio/IdealChannelModel.h \
	world/radio/IdealChannelModelAccess.h
$O/linklayer/ieee80211/mac/Ieee80211DataRate.o: linklayer/ieee80211/mac/Ieee80211DataRate.cc \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211DataRate.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/radio/ModulationType.h
$O/linklayer/ieee80211/mac/Ieee80211Frame_m.o: linklayer/ieee80211/mac/Ieee80211Frame_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
	base/Coord.h \
	base/FSMA.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211DataRate.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211Mac.h \
	linklayer/ieee80211/mac/Ieee80211eClassifier.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h \
	util/FWMath.h \
	util/opp_utils.h
$O/linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.o: linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.h
$O/linklayer/ieee80211/mac/Ieee80211eClassifier.o: linklayer/ieee80211/mac/Ieee80211eClassifier.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211eClassifier.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket_m.h
$O/linklayer/ieee80211/mac/MultiQueue.o: linklayer/ieee80211/mac/MultiQueue.cc \
	base/INETDefs.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/MultiQueue.h
$O/linklayer/ieee80211/mac/WifiMode.o: linklayer/ieee80211/mac/WifiMode.cc \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211DataRate.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/radio/ModulationType.h
$O/linklayer/ieee80211/mgmt/ETXPacket_m.o: linklayer/ieee80211/mgmt/ETXPacket_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h
$O/linklayer/ieee80211/mgmt/Ieee80211Etx.o: linklayer/ieee80211/mgmt/Ieee80211Etx.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h \
	util/GlobalWirelessLinkInspector.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/RadioState.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	status/NodeStatus.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o: linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	util/FWMath.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h
$O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o: linklayer/ieee80211/mgmt/Ieee80211Primitives_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h
$O/linklayer/ieee80211/radio/BerParseFile.o: linklayer/ieee80211/radio/BerParseFile.cc \
	base/INETDefs.h \
	linklayer/ieee80211/radio/BerParseFile.h
$O/linklayer/ieee80211/radio/Ieee80211RadioModel.o: linklayer/ieee80211/radio/Ieee80211RadioModel.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/BerParseFile.h \
	linklayer/ieee80211/radio/Ieee80211RadioModel.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
	linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/SnrList.h \
	util/FWMath.h
$O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o: linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.cc \
	base/INETDefs.h \
	linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h
$O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o: linklayer/ieee80211/radio/errormodel/nist-error-rate-model.cc \
	base/INETDefs.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
	linklayer/radio/ModulationType.h
$O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o: linklayer/ieee80211/radio/errormodel/yans-error-rate-model.cc \
	base/INETDefs.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
	linklayer/radio/ModulationType.h
$O/linklayer/ieee80211mesh/ethernet/EtherEncapMesh.o: linklayer/ieee80211mesh/ethernet/EtherEncapMesh.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherEncap.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMAC.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211mesh/ethernet/EtherEncapMesh.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h
$O/linklayer/ieee80211mesh/hwmp/hwmp-rtable.o: linklayer/ieee80211mesh/hwmp/hwmp-rtable.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/hwmp/hwmp-rtable.h
$O/linklayer/ieee80211mesh/hwmp/hwmp.o: linklayer/ieee80211mesh/hwmp/hwmp.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211mesh/hwmp/hwmp-rtable.h \
	linklayer/ieee80211mesh/hwmp/hwmp.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/linklayer/ieee80211mesh/locator/BigUint.o: linklayer/ieee80211mesh/locator/BigUint.cc \
	base/INETDefs.h \
	linklayer/ieee80211mesh/locator/BigUint.h
$O/linklayer/ieee80211mesh/locator/LocatorModule.o: linklayer/ieee80211mesh/locator/LocatorModule.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	linklayer/ieee80211mesh/locator/LocatorModule.h \
	linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDP.h \
	util/GlobalWirelessLinkInspector.h
$O/linklayer/ieee80211mesh/locator/LocatorModuleClient.o: linklayer/ieee80211mesh/locator/LocatorModuleClient.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	linklayer/ieee80211mesh/locator/LocatorModuleClient.h \
	linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDP.h
$O/linklayer/ieee80211mesh/locator/locatorPkt_m.o: linklayer/ieee80211mesh/locator/locatorPkt_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h
$O/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.o: linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/FSMA.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211Mac.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.h \
	linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h \
	linklayer/ieee80211mesh/mgmt/lwmpls_data.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/INoiseGenerator.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio.h \
	linklayer/radio/SnrList.h \
	linklayer/radio/propagation/IReceptionModel.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/MeshControlInfo_m.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	status/NodeStatus.h \
	util/FWMath.h \
	util/WirelessNumHops.h \
	util/opp_utils.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.o: linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/FSMA.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211Mac.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.h \
	linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h \
	linklayer/ieee80211mesh/mgmt/lwmpls_data.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/INoiseGenerator.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio.h \
	linklayer/radio/SnrList.h \
	linklayer/radio/propagation/IReceptionModel.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/MeshControlInfo_m.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	networklayer/mpls/MPLSPacket.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ted/LinkStatePacket_m.h \
	networklayer/ted/TED_m.h \
	status/NodeStatus.h \
	util/FWMath.h \
	util/WirelessNumHops.h \
	util/opp_utils.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.o: linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h
$O/linklayer/ieee80211mesh/mgmt/lwmpls_data.o: linklayer/ieee80211mesh/mgmt/lwmpls_data.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/mgmt/lwmpls_data.h
$O/linklayer/loopback/Loopback.o: linklayer/loopback/Loopback.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/TxNotifDetails.h \
	linklayer/loopback/Loopback.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	util/opp_utils.h
$O/linklayer/ppp/PPP.o: linklayer/ppp/PPP.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/TxNotifDetails.h \
	linklayer/ppp/PPP.h \
	linklayer/ppp/PPPFrame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h \
	util/opp_utils.h
$O/linklayer/ppp/PPPFrame_m.o: linklayer/ppp/PPPFrame_m.cc \
	base/INETDefs.h \
	linklayer/ppp/PPPFrame_m.h
$O/linklayer/queue/AlgorithmicDropperBase.o: linklayer/queue/AlgorithmicDropperBase.cc \
	base/INETDefs.h \
	linklayer/queue/AlgorithmicDropperBase.h \
	linklayer/queue/IQueueAccess.h
$O/linklayer/queue/DropTailQueue.o: linklayer/queue/DropTailQueue.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	linklayer/queue/DropTailQueue.h
$O/linklayer/queue/FIFOQueue.o: linklayer/queue/FIFOQueue.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	linklayer/queue/FIFOQueue.h \
	linklayer/queue/IQueueAccess.h
$O/linklayer/queue/PriorityScheduler.o: linklayer/queue/PriorityScheduler.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	linklayer/queue/PriorityScheduler.h \
	linklayer/queue/SchedulerBase.h
$O/linklayer/queue/REDDropper.o: linklayer/queue/REDDropper.cc \
	base/INETDefs.h \
	linklayer/queue/AlgorithmicDropperBase.h \
	linklayer/queue/IQueueAccess.h \
	linklayer/queue/REDDropper.h \
	util/opp_utils.h
$O/linklayer/queue/SchedulerBase.o: linklayer/queue/SchedulerBase.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	linklayer/queue/SchedulerBase.h
$O/linklayer/queue/ThresholdDropper.o: linklayer/queue/ThresholdDropper.cc \
	base/INETDefs.h \
	linklayer/queue/AlgorithmicDropperBase.h \
	linklayer/queue/IQueueAccess.h \
	linklayer/queue/ThresholdDropper.h
$O/linklayer/queue/WRRScheduler.o: linklayer/queue/WRRScheduler.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	linklayer/queue/SchedulerBase.h \
	linklayer/queue/WRRScheduler.h \
	util/opp_utils.h
$O/linklayer/queue/WeightedFairQueue.o: linklayer/queue/WeightedFairQueue.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/queue/IQueueAccess.h \
	linklayer/queue/WeightedFairQueue.h
$O/linklayer/radio/AirFrame_m.o: linklayer/radio/AirFrame_m.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/ModulationType.h \
	util/FWMath.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/GenericRadioModel.h \
	linklayer/radio/IModulation.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/Modulation.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/SnrList.h \
	util/FWMath.h
$O/linklayer/radio/IdealAirFrame_m.o: linklayer/radio/IdealAirFrame_m.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/radio/IdealAirFrame_m.h \
	util/FWMath.h
$O/linklayer/radio/IdealRadio.o: linklayer/radio/IdealRadio.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/RadioState.h \
	linklayer/radio/IdealAirFrame_m.h \
	linklayer/radio/IdealRadio.h \
	status/NodeStatus.h \
	util/FWMath.h \
	world/radio/IdealChannelModel.h \
	world/radio/IdealChannelModelAccess.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
	base/INETDefs.h \
	linklayer/radio/IModulation.h \
	linklayer/radio/Modulation.h
$O/linklayer/radio/Radio.o: linklayer/radio/Radio.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/models/BasicBattery.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/INoiseGenerator.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	linklayer/radio/SnrList.h \
	linklayer/radio/propagation/IReceptionModel.h \
	status/NodeStatus.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/linklayer/radio/Radio80211aControlInfo_m.o: linklayer/radio/Radio80211aControlInfo_m.cc \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio80211aControlInfo_m.h
$O/linklayer/radio/propagation/FreeSpaceModel.o: linklayer/radio/propagation/FreeSpaceModel.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	util/FWMath.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/linklayer/radio/propagation/LogNormalShadowingModel.o: linklayer/radio/propagation/LogNormalShadowingModel.cc \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/LogNormalShadowingModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/NakagamiModel.o: linklayer/radio/propagation/NakagamiModel.cc \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/NakagamiModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/RayleighModel.o: linklayer/radio/propagation/RayleighModel.cc \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/RayleighModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/RiceModel.o: linklayer/radio/propagation/RiceModel.cc \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/RiceModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/TwoRayGroundModel.o: linklayer/radio/propagation/TwoRayGroundModel.cc \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/TwoRayGroundModel.h \
	util/FWMath.h
$O/mobility/models/ANSimMobility.o: mobility/models/ANSimMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/ANSimMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	util/FWMath.h
$O/mobility/models/BonnMotionFileCache.o: mobility/models/BonnMotionFileCache.cc \
	base/INETDefs.h \
	mobility/models/BonnMotionFileCache.h
$O/mobility/models/BonnMotionMobility.o: mobility/models/BonnMotionMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/BonnMotionFileCache.h \
	mobility/models/BonnMotionMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	util/FWMath.h
$O/mobility/models/ChiangMobility.o: mobility/models/ChiangMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/ChiangMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	util/FWMath.h
$O/mobility/models/CircleMobility.o: mobility/models/CircleMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/CircleMobility.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	util/FWMath.h
$O/mobility/models/ConstSpeedMobility.o: mobility/models/ConstSpeedMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/ConstSpeedMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	util/FWMath.h
$O/mobility/models/GaussMarkovMobility.o: mobility/models/GaussMarkovMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/GaussMarkovMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	util/FWMath.h
$O/mobility/models/LaptopModelManager.o: mobility/models/LaptopModelManager.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LaptopModelManager.h \
	mobility/models/MobilityBase.h \
	util/FWMath.h
$O/mobility/models/LineSegmentsMobilityBase.o: mobility/models/LineSegmentsMobilityBase.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	util/FWMath.h
$O/mobility/models/LinearMobility.o: mobility/models/LinearMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LinearMobility.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	util/FWMath.h
$O/mobility/models/LinearNodeDistributionMobility.o: mobility/models/LinearNodeDistributionMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LinearNodeDistributionMobility.h \
	mobility/models/MobilityBase.h \
	mobility/models/StationaryMobility.h \
	util/FWMath.h
$O/mobility/models/MassMobility.o: mobility/models/MassMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MassMobility.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	util/FWMath.h
$O/mobility/models/MoBANCoordinator.o: mobility/models/MoBANCoordinator.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MoBANCoordinator.h \
	mobility/models/MoBANLocal.h \
	mobility/models/MobilityAccess.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	mobility/models/Posture.h \
	mobility/models/PostureTransition.h \
	util/FWMath.h
$O/mobility/models/MoBANLocal.o: mobility/models/MoBANLocal.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MoBANCoordinator.h \
	mobility/models/MoBANLocal.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	mobility/models/Posture.h \
	mobility/models/PostureTransition.h \
	util/FWMath.h
$O/mobility/models/MobilityAccess.o: mobility/models/MobilityAccess.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/IMobility.h \
	mobility/models/MobilityAccess.h \
	util/FWMath.h
$O/mobility/models/MobilityBase.o: mobility/models/MobilityBase.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/MobilityBase.h \
	util/FWMath.h
$O/mobility/models/MovingMobilityBase.o: mobility/models/MovingMobilityBase.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	util/FWMath.h
$O/mobility/models/Ns2MotionMobility.o: mobility/models/Ns2MotionMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	mobility/models/Ns2MotionMobility.h \
	util/FWMath.h
$O/mobility/models/Posture.o: mobility/models/Posture.cc \
	base/Coord.h \
	base/INETDefs.h \
	mobility/models/Posture.h \
	util/FWMath.h
$O/mobility/models/PostureTransition.o: mobility/models/PostureTransition.cc \
	base/Coord.h \
	base/INETDefs.h \
	mobility/models/PostureTransition.h \
	util/FWMath.h
$O/mobility/models/RandomWPMobility.o: mobility/models/RandomWPMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	mobility/models/RandomWPMobility.h \
	util/FWMath.h
$O/mobility/models/RectangleMobility.o: mobility/models/RectangleMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	mobility/models/RectangleMobility.h \
	util/FWMath.h
$O/mobility/models/StaticGridMobility.o: mobility/models/StaticGridMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/MobilityBase.h \
	mobility/models/StaticGridMobility.h \
	mobility/models/StationaryMobility.h \
	util/FWMath.h
$O/mobility/models/StationaryMobility.o: mobility/models/StationaryMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/MobilityBase.h \
	mobility/models/StationaryMobility.h \
	util/FWMath.h
$O/mobility/models/TraCIMobility.o: mobility/models/TraCIMobility.cc
$O/mobility/models/TractorMobility.o: mobility/models/TractorMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	mobility/models/TractorMobility.h \
	util/FWMath.h
$O/mobility/models/TurtleMobility.o: mobility/models/TurtleMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	mobility/models/LineSegmentsMobilityBase.h \
	mobility/models/MobilityBase.h \
	mobility/models/MovingMobilityBase.h \
	mobility/models/TurtleMobility.h \
	util/FWMath.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	status/NodeStatus.h
$O/networklayer/arp/ARPPacket_m.o: networklayer/arp/ARPPacket_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/contract/IPv4Address.h
$O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o: networklayer/autorouting/ipv4/FlatNetworkConfigurator.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/autorouting/ipv4/HostAutoConfigurator.o: networklayer/autorouting/ipv4/HostAutoConfigurator.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/HostAutoConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/autorouting/ipv4/HostAutoConfigurator2.o: networklayer/autorouting/ipv4/HostAutoConfigurator2.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/HostAutoConfigurator2.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o: networklayer/autorouting/ipv4/IPv4NetworkConfigurator.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/Topology.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	util/PatternMatcher.h \
	util/stlutils.h
$O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o: networklayer/autorouting/ipv4/IPv4NodeConfigurator.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/Topology.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	networklayer/autorouting/ipv4/IPv4NodeConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	status/NodeStatus.h \
	util/PatternMatcher.h \
	util/opp_utils.h
$O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o: networklayer/autorouting/ipv6/FlatNetworkConfigurator6.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv6/FlatNetworkConfigurator6.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv6/IPv6InterfaceData.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	status/NodeStatus.h
$O/networklayer/contract/IPProtocolId_m.o: networklayer/contract/IPProtocolId_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h
$O/networklayer/contract/IPv4Address.o: networklayer/contract/IPv4Address.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h
$O/networklayer/contract/IPv4ControlInfo.o: networklayer/contract/IPv4ControlInfo.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/contract/IPv4ControlInfo_m.o: networklayer/contract/IPv4ControlInfo_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo_m.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
	base/INETDefs.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv6Address.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/contract/IPv6ControlInfo_m.o: networklayer/contract/IPv6ControlInfo_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo_m.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/networklayer/contract/IPvXAddressResolver.o: networklayer/contract/IPvXAddressResolver.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/Topology.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	util/PatternMatcher.h
$O/networklayer/extras/Dummy.o: networklayer/extras/Dummy.cc \
	base/INETDefs.h
$O/networklayer/extras/FailureManager.o: networklayer/extras/FailureManager.cc \
	base/INETDefs.h \
	base/IScriptable.h \
	networklayer/extras/FailureManager.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
	applications/pingapp/PingPayload_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	status/NodeStatus.h
$O/networklayer/icmpv6/ICMPv6Message_m.o: networklayer/icmpv6/ICMPv6Message_m.cc \
	base/INETDefs.h \
	networklayer/icmpv6/ICMPv6Message_m.h
$O/networklayer/icmpv6/IPv6NDMessage_m.o: networklayer/icmpv6/IPv6NDMessage_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/IPv6NeighbourCache.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h \
	networklayer/icmpv6/IPv6NeighbourCache.h \
	networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	status/NodeStatus.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/ErrorHandling.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
	applications/pingapp/PingPayload_m.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/ipv4/ICMPMessage_m.o: networklayer/ipv4/ICMPMessage_m.cc \
	base/INETDefs.h \
	networklayer/ipv4/ICMPMessage_m.h
$O/networklayer/ipv4/IGMPMessage_m.o: networklayer/ipv4/IGMPMessage_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IGMPMessage_m.h
$O/networklayer/ipv4/IGMPv2.o: networklayer/ipv4/IGMPv2.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/ipv4/IGMPMessage_m.h \
	networklayer/ipv4/IGMPv2.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/ipv4/IPv4.o: networklayer/ipv4/IPv4.cc \
	base/AbstractQueue.h \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	status/NodeStatus.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/ipv4/IPv4Datagram_m.o: networklayer/ipv4/IPv4Datagram_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/ipv4/IPv4FragBuf.o: networklayer/ipv4/IPv4FragBuf.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/ReassemblyBuffer.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4InterfaceData.h
$O/networklayer/ipv4/IPv4Route.o: networklayer/ipv4/IPv4Route.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/ipv4/IPv4RouteRule.o: networklayer/ipv4/IPv4RouteRule.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4RouteRule.h
$O/networklayer/ipv4/NetworkInfo.o: networklayer/ipv4/NetworkInfo.cc \
	base/INETDefs.h \
	base/IScriptable.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/NetworkInfo.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableParser.h \
	status/NodeStatus.h \
	util/opp_utils.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableParser.h
$O/networklayer/ipv4/RoutingTableRecorder.o: networklayer/ipv4/RoutingTableRecorder.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableRecorder.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
	base/AbstractQueue.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h \
	networklayer/icmpv6/IPv6NeighbourCache.h \
	networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
	networklayer/ipv6/IPv6.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/ipv6/IPv6FragBuf.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6tunneling/IPv6Tunneling.h \
	networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	status/NodeStatus.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6Datagram_m.o: networklayer/ipv6/IPv6Datagram_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ErrorHandling.h
$O/networklayer/ipv6/IPv6ExtensionHeaders.o: networklayer/ipv6/IPv6ExtensionHeaders.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6ExtensionHeaders_m.o: networklayer/ipv6/IPv6ExtensionHeaders_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/ReassemblyBuffer.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/ipv6/IPv6FragBuf.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6InterfaceData.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6tunneling/IPv6Tunneling.h \
	networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	util/opp_utils.h
$O/networklayer/ipv6/_6lowpan/_6lowpan.o: networklayer/ipv6/_6lowpan/_6lowpan.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h \
	networklayer/icmpv6/IPv6NeighbourCache.h \
	networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6/_6lowpan/_6lowpan.h \
	networklayer/ipv6/_6lowpan/_6lowpanDatagram_m.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/ipv6/_6lowpan/_6lowpanDatagram_m.o: networklayer/ipv6/_6lowpan/_6lowpanDatagram_m.cc \
	networklayer/ipv6/_6lowpan/_6lowpanDatagram_m.h
$O/networklayer/ipv6tunneling/IPv6Tunneling.o: networklayer/ipv6tunneling/IPv6Tunneling.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6tunneling/IPv6Tunneling.h \
	status/NodeStatus.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ldp/LDP.h \
	networklayer/ldp/LDPPacket_m.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ted/TED.h \
	networklayer/ted/TEDAccess.h \
	networklayer/ted/TED_m.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/ldp/LDPPacket_m.o: networklayer/ldp/LDPPacket_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ldp/LDPPacket_m.h
$O/networklayer/manetrouting/PASER/IP_ADOPTED/IP_paser.o: networklayer/manetrouting/PASER/IP_ADOPTED/IP_paser.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.o: networklayer/manetrouting/PASER/paser_buffer/PASER_Message_Queue.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.o: networklayer/manetrouting/PASER/paser_configuration/PASER_Configurations.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_logic/PASER_Global.o: networklayer/manetrouting/PASER/paser_logic/PASER_Global.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.o: networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Hash.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.o: networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Root.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.o: networklayer/manetrouting/PASER/paser_logic/cryptography/PASER_Crypto_Sign.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.o: networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_Message_Processing.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.o: networklayer/manetrouting/PASER/paser_logic/message_processing/PASER_RERR_List.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.o: networklayer/manetrouting/PASER/paser_logic/route_discovery/PASER_Route_Discovery.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.o: networklayer/manetrouting/PASER/paser_logic/route_maintenance/PASER_Route_Maintenance.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_MSG.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_Hello.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_TB_RERR.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREP_ACK.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_TU_RREQ.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Key_Refresh.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_RREQ.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_UB_Root_Refresh.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.o: networklayer/manetrouting/PASER/paser_message_structure/PASER_UU_RREP.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_socket/PASER_Socket.o: networklayer/manetrouting/PASER/paser_socket/PASER_Socket.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.o: networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Entry.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.o: networklayer/manetrouting/PASER/paser_tables/PASER_Neighbor_Table.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.o: networklayer/manetrouting/PASER/paser_tables/PASER_RREQ_List.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Entry.o: networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Entry.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.o: networklayer/manetrouting/PASER/paser_tables/PASER_Routing_Table.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.o: networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Message.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.o: networklayer/manetrouting/PASER/paser_timer_management/PASER_Timer_Queue.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/simple_kdc/SimpleKDC.o: networklayer/manetrouting/PASER/simple_kdc/SimpleKDC.cc \
	generic/Configuration.h
$O/networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.o: networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.cc \
	base/INETDefs.h \
	generic/Configuration.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/PASER/paser_configuration/PASER_Definitions.h \
	networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility.h
$O/networklayer/manetrouting/aodv/aodv_msg_struct.o: networklayer/manetrouting/aodv/aodv_msg_struct.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv_msg_struct_m.o: networklayer/manetrouting/aodv/aodv_msg_struct_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility.h
$O/networklayer/manetrouting/aodv/aodv_uu_omnet.o: networklayer/manetrouting/aodv/aodv_uu_omnet.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/packet_queue_omnet.o: networklayer/manetrouting/aodv/packet_queue_omnet.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_hello.o: networklayer/manetrouting/aodv/aodv-uu/aodv_hello.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.o: networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_socket.o: networklayer/manetrouting/aodv/aodv-uu/aodv_socket.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.o: networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/debug_aodv.o: networklayer/manetrouting/aodv/aodv-uu/debug_aodv.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/list.o: networklayer/manetrouting/aodv/aodv-uu/list.cc \
	networklayer/manetrouting/aodv/aodv-uu/list.h
$O/networklayer/manetrouting/aodv/aodv-uu/locality.o: networklayer/manetrouting/aodv/aodv-uu/locality.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/routing_table.o: networklayer/manetrouting/aodv/aodv-uu/routing_table.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/seek_list.o: networklayer/manetrouting/aodv/aodv-uu/seek_list.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.o: networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/base/ControlInfoBreakLink_m.o: networklayer/manetrouting/base/ControlInfoBreakLink_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/manetrouting/base/ControlInfoBreakLink_m.h
$O/networklayer/manetrouting/base/ControlManetRouting_m.o: networklayer/manetrouting/base/ControlManetRouting_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/base/LocatorNotificationInfo_m.o: networklayer/manetrouting/base/LocatorNotificationInfo_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/manetrouting/base/LocatorNotificationInfo_m.h
$O/networklayer/manetrouting/base/ManetAddress.o: networklayer/manetrouting/base/ManetAddress.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/base/ManetRoutingBase.o: networklayer/manetrouting/base/ManetRoutingBase.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	mobility/IMobility.h \
	mobility/models/MobilityAccess.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/GlobalWirelessLinkInspector.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
	wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h
$O/networklayer/manetrouting/base/MeshControlInfo_m.o: networklayer/manetrouting/base/MeshControlInfo_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/manetrouting/base/MeshControlInfo_m.h
$O/networklayer/manetrouting/batman/BatmanMain.o: networklayer/manetrouting/batman/BatmanMain.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/batman/BatmanMain.h \
	networklayer/manetrouting/batman/BatmanMsg.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batmand/batman.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/networklayer/manetrouting/batman/BatmanMsg_m.o: networklayer/manetrouting/batman/BatmanMsg_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h
$O/networklayer/manetrouting/batman/batmand/batman.o: networklayer/manetrouting/batman/batmand/batman.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/batman/BatmanMain.h \
	networklayer/manetrouting/batman/BatmanMsg.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batmand/batman.h \
	util/FWMath.h
$O/networklayer/manetrouting/batman/batmand/bitarray.o: networklayer/manetrouting/batman/batmand/bitarray.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/batman/BatmanMain.h \
	networklayer/manetrouting/batman/BatmanMsg.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batmand/batman.h \
	util/FWMath.h
$O/networklayer/manetrouting/batman/batmand/hna.o: networklayer/manetrouting/batman/batmand/hna.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/batman/BatmanMain.h \
	networklayer/manetrouting/batman/BatmanMsg.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batmand/batman.h \
	util/FWMath.h
$O/networklayer/manetrouting/batman/batmand/originator.o: networklayer/manetrouting/batman/batmand/originator.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/batman/BatmanMain.h \
	networklayer/manetrouting/batman/BatmanMsg.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batmand/batman.h \
	util/FWMath.h
$O/networklayer/manetrouting/batman/batmand/os.o: networklayer/manetrouting/batman/batmand/os.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/batman/BatmanMain.h \
	networklayer/manetrouting/batman/BatmanMsg.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batmand/batman.h \
	util/FWMath.h
$O/networklayer/manetrouting/batman/batmand/ring_buffer.o: networklayer/manetrouting/batman/batmand/ring_buffer.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/batman/BatmanMain.h \
	networklayer/manetrouting/batman/BatmanMsg.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batmand/batman.h \
	util/FWMath.h
$O/networklayer/manetrouting/batman/batmand/schedule.o: networklayer/manetrouting/batman/batmand/schedule.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/batman/BatmanMain.h \
	networklayer/manetrouting/batman/BatmanMsg.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batmand/batman.h \
	util/FWMath.h
$O/networklayer/manetrouting/dsdv/DSDV_2.o: networklayer/manetrouting/dsdv/DSDV_2.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/dsdv/DSDV_2.h \
	networklayer/manetrouting/dsdv/DSDVhello_m.h
$O/networklayer/manetrouting/dsdv/DSDVhello_m.o: networklayer/manetrouting/dsdv/DSDVhello_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/manetrouting/dsdv/DSDVhello_m.h
$O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
	wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/neigh.o: networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dymo/dymo_msg_struct.o: networklayer/manetrouting/dymo/dymo_msg_struct.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h
$O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymo_um_omnet.o: networklayer/manetrouting/dymo/dymo_um_omnet.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/blacklist.o: networklayer/manetrouting/dymo/dymoum/blacklist.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_re.o: networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/MeshControlInfo_m.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/rtable.o: networklayer/manetrouting/dymo/dymoum/rtable.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/timer_queue.o: networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo_fau/DYMO.o: networklayer/manetrouting/dymo_fau/DYMO.cc \
	base/AbstractQueue.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo_fau/DYMO.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
	base/AbstractQueue.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h
$O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	networklayer/contract/IPv4Address.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o: networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o: networklayer/manetrouting/dymo_fau/DYMO_Packet_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o: networklayer/manetrouting/dymo_fau/DYMO_RERR_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o: networklayer/manetrouting/dymo_fau/DYMO_RM_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o: networklayer/manetrouting/dymo_fau/DYMO_RREP_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o: networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
	base/AbstractQueue.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo_fau/DYMO.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
	base/AbstractQueue.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo_fau/DYMO.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o: networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
	base/INETDefs.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
	base/AbstractQueue.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o: networklayer/manetrouting/dymo_fau/DYMO_UERR_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h
$O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
	base/INETDefs.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/olsr/OLSR.o: networklayer/manetrouting/olsr/OLSR.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSROPT.o: networklayer/manetrouting/olsr/OLSROPT.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSROPT.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSR_ETX.o: networklayer/manetrouting/olsr/OLSR_ETX.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX.h \
	networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX.h \
	networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_state.o: networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSR_rtable.o: networklayer/manetrouting/olsr/OLSR_rtable.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSR_state.o: networklayer/manetrouting/olsr/OLSR_state.cc \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSRpkt_m.o: networklayer/manetrouting/olsr/OLSRpkt_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/LIBTable.h \
	util/XMLUtils.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ldp/LDP.h \
	networklayer/ldp/LDPPacket_m.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/mpls/MPLS.h \
	networklayer/mpls/MPLSPacket.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/Utils.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	transport/contract/UDPSocket.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
	base/INETDefs.h \
	networklayer/mpls/MPLSPacket.h
$O/networklayer/ospfv2/OSPFConfigReader.o: networklayer/ospfv2/OSPFConfigReader.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFConfigReader.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	util/PatternMatcher.h \
	util/XMLUtils.h
$O/networklayer/ospfv2/OSPFPacket_m.o: networklayer/ospfv2/OSPFPacket_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ospfv2/OSPFPacket_m.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFConfigReader.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFRouting.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	status/NodeStatus.h
$O/networklayer/ospfv2/OSPFTimer_m.o: networklayer/ospfv2/OSPFTimer_m.cc \
	base/INETDefs.h \
	networklayer/ospfv2/OSPFTimer_m.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/LSA.o: networklayer/ospfv2/router/LSA.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o: networklayer/ospfv2/router/OSPFRoutingTableEntry.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/rsvp_te/IntServ_m.o: networklayer/rsvp_te/IntServ_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ_m.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IScriptable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/rsvp_te/IRSVPClassifier.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVP.h \
	networklayer/rsvp_te/RSVPHelloMsg.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPathMsg.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h \
	networklayer/rsvp_te/RSVPResvMsg.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h \
	networklayer/rsvp_te/SignallingMsg_m.h \
	networklayer/rsvp_te/Utils.h \
	networklayer/ted/TED.h \
	networklayer/ted/TEDAccess.h \
	networklayer/ted/TED_m.h \
	status/NodeStatus.h \
	util/XMLUtils.h \
	util/common.h
$O/networklayer/rsvp_te/RSVPHello_m.o: networklayer/rsvp_te/RSVPHello_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h
$O/networklayer/rsvp_te/RSVPPacket_m.o: networklayer/rsvp_te/RSVPPacket_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket_m.h
$O/networklayer/rsvp_te/RSVPPathMsg_m.o: networklayer/rsvp_te/RSVPPathMsg_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h
$O/networklayer/rsvp_te/RSVPResvMsg_m.o: networklayer/rsvp_te/RSVPResvMsg_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h
$O/networklayer/rsvp_te/SignallingMsg_m.o: networklayer/rsvp_te/SignallingMsg_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/SignallingMsg_m.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IScriptable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/rsvp_te/IRSVPClassifier.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVP.h \
	networklayer/rsvp_te/RSVPAccess.h \
	networklayer/rsvp_te/RSVPHelloMsg.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPathMsg.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h \
	networklayer/rsvp_te/RSVPResvMsg.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h \
	networklayer/rsvp_te/SignallingMsg_m.h \
	networklayer/rsvp_te/SimpleClassifier.h \
	util/XMLUtils.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/Utils.h
$O/networklayer/ted/LinkStatePacket_m.o: networklayer/ted/LinkStatePacket_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ted/LinkStatePacket_m.h \
	networklayer/ted/TED_m.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ted/LinkStatePacket_m.h \
	networklayer/ted/LinkStateRouting.h \
	networklayer/ted/TED.h \
	networklayer/ted/TEDAccess.h \
	networklayer/ted/TED_m.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ted/TED.h \
	networklayer/ted/TED_m.h \
	status/NodeStatus.h
$O/networklayer/ted/TED_m.o: networklayer/ted/TED_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ted/TED_m.h
$O/status/NodeStatus.o: status/NodeStatus.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	status/NodeStatus.h
$O/transport/contract/SCTPCommand_m.o: transport/contract/SCTPCommand_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h
$O/transport/contract/SCTPSocket.o: transport/contract/SCTPSocket.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h
$O/transport/contract/TCPCommand_m.o: transport/contract/TCPCommand_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h
$O/transport/contract/UDPControlInfo_m.o: transport/contract/UDPControlInfo_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
	base/ByteArray.h \
	base/ByteArrayBuffer.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv4/ICMPMessage_m.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp/queues/TCPByteStreamRcvQueue.h \
	transport/tcp/queues/TCPByteStreamSendQueue.h \
	transport/tcp/queues/TCPMsgBasedRcvQueue.h \
	transport/tcp/queues/TCPMsgBasedSendQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	transport/tcp/queues/TCPVirtualDataSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionSackUtil.o: transport/tcp/TCPConnectionSackUtil.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPSACKRexmitQueue.o: transport/tcp/TCPSACKRexmitQueue.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/DumbTCP.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPNewReno.o: transport/tcp/flavours/TCPNewReno.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPNewReno.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPNoCongestionControl.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPReno.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o: transport/tcp/flavours/TCPSegmentTransmitInfoList.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPTahoe.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPVegas.o: transport/tcp/flavours/TCPVegas.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	transport/tcp/flavours/TCPVegas.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPWestwood.o: transport/tcp/flavours/TCPWestwood.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	transport/tcp/flavours/TCPWestwood.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPByteStreamRcvQueue.o: transport/tcp/queues/TCPByteStreamRcvQueue.cc \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/queues/TCPByteStreamRcvQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPByteStreamSendQueue.o: transport/tcp/queues/TCPByteStreamSendQueue.cc \
	base/ByteArray.h \
	base/ByteArrayBuffer.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp/queues/TCPByteStreamSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/queues/TCPMsgBasedRcvQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp/queues/TCPMsgBasedSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp/queues/TCPVirtualDataSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp_common/TCPSegment.o: transport/tcp_common/TCPSegment.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/INETDefs.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp_common/TCPSegment_m.o: transport/tcp_common/TCPSegment_m.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/INETDefs.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp_common/TCPSpoof.o: transport/tcp_common/TCPSpoof.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/tcp_common/TCPSpoof.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/udp/UDP.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/transport/udp/UDPPacket_m.o: transport/udp/UDPPacket_m.cc \
	base/INETDefs.h \
	transport/udp/UDPPacket_m.h
$O/util/Delayer.o: util/Delayer.cc \
	base/INETDefs.h \
	util/Delayer.h
$O/util/GlobalWirelessLinkInspector.o: util/GlobalWirelessLinkInspector.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h \
	util/GlobalWirelessLinkInspector.h
$O/util/Macho.o: util/Macho.cc \
	util/Macho.h
$O/util/MessageChecker.o: util/MessageChecker.cc \
	base/INETDefs.h \
	util/MessageChecker.h
$O/util/NetAnimTrace.o: util/NetAnimTrace.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/IMobility.h \
	util/FWMath.h \
	util/NetAnimTrace.h
$O/util/OrdinalBasedDropper.o: util/OrdinalBasedDropper.cc \
	base/INETDefs.h \
	util/OrdinalBasedDropper.h
$O/util/OrdinalBasedDuplicator.o: util/OrdinalBasedDuplicator.cc \
	base/INETDefs.h \
	util/OrdinalBasedDuplicator.h
$O/util/PacketDump.o: util/PacketDump.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket_m.h \
	util/PacketDump.h
$O/util/PatternMatcher.o: util/PatternMatcher.cc \
	base/INETDefs.h \
	util/PatternMatcher.h
$O/util/PcapDump.o: util/PcapDump.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	transport/udp/UDPPacket_m.h \
	util/PcapDump.h \
	util/headerserializers/ipv4/IPv4Serializer.h
$O/util/PcapRecorder.o: util/PcapRecorder.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	util/PacketDump.h \
	util/PcapDump.h \
	util/PcapRecorder.h
$O/util/TCPDump.o: util/TCPDump.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	util/PacketDump.h \
	util/PcapDump.h \
	util/TCPDump.h
$O/util/ThruputMeter.o: util/ThruputMeter.cc \
	base/INETDefs.h \
	util/ThruputMeter.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc \
	base/INETDefs.h \
	util/ThruputMeteringChannel.h
$O/util/WirelessGetNeig.o: util/WirelessGetNeig.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	mobility/IMobility.h \
	mobility/models/MobilityAccess.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	util/FWMath.h \
	util/WirelessGetNeig.h
$O/util/WirelessNumHops.o: util/WirelessNumHops.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	mobility/IMobility.h \
	mobility/models/MobilityAccess.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	util/FWMath.h \
	util/WirelessNumHops.h
$O/util/XMLUtils.o: util/XMLUtils.cc \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	util/XMLUtils.h
$O/util/common.o: util/common.cc \
	base/INETDefs.h \
	util/common.h
$O/util/dijktraKShortest.o: util/dijktraKShortest.cc \
	base/INETDefs.h \
	util/dijktraKShortest.h \
	util/uint128.h
$O/util/int128.o: util/int128.cc \
	base/INETDefs.h \
	util/int128.h
$O/util/opp_utils.o: util/opp_utils.cc \
	base/INETDefs.h \
	util/opp_utils.h
$O/util/uint128.o: util/uint128.cc \
	base/INETDefs.h \
	util/uint128.h
$O/util/headerserializers/TCPIPchecksum.o: util/headerserializers/TCPIPchecksum.cc \
	base/INETDefs.h \
	util/headerserializers/TCPIPchecksum.h
$O/util/headerserializers/ipv4/ICMPSerializer.o: util/headerserializers/ipv4/ICMPSerializer.cc \
	applications/pingapp/PingPayload_m.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/ipv4/ICMPSerializer.h \
	util/headerserializers/ipv4/IPv4Serializer.h \
	util/headerserializers/ipv4/headers/ip.h \
	util/headerserializers/ipv4/headers/ip_icmp.h
$O/util/headerserializers/ipv4/IGMPSerializer.o: util/headerserializers/ipv4/IGMPSerializer.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IGMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/ipv4/IGMPSerializer.h \
	util/headerserializers/ipv4/IPv4Serializer.h \
	util/headerserializers/ipv4/headers/igmp.h \
	util/headerserializers/ipv4/headers/ip.h
$O/util/headerserializers/ipv4/IPv4Serializer.o: util/headerserializers/ipv4/IPv4Serializer.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IGMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/ipv4/ICMPSerializer.h \
	util/headerserializers/ipv4/IGMPSerializer.h \
	util/headerserializers/ipv4/IPv4Serializer.h \
	util/headerserializers/ipv4/headers/ip.h \
	util/headerserializers/tcp/TCPSerializer.h \
	util/headerserializers/tcp/headers/tcp.h \
	util/headerserializers/udp/UDPSerializer.h
$O/util/headerserializers/tcp/TCPSerializer.o: util/headerserializers/tcp/TCPSerializer.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/tcp/TCPSerializer.h \
	util/headerserializers/tcp/headers/tcp.h
$O/util/headerserializers/udp/UDPSerializer.o: util/headerserializers/udp/UDPSerializer.cc \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/INETDefs.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/udp/UDPSerializer.h \
	util/headerserializers/udp/headers/udp.h
$O/world/annotations/AnnotationDummy.o: world/annotations/AnnotationDummy.cc \
	base/INETDefs.h \
	world/annotations/AnnotationDummy.h
$O/world/annotations/AnnotationManager.o: world/annotations/AnnotationManager.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h
$O/world/obstacles/Obstacle.o: world/obstacles/Obstacle.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h
$O/world/obstacles/ObstacleControl.o: world/obstacles/ObstacleControl.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h
$O/world/powercontrol/PowerControlManager.o: world/powercontrol/PowerControlManager.cc \
	base/INETDefs.h \
	world/powercontrol/IPowerControl.h \
	world/powercontrol/PowerControlManager.h \
	world/powercontrol/PowerControlMessages_m.h
$O/world/powercontrol/PowerControlMessages_m.o: world/powercontrol/PowerControlMessages_m.cc \
	world/powercontrol/PowerControlMessages_m.h
$O/world/radio/ChannelAccess.o: world/radio/ChannelAccess.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	util/FWMath.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/world/radio/ChannelControl.o: world/radio/ChannelControl.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/ModulationType.h \
	util/FWMath.h \
	world/radio/ChannelControl.h \
	world/radio/IChannelControl.h
$O/world/radio/IdealChannelModel.o: world/radio/IdealChannelModel.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/RadioState.h \
	linklayer/radio/IdealAirFrame_m.h \
	linklayer/radio/IdealRadio.h \
	util/FWMath.h \
	world/radio/IdealChannelModel.h \
	world/radio/IdealChannelModelAccess.h
$O/world/radio/IdealChannelModelAccess.o: world/radio/IdealChannelModelAccess.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/IMobility.h \
	util/FWMath.h \
	world/radio/IdealChannelModel.h \
	world/radio/IdealChannelModelAccess.h
$O/world/scenario/ScenarioManager.o: world/scenario/ScenarioManager.cc \
	base/INETDefs.h \
	base/IScriptable.h \
	world/scenario/ScenarioManager.h
$O/wpan/Isabel/Analysis/AnalysisEnergy.o: wpan/Isabel/Analysis/AnalysisEnergy.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/models/BasicBattery.h \
	battery/models/Energy.h \
	mobility/IMobility.h \
	util/FWMath.h \
	world/radio/ChannelControl.h \
	world/radio/IChannelControl.h \
	wpan/Isabel/Analysis/AnalysisEnergy.h
$O/wpan/Isabel/Base/Display.o: wpan/Isabel/Base/Display.cc \
	wpan/Isabel/Base/Display.h
$O/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.o: wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.cc \
	wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.h
$O/wpan/applications/Ieee802154TestApp/Ieee802154TestApp.o: wpan/applications/Ieee802154TestApp/Ieee802154TestApp.cc \
	applications/trafgen/TrafGenPar.h \
	wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.h \
	wpan/applications/Ieee802154TestApp/Ieee802154TestApp.h
$O/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.o: wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h
$O/wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.o: wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
	wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h
$O/wpan/linklayer/ieee802154/mac/Ieee802154Link.o: wpan/linklayer/ieee802154/mac/Ieee802154Link.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	wpan/linklayer/ieee802154/mac/Ieee802154Link.h
$O/wpan/linklayer/ieee802154/mac/Ieee802154Mac.o: wpan/linklayer/ieee802154/mac/Ieee802154Mac.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/INoiseGenerator.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio.h \
	linklayer/radio/SnrList.h \
	linklayer/radio/propagation/IReceptionModel.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
	wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
	wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h \
	wpan/linklayer/ieee802154/mac/Ieee802154Link.h \
	wpan/linklayer/ieee802154/mac/Ieee802154Mac.h \
	wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h \
	wpan/phyLayer/ieee802154/Ieee802154Phy.h
$O/wpan/linklayer/ieee802154/mac/csma802154.o: wpan/linklayer/ieee802154/mac/csma802154.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/INoiseGenerator.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio.h \
	linklayer/radio/SnrList.h \
	linklayer/radio/propagation/IReceptionModel.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
	wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
	wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h \
	wpan/linklayer/ieee802154/mac/Ieee802154Link.h \
	wpan/linklayer/ieee802154/mac/Ieee802154Mac.h \
	wpan/linklayer/ieee802154/mac/csma802154.h \
	wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h \
	wpan/phyLayer/ieee802154/Ieee802154Phy.h
$O/wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.o: wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.cc \
	wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.h \
	wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.h \
	wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h
$O/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.o: wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.cc \
	wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h
$O/wpan/phyLayer/ieee802154/Ieee802154Phy.o: wpan/phyLayer/ieee802154/Ieee802154Phy.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/models/BasicBattery.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/INoiseGenerator.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	linklayer/radio/SnrList.h \
	linklayer/radio/propagation/IReceptionModel.h \
	status/NodeStatus.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
	wpan/phyLayer/ieee802154/Ieee802154Phy.h
$O/wpan/phyLayer/ieee802154/Ieee802154RadioModel.o: wpan/phyLayer/ieee802154/Ieee802154RadioModel.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/SnrList.h \
	util/FWMath.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	wpan/phyLayer/ieee802154/Ieee802154RadioModel.h

