//
// Generated file, do not edit! Created by opp_msgc 4.3 from linklayer/ieee80211mesh/mgmt/LWMPLSPacket.msg.
//

#ifndef _LWMPLSPACKET_M_H_
#define _LWMPLSPACKET_M_H_

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
#include "MACAddress.h"
// }}



/**
 * Enum generated from <tt>linklayer/ieee80211mesh/mgmt/LWMPLSPacket.msg</tt> by opp_msgc.
 * <pre>
 * enum LwmplsType
 * {
 *   WMPLS_NORMAL    = 0;
 *   WMPLS_BEGIN     = 1;
 *   WMPLS_REFRES    = 2;
 *   WMPLS_END       = 3;
 *   WMPLS_BREAK     = 4;
 *   WMPLS_NOTFOUND  = 5;
 *   WMPLS_ACK       = 6;
 *   WMPLS_ADITIONAL = 7;
 *   WMPLS_BEGIN_W_ROUTE = 8;
 *   WMPLS_SEND = 9;
 *   WMPLS_BROADCAST=10;
 *   
 *   WMPLS_MACBASEDLABEL_BEGIN=11;
 *   WMPLS_MACBASEDLABEL_BEGIN_W_ROUTE=12;
 *   WMPLS_ANNOUNCE_GATEWAY =14;
 *   WMPLS_REQUEST_GATEWAY =15;
 * };
 * </pre>
 */
enum LwmplsType {
    WMPLS_NORMAL = 0,
    WMPLS_BEGIN = 1,
    WMPLS_REFRES = 2,
    WMPLS_END = 3,
    WMPLS_BREAK = 4,
    WMPLS_NOTFOUND = 5,
    WMPLS_ACK = 6,
    WMPLS_ADITIONAL = 7,
    WMPLS_BEGIN_W_ROUTE = 8,
    WMPLS_SEND = 9,
    WMPLS_BROADCAST = 10,
    WMPLS_MACBASEDLABEL_BEGIN = 11,
    WMPLS_MACBASEDLABEL_BEGIN_W_ROUTE = 12,
    WMPLS_ANNOUNCE_GATEWAY = 14,
    WMPLS_REQUEST_GATEWAY = 15
};

/**
 * Class generated from <tt>linklayer/ieee80211mesh/mgmt/LWMPLSPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet LWMPLSPacket
 * {
 *      int label;
 *      int labelReturn;
 *      int type enum(LwmplsType); 
 *      bool nextHeader=false; 
 *              
 *      unsigned int counter;
 *      byteLength = 6;
 *      MACAddress source; 
 *      MACAddress dest;   
 *      short TTL;
 *      MACAddress vectorAddress[];
 * };
 * </pre>
 */
class INET_API LWMPLSPacket : public ::cPacket
{
  protected:
    int label_var;
    int labelReturn_var;
    int type_var;
    bool nextHeader_var;
    unsigned int counter_var;
    MACAddress source_var;
    MACAddress dest_var;
    short TTL_var;
    MACAddress *vectorAddress_var; // array ptr
    unsigned int vectorAddress_arraysize;

  private:
    void copy(const LWMPLSPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LWMPLSPacket&);

  public:
    LWMPLSPacket(const char *name=NULL, int kind=0);
    LWMPLSPacket(const LWMPLSPacket& other);
    virtual ~LWMPLSPacket();
    LWMPLSPacket& operator=(const LWMPLSPacket& other);
    virtual LWMPLSPacket *dup() const {return new LWMPLSPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getLabel() const;
    virtual void setLabel(int label);
    virtual int getLabelReturn() const;
    virtual void setLabelReturn(int labelReturn);
    virtual int getType() const;
    virtual void setType(int type);
    virtual bool getNextHeader() const;
    virtual void setNextHeader(bool nextHeader);
    virtual unsigned int getCounter() const;
    virtual void setCounter(unsigned int counter);
    virtual MACAddress& getSource();
    virtual const MACAddress& getSource() const {return const_cast<LWMPLSPacket*>(this)->getSource();}
    virtual void setSource(const MACAddress& source);
    virtual MACAddress& getDest();
    virtual const MACAddress& getDest() const {return const_cast<LWMPLSPacket*>(this)->getDest();}
    virtual void setDest(const MACAddress& dest);
    virtual short getTTL() const;
    virtual void setTTL(short TTL);
    virtual void setVectorAddressArraySize(unsigned int size);
    virtual unsigned int getVectorAddressArraySize() const;
    virtual MACAddress& getVectorAddress(unsigned int k);
    virtual const MACAddress& getVectorAddress(unsigned int k) const {return const_cast<LWMPLSPacket*>(this)->getVectorAddress(k);}
    virtual void setVectorAddress(unsigned int k, const MACAddress& vectorAddress);
};

inline void doPacking(cCommBuffer *b, LWMPLSPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LWMPLSPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211mesh/mgmt/LWMPLSPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet  LWMPLSControl extends LWMPLSPacket
 * {
 *      byteLength = 12;
 *      unsigned char gateAddressPtr[];
 *      unsigned char assocAddressPtr[];
 * };
 * </pre>
 */
class INET_API LWMPLSControl : public ::LWMPLSPacket
{
  protected:
    unsigned char *gateAddressPtr_var; // array ptr
    unsigned int gateAddressPtr_arraysize;
    unsigned char *assocAddressPtr_var; // array ptr
    unsigned int assocAddressPtr_arraysize;

  private:
    void copy(const LWMPLSControl& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LWMPLSControl&);

  public:
    LWMPLSControl(const char *name=NULL, int kind=0);
    LWMPLSControl(const LWMPLSControl& other);
    virtual ~LWMPLSControl();
    LWMPLSControl& operator=(const LWMPLSControl& other);
    virtual LWMPLSControl *dup() const {return new LWMPLSControl(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setGateAddressPtrArraySize(unsigned int size);
    virtual unsigned int getGateAddressPtrArraySize() const;
    virtual unsigned char getGateAddressPtr(unsigned int k) const;
    virtual void setGateAddressPtr(unsigned int k, unsigned char gateAddressPtr);
    virtual void setAssocAddressPtrArraySize(unsigned int size);
    virtual unsigned int getAssocAddressPtrArraySize() const;
    virtual unsigned char getAssocAddressPtr(unsigned int k) const;
    virtual void setAssocAddressPtr(unsigned int k, unsigned char assocAddressPtr);
};

inline void doPacking(cCommBuffer *b, LWMPLSControl& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LWMPLSControl& obj) {obj.parsimUnpack(b);}


#endif // _LWMPLSPACKET_M_H_