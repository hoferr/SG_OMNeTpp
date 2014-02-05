//
// Generated file, do not edit! Created by opp_msgc 4.3 from wpan/networklayer/contract/Ieee802154NetworkCtrlInfo.msg.
//

#ifndef _IEEE802154NETWORKCTRLINFO_M_H_
#define _IEEE802154NETWORKCTRLINFO_M_H_

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
using namespace std;
// }}



/**
 * Class generated from <tt>wpan/networklayer/contract/Ieee802154NetworkCtrlInfo.msg</tt> by opp_msgc.
 * <pre>
 * message Ieee802154NetworkCtrlInfo
 * {
 *     
 *     bool toParent;
 *     string destName;
 *     int64_t  netwAddr=-1; 
 * }
 * </pre>
 */
class INET_API Ieee802154NetworkCtrlInfo : public ::cMessage
{
  protected:
    bool toParent_var;
    opp_string destName_var;
    int64_t netwAddr_var;

  private:
    void copy(const Ieee802154NetworkCtrlInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154NetworkCtrlInfo&);

  public:
    Ieee802154NetworkCtrlInfo(const char *name=NULL, int kind=0);
    Ieee802154NetworkCtrlInfo(const Ieee802154NetworkCtrlInfo& other);
    virtual ~Ieee802154NetworkCtrlInfo();
    Ieee802154NetworkCtrlInfo& operator=(const Ieee802154NetworkCtrlInfo& other);
    virtual Ieee802154NetworkCtrlInfo *dup() const {return new Ieee802154NetworkCtrlInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getToParent() const;
    virtual void setToParent(bool toParent);
    virtual const char * getDestName() const;
    virtual void setDestName(const char * destName);
    virtual int64_t getNetwAddr() const;
    virtual void setNetwAddr(int64_t netwAddr);
};

inline void doPacking(cCommBuffer *b, Ieee802154NetworkCtrlInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154NetworkCtrlInfo& obj) {obj.parsimUnpack(b);}


#endif // _IEEE802154NETWORKCTRLINFO_M_H_