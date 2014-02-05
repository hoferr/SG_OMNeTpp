//
// Generated file, do not edit! Created by opp_msgc 4.3 from transport/rtp/RTCPPacket1.msg.
//

#ifndef _RTCPPACKET1_M_H_
#define _RTCPPACKET1_M_H_

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



/**
 * Enum generated from <tt>transport/rtp/RTCPPacket1.msg</tt> by opp_msgc.
 * <pre>
 * enum RTCPPacketType
 * {
 *     RTCP_PT_UNDEF =   0; 
 *     RTCP_PT_SR    = 200; 
 *     RTCP_PT_RR    = 201; 
 *     RTCP_PT_SDES  = 202; 
 *     RTCP_PT_BYE   = 203; 
 * };
 * </pre>
 */
enum RTCPPacketType {
    RTCP_PT_UNDEF = 0,
    RTCP_PT_SR = 200,
    RTCP_PT_RR = 201,
    RTCP_PT_SDES = 202,
    RTCP_PT_BYE = 203
};

/**
 * Class generated from <tt>transport/rtp/RTCPPacket1.msg</tt> by opp_msgc.
 * <pre>
 * packet RTCPPacket
 * {
 *     byteLength = 4;
 *     @customize(true);  
 *     int8 version = 2;
 *     bool padding = 0;
 *     short count = 0;
 *     short packetType enum(RTCPPacketType) = RTCP_PT_UNDEF;
 *     abstract int rtcpLength;
 * }
 * </pre>
 *
 * RTCPPacket_Base is only useful if it gets subclassed, and RTCPPacket is derived from it.
 * The minimum code to be written for RTCPPacket is the following:
 *
 * <pre>
 * class INET_API RTCPPacket : public RTCPPacket_Base
 * {
 *   private:
 *     void copy(const RTCPPacket& other) { ... }

 *   public:
 *     RTCPPacket(const char *name=NULL, int kind=0) : RTCPPacket_Base(name,kind) {}
 *     RTCPPacket(const RTCPPacket& other) : RTCPPacket_Base(other) {copy(other);}
 *     RTCPPacket& operator=(const RTCPPacket& other) {if (this==&other) return *this; RTCPPacket_Base::operator=(other); copy(other); return *this;}
 *     virtual RTCPPacket *dup() const {return new RTCPPacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RTCPPacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RTCPPacket);
 * </pre>
 */
class INET_API RTCPPacket_Base : public ::cPacket
{
  protected:
    int8 version_var;
    bool padding_var;
    short count_var;
    short packetType_var;

  private:
    void copy(const RTCPPacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTCPPacket_Base&);
    // make constructors protected to avoid instantiation
    RTCPPacket_Base(const char *name=NULL, int kind=0);
    RTCPPacket_Base(const RTCPPacket_Base& other);
    // make assignment operator protected to force the user override it
    RTCPPacket_Base& operator=(const RTCPPacket_Base& other);

  public:
    virtual ~RTCPPacket_Base();
    virtual RTCPPacket_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RTCPPacket");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int8 getVersion() const;
    virtual void setVersion(int8 version);
    virtual bool getPadding() const;
    virtual void setPadding(bool padding);
    virtual short getCount() const;
    virtual void setCount(short count);
    virtual short getPacketType() const;
    virtual void setPacketType(short packetType);
    virtual int getRtcpLength() const = 0;
    virtual void setRtcpLength(int rtcpLength) = 0;
};

/**
 * Class generated from <tt>transport/rtp/RTCPPacket1.msg</tt> by opp_msgc.
 * <pre>
 * packet RTCPCompoundPacket
 * {
 *     byteLength = 0;
 *     @customize(true);  
 *     cArray rtcpPackets;
 * }
 * </pre>
 *
 * RTCPCompoundPacket_Base is only useful if it gets subclassed, and RTCPCompoundPacket is derived from it.
 * The minimum code to be written for RTCPCompoundPacket is the following:
 *
 * <pre>
 * class INET_API RTCPCompoundPacket : public RTCPCompoundPacket_Base
 * {
 *   private:
 *     void copy(const RTCPCompoundPacket& other) { ... }

 *   public:
 *     RTCPCompoundPacket(const char *name=NULL, int kind=0) : RTCPCompoundPacket_Base(name,kind) {}
 *     RTCPCompoundPacket(const RTCPCompoundPacket& other) : RTCPCompoundPacket_Base(other) {copy(other);}
 *     RTCPCompoundPacket& operator=(const RTCPCompoundPacket& other) {if (this==&other) return *this; RTCPCompoundPacket_Base::operator=(other); copy(other); return *this;}
 *     virtual RTCPCompoundPacket *dup() const {return new RTCPCompoundPacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RTCPCompoundPacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RTCPCompoundPacket);
 * </pre>
 */
class INET_API RTCPCompoundPacket_Base : public ::cPacket
{
  protected:
    cArray rtcpPackets_var;

  private:
    void copy(const RTCPCompoundPacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTCPCompoundPacket_Base&);
    // make constructors protected to avoid instantiation
    RTCPCompoundPacket_Base(const char *name=NULL, int kind=0);
    RTCPCompoundPacket_Base(const RTCPCompoundPacket_Base& other);
    // make assignment operator protected to force the user override it
    RTCPCompoundPacket_Base& operator=(const RTCPCompoundPacket_Base& other);

  public:
    virtual ~RTCPCompoundPacket_Base();
    virtual RTCPCompoundPacket_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RTCPCompoundPacket");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual cArray& getRtcpPackets();
    virtual const cArray& getRtcpPackets() const {return const_cast<RTCPCompoundPacket_Base*>(this)->getRtcpPackets();}
    virtual void setRtcpPackets(const cArray& rtcpPackets);
};


#endif // _RTCPPACKET1_M_H_
