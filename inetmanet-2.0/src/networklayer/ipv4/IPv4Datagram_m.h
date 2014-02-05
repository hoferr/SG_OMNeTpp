//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/ipv4/IPv4Datagram.msg.
//

#ifndef _IPV4DATAGRAM_M_H_
#define _IPV4DATAGRAM_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API 
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API 
#  endif
#endif

// cplusplus {{
#include "IPv4Address.h"
#include "IPProtocolId_m.h"


const int IP_HEADER_BYTES = 20;


const int IP_MAX_HEADER_BYTES = 60;


const unsigned char IPOPTION_COPY_MASK   = 0x80;
const unsigned char IPOPTION_CLASS_MASK  = 0x60;
const unsigned char IPOPTION_NUMBER_MASK = 0x1F;


const unsigned int MAX_IPADDR_OPTION_ENTRIES = 9;
const unsigned int MAX_TIMESTAMP_OPTION_ENTRIES = 4;
// }}



/**
 * Enum generated from <tt>networklayer/ipv4/IPv4Datagram.msg</tt> by opp_msgc.
 * <pre>
 * enum IPOptionClass
 * {
 *     IPOPTION_CLASS_CONTROL = 0;
 *     IPOPTION_CLASS_RESERVED = 1;
 *     IPOPTION_CLASS_DEBUGGING = 2;
 *     IPOPTION_CLASS_RESERVED2 = 3;
 * };
 * </pre>
 */
enum IPOptionClass {
    IPOPTION_CLASS_CONTROL = 0,
    IPOPTION_CLASS_RESERVED = 1,
    IPOPTION_CLASS_DEBUGGING = 2,
    IPOPTION_CLASS_RESERVED2 = 3
};

/**
 * Enum generated from <tt>networklayer/ipv4/IPv4Datagram.msg</tt> by opp_msgc.
 * <pre>
 * enum IPOption
 * {
 *     IPOPTION_END_OF_OPTIONS = 0;
 *     IPOPTION_NO_OPTION = 1;
 *     IPOPTION_STREAM_ID = 8;
 * 
 *     IPOPTION_TIMESTAMP = 68;
 * 
 *     IPOPTION_SECURITY = 130;
 *     IPOPTION_LOOSE_SOURCE_ROUTING = 131;
 *     IPOPTION_RECORD_ROUTE = 136;
 *     IPOPTION_STRICT_SOURCE_ROUTING = 137;
 *     IPOPTION_ROUTER_ALERT = 148;
 * };
 * </pre>
 */
enum IPOption {
    IPOPTION_END_OF_OPTIONS = 0,
    IPOPTION_NO_OPTION = 1,
    IPOPTION_STREAM_ID = 8,
    IPOPTION_TIMESTAMP = 68,
    IPOPTION_SECURITY = 130,
    IPOPTION_LOOSE_SOURCE_ROUTING = 131,
    IPOPTION_RECORD_ROUTE = 136,
    IPOPTION_STRICT_SOURCE_ROUTING = 137,
    IPOPTION_ROUTER_ALERT = 148
};

/**
 * Enum generated from <tt>networklayer/ipv4/IPv4Datagram.msg</tt> by opp_msgc.
 * <pre>
 * enum TimestampFlag
 * {
 *     IP_TIMESTAMP_TIMESTAMP_ONLY = 0;
 *     IP_TIMESTAMP_WITH_ADDRESS = 1;
 *     IP_TIMESTAMP_SENDER_INIT_ADDRESS = 3;
 * }
 * </pre>
 */
enum TimestampFlag {
    IP_TIMESTAMP_TIMESTAMP_ONLY = 0,
    IP_TIMESTAMP_WITH_ADDRESS = 1,
    IP_TIMESTAMP_SENDER_INIT_ADDRESS = 3
};

/**
 * Class generated from <tt>networklayer/ipv4/IPv4Datagram.msg</tt> by opp_msgc.
 * <pre>
 * class IPv4RecordRouteOption
 * {
 *     IPv4Address recordAddress[MAX_IPADDR_OPTION_ENTRIES];
 *     short nextAddressPtr;
 * }
 * </pre>
 */
class INET_API IPv4RecordRouteOption : public ::cObject
{
  protected:
    IPv4Address recordAddress_var[MAX_IPADDR_OPTION_ENTRIES];
    short nextAddressPtr_var;

  private:
    void copy(const IPv4RecordRouteOption& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4RecordRouteOption&);

  public:
    IPv4RecordRouteOption();
    IPv4RecordRouteOption(const IPv4RecordRouteOption& other);
    virtual ~IPv4RecordRouteOption();
    IPv4RecordRouteOption& operator=(const IPv4RecordRouteOption& other);
    virtual IPv4RecordRouteOption *dup() const {return new IPv4RecordRouteOption(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getRecordAddressArraySize() const;
    virtual IPv4Address& getRecordAddress(unsigned int k);
    virtual const IPv4Address& getRecordAddress(unsigned int k) const {return const_cast<IPv4RecordRouteOption*>(this)->getRecordAddress(k);}
    virtual void setRecordAddress(unsigned int k, const IPv4Address& recordAddress);
    virtual short getNextAddressPtr() const;
    virtual void setNextAddressPtr(short nextAddressPtr);
};

inline void doPacking(cCommBuffer *b, IPv4RecordRouteOption& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv4RecordRouteOption& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ipv4/IPv4Datagram.msg</tt> by opp_msgc.
 * <pre>
 * class IPv4TimestampOption
 * {
 *     int flag enum(TimestampFlag);
 *     short overflow;
 *     short nextAddressPtr;
 * 
 *     
 *     
 *     IPv4Address recordAddress[MAX_TIMESTAMP_OPTION_ENTRIES];
 *     simtime_t recordTimestamp[MAX_IPADDR_OPTION_ENTRIES];
 * }
 * </pre>
 */
class INET_API IPv4TimestampOption : public ::cObject
{
  protected:
    int flag_var;
    short overflow_var;
    short nextAddressPtr_var;
    IPv4Address recordAddress_var[MAX_TIMESTAMP_OPTION_ENTRIES];
    simtime_t recordTimestamp_var[MAX_IPADDR_OPTION_ENTRIES];

  private:
    void copy(const IPv4TimestampOption& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4TimestampOption&);

  public:
    IPv4TimestampOption();
    IPv4TimestampOption(const IPv4TimestampOption& other);
    virtual ~IPv4TimestampOption();
    IPv4TimestampOption& operator=(const IPv4TimestampOption& other);
    virtual IPv4TimestampOption *dup() const {return new IPv4TimestampOption(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getFlag() const;
    virtual void setFlag(int flag);
    virtual short getOverflow() const;
    virtual void setOverflow(short overflow);
    virtual short getNextAddressPtr() const;
    virtual void setNextAddressPtr(short nextAddressPtr);
    virtual unsigned int getRecordAddressArraySize() const;
    virtual IPv4Address& getRecordAddress(unsigned int k);
    virtual const IPv4Address& getRecordAddress(unsigned int k) const {return const_cast<IPv4TimestampOption*>(this)->getRecordAddress(k);}
    virtual void setRecordAddress(unsigned int k, const IPv4Address& recordAddress);
    virtual unsigned int getRecordTimestampArraySize() const;
    virtual simtime_t getRecordTimestamp(unsigned int k) const;
    virtual void setRecordTimestamp(unsigned int k, simtime_t recordTimestamp);
};

inline void doPacking(cCommBuffer *b, IPv4TimestampOption& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv4TimestampOption& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ipv4/IPv4Datagram.msg</tt> by opp_msgc.
 * <pre>
 * class IPv4SourceRoutingOption
 * {
 *     IPv4Address recordAddress[MAX_IPADDR_OPTION_ENTRIES];
 *     short nextAddressPtr;
 *     short lastAddressPtr;
 * }
 * </pre>
 */
class INET_API IPv4SourceRoutingOption : public ::cObject
{
  protected:
    IPv4Address recordAddress_var[MAX_IPADDR_OPTION_ENTRIES];
    short nextAddressPtr_var;
    short lastAddressPtr_var;

  private:
    void copy(const IPv4SourceRoutingOption& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4SourceRoutingOption&);

  public:
    IPv4SourceRoutingOption();
    IPv4SourceRoutingOption(const IPv4SourceRoutingOption& other);
    virtual ~IPv4SourceRoutingOption();
    IPv4SourceRoutingOption& operator=(const IPv4SourceRoutingOption& other);
    virtual IPv4SourceRoutingOption *dup() const {return new IPv4SourceRoutingOption(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getRecordAddressArraySize() const;
    virtual IPv4Address& getRecordAddress(unsigned int k);
    virtual const IPv4Address& getRecordAddress(unsigned int k) const {return const_cast<IPv4SourceRoutingOption*>(this)->getRecordAddress(k);}
    virtual void setRecordAddress(unsigned int k, const IPv4Address& recordAddress);
    virtual short getNextAddressPtr() const;
    virtual void setNextAddressPtr(short nextAddressPtr);
    virtual short getLastAddressPtr() const;
    virtual void setLastAddressPtr(short lastAddressPtr);
};

inline void doPacking(cCommBuffer *b, IPv4SourceRoutingOption& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv4SourceRoutingOption& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ipv4/IPv4Datagram.msg</tt> by opp_msgc.
 * <pre>
 * packet IPv4Datagram
 * {
 *     @customize(true);
 * 
 *     short version = 4;
 *     short headerLength = IP_HEADER_BYTES;
 * 
 *     IPv4Address srcAddress;
 *     IPv4Address destAddress;
 * 
 *     int transportProtocol enum(IPProtocolId) = IP_PROT_NONE;
 *     short timeToLive;
 *     int identification;
 *     bool moreFragments;
 *     bool dontFragment;
 *     int fragmentOffset;         
 *     unsigned char typeOfService;  
 *     abstract int diffServCodePoint;  
 *     abstract int explicitCongestionNotification;  
 * 
 *     int optionCode enum(IPOption) = IPOPTION_NO_OPTION;  
 *                                                          
 *     IPv4RecordRouteOption recordRoute;
 *     IPv4TimestampOption timestampOption;
 *     IPv4SourceRoutingOption sourceRoutingOption; 
 *     
 *     
 *     unsigned int totalPayloadLength;
 * }
 * </pre>
 *
 * IPv4Datagram_Base is only useful if it gets subclassed, and IPv4Datagram is derived from it.
 * The minimum code to be written for IPv4Datagram is the following:
 *
 * <pre>
 * class INET_API IPv4Datagram : public IPv4Datagram_Base
 * {
 *   private:
 *     void copy(const IPv4Datagram& other) { ... }

 *   public:
 *     IPv4Datagram(const char *name=NULL, int kind=0) : IPv4Datagram_Base(name,kind) {}
 *     IPv4Datagram(const IPv4Datagram& other) : IPv4Datagram_Base(other) {copy(other);}
 *     IPv4Datagram& operator=(const IPv4Datagram& other) {if (this==&other) return *this; IPv4Datagram_Base::operator=(other); copy(other); return *this;}
 *     virtual IPv4Datagram *dup() const {return new IPv4Datagram(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IPv4Datagram_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IPv4Datagram);
 * </pre>
 */
class INET_API IPv4Datagram_Base : public ::cPacket
{
  protected:
    short version_var;
    short headerLength_var;
    IPv4Address srcAddress_var;
    IPv4Address destAddress_var;
    int transportProtocol_var;
    short timeToLive_var;
    int identification_var;
    bool moreFragments_var;
    bool dontFragment_var;
    int fragmentOffset_var;
    unsigned char typeOfService_var;
    int optionCode_var;
    IPv4RecordRouteOption recordRoute_var;
    IPv4TimestampOption timestampOption_var;
    IPv4SourceRoutingOption sourceRoutingOption_var;
    unsigned int totalPayloadLength_var;

  private:
    void copy(const IPv4Datagram_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4Datagram_Base&);
    // make constructors protected to avoid instantiation
    IPv4Datagram_Base(const char *name=NULL, int kind=0);
    IPv4Datagram_Base(const IPv4Datagram_Base& other);
    // make assignment operator protected to force the user override it
    IPv4Datagram_Base& operator=(const IPv4Datagram_Base& other);

  public:
    virtual ~IPv4Datagram_Base();
    virtual IPv4Datagram_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class IPv4Datagram");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getVersion() const;
    virtual void setVersion(short version);
    virtual short getHeaderLength() const;
    virtual void setHeaderLength(short headerLength);
    virtual IPv4Address& getSrcAddress();
    virtual const IPv4Address& getSrcAddress() const {return const_cast<IPv4Datagram_Base*>(this)->getSrcAddress();}
    virtual void setSrcAddress(const IPv4Address& srcAddress);
    virtual IPv4Address& getDestAddress();
    virtual const IPv4Address& getDestAddress() const {return const_cast<IPv4Datagram_Base*>(this)->getDestAddress();}
    virtual void setDestAddress(const IPv4Address& destAddress);
    virtual int getTransportProtocol() const;
    virtual void setTransportProtocol(int transportProtocol);
    virtual short getTimeToLive() const;
    virtual void setTimeToLive(short timeToLive);
    virtual int getIdentification() const;
    virtual void setIdentification(int identification);
    virtual bool getMoreFragments() const;
    virtual void setMoreFragments(bool moreFragments);
    virtual bool getDontFragment() const;
    virtual void setDontFragment(bool dontFragment);
    virtual int getFragmentOffset() const;
    virtual void setFragmentOffset(int fragmentOffset);
    virtual unsigned char getTypeOfService() const;
    virtual void setTypeOfService(unsigned char typeOfService);
    virtual int getDiffServCodePoint() const = 0;
    virtual void setDiffServCodePoint(int diffServCodePoint) = 0;
    virtual int getExplicitCongestionNotification() const = 0;
    virtual void setExplicitCongestionNotification(int explicitCongestionNotification) = 0;
    virtual int getOptionCode() const;
    virtual void setOptionCode(int optionCode);
    virtual IPv4RecordRouteOption& getRecordRoute();
    virtual const IPv4RecordRouteOption& getRecordRoute() const {return const_cast<IPv4Datagram_Base*>(this)->getRecordRoute();}
    virtual void setRecordRoute(const IPv4RecordRouteOption& recordRoute);
    virtual IPv4TimestampOption& getTimestampOption();
    virtual const IPv4TimestampOption& getTimestampOption() const {return const_cast<IPv4Datagram_Base*>(this)->getTimestampOption();}
    virtual void setTimestampOption(const IPv4TimestampOption& timestampOption);
    virtual IPv4SourceRoutingOption& getSourceRoutingOption();
    virtual const IPv4SourceRoutingOption& getSourceRoutingOption() const {return const_cast<IPv4Datagram_Base*>(this)->getSourceRoutingOption();}
    virtual void setSourceRoutingOption(const IPv4SourceRoutingOption& sourceRoutingOption);
    virtual unsigned int getTotalPayloadLength() const;
    virtual void setTotalPayloadLength(unsigned int totalPayloadLength);
};


#endif // _IPV4DATAGRAM_M_H_
