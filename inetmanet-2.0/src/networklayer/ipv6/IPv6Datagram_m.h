//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/ipv6/IPv6Datagram.msg.
//

#ifndef _IPV6DATAGRAM_M_H_
#define _IPV6DATAGRAM_M_H_

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
#include <iostream>
#include "IPv6Address.h"
#include "IPProtocolId_m.h"
class IPv6ExtensionHeader;
typedef IPv6ExtensionHeader *IPv6ExtensionHeaderPtr;
std::ostream& operator<<(std::ostream& os, IPv6ExtensionHeaderPtr eh);

const int IPv6_HEADER_BYTES = 40;
// }}



/**
 * Class generated from <tt>networklayer/ipv6/IPv6Datagram.msg</tt> by opp_msgc.
 * <pre>
 * packet IPv6Datagram
 * {
 *     @customize(true);
 * 
 *     IPv6Address srcAddress;
 *     IPv6Address destAddress;
 *     unsigned char trafficClass;
 *     abstract int diffServCodePoint;  
 *     abstract int explicitCongestionNotification;  
 *     unsigned int flowLabel;
 *     short hopLimit = 0;
 *     int transportProtocol enum(IPProtocolId);
 * 
 *     abstract IPv6ExtensionHeaderPtr extensionHeader[]; 
 * }
 * </pre>
 *
 * IPv6Datagram_Base is only useful if it gets subclassed, and IPv6Datagram is derived from it.
 * The minimum code to be written for IPv6Datagram is the following:
 *
 * <pre>
 * class INET_API IPv6Datagram : public IPv6Datagram_Base
 * {
 *   private:
 *     void copy(const IPv6Datagram& other) { ... }

 *   public:
 *     IPv6Datagram(const char *name=NULL, int kind=0) : IPv6Datagram_Base(name,kind) {}
 *     IPv6Datagram(const IPv6Datagram& other) : IPv6Datagram_Base(other) {copy(other);}
 *     IPv6Datagram& operator=(const IPv6Datagram& other) {if (this==&other) return *this; IPv6Datagram_Base::operator=(other); copy(other); return *this;}
 *     virtual IPv6Datagram *dup() const {return new IPv6Datagram(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IPv6Datagram_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IPv6Datagram);
 * </pre>
 */
class INET_API IPv6Datagram_Base : public ::cPacket
{
  protected:
    IPv6Address srcAddress_var;
    IPv6Address destAddress_var;
    unsigned char trafficClass_var;
    unsigned int flowLabel_var;
    short hopLimit_var;
    int transportProtocol_var;

  private:
    void copy(const IPv6Datagram_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6Datagram_Base&);
    // make constructors protected to avoid instantiation
    IPv6Datagram_Base(const char *name=NULL, int kind=0);
    IPv6Datagram_Base(const IPv6Datagram_Base& other);
    // make assignment operator protected to force the user override it
    IPv6Datagram_Base& operator=(const IPv6Datagram_Base& other);

  public:
    virtual ~IPv6Datagram_Base();
    virtual IPv6Datagram_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class IPv6Datagram");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv6Address& getSrcAddress();
    virtual const IPv6Address& getSrcAddress() const {return const_cast<IPv6Datagram_Base*>(this)->getSrcAddress();}
    virtual void setSrcAddress(const IPv6Address& srcAddress);
    virtual IPv6Address& getDestAddress();
    virtual const IPv6Address& getDestAddress() const {return const_cast<IPv6Datagram_Base*>(this)->getDestAddress();}
    virtual void setDestAddress(const IPv6Address& destAddress);
    virtual unsigned char getTrafficClass() const;
    virtual void setTrafficClass(unsigned char trafficClass);
    virtual int getDiffServCodePoint() const = 0;
    virtual void setDiffServCodePoint(int diffServCodePoint) = 0;
    virtual int getExplicitCongestionNotification() const = 0;
    virtual void setExplicitCongestionNotification(int explicitCongestionNotification) = 0;
    virtual unsigned int getFlowLabel() const;
    virtual void setFlowLabel(unsigned int flowLabel);
    virtual short getHopLimit() const;
    virtual void setHopLimit(short hopLimit);
    virtual int getTransportProtocol() const;
    virtual void setTransportProtocol(int transportProtocol);
    virtual void setExtensionHeaderArraySize(unsigned int size) = 0;
    virtual unsigned int getExtensionHeaderArraySize() const = 0;
    virtual IPv6ExtensionHeaderPtr& getExtensionHeader(unsigned int k) = 0;
    virtual const IPv6ExtensionHeaderPtr& getExtensionHeader(unsigned int k) const {return const_cast<IPv6Datagram_Base*>(this)->getExtensionHeader(k);}
    virtual void setExtensionHeader(unsigned int k, const IPv6ExtensionHeaderPtr& extensionHeader) = 0;
};

/**
 * Class generated from <tt>networklayer/ipv6/IPv6Datagram.msg</tt> by opp_msgc.
 * <pre>
 * class IPv6ExtensionHeader
 * {
 *     short extensionType;
 *     short byteLength = 8;
 * }
 * </pre>
 */
class INET_API IPv6ExtensionHeader : public ::cObject
{
  protected:
    short extensionType_var;
    short byteLength_var;

  private:
    void copy(const IPv6ExtensionHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6ExtensionHeader&);

  public:
    IPv6ExtensionHeader();
    IPv6ExtensionHeader(const IPv6ExtensionHeader& other);
    virtual ~IPv6ExtensionHeader();
    IPv6ExtensionHeader& operator=(const IPv6ExtensionHeader& other);
    virtual IPv6ExtensionHeader *dup() const {return new IPv6ExtensionHeader(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getExtensionType() const;
    virtual void setExtensionType(short extensionType);
    virtual short getByteLength() const;
    virtual void setByteLength(short byteLength);
};

inline void doPacking(cCommBuffer *b, IPv6ExtensionHeader& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv6ExtensionHeader& obj) {obj.parsimUnpack(b);}


#endif // _IPV6DATAGRAM_M_H_