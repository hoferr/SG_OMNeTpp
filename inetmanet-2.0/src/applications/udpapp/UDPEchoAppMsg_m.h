//
// Generated file, do not edit! Created by opp_msgc 4.3 from applications/udpapp/UDPEchoAppMsg.msg.
//

#ifndef _UDPECHOAPPMSG_M_H_
#define _UDPECHOAPPMSG_M_H_

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
#include "INETDefs.h"
// }}



/**
 * Class generated from <tt>applications/udpapp/UDPEchoAppMsg.msg</tt> by opp_msgc.
 * <pre>
 * packet UDPEchoAppMsg
 * {
 *     bool isRequest = true;
 * }
 * </pre>
 */
class INET_API UDPEchoAppMsg : public ::cPacket
{
  protected:
    bool isRequest_var;

  private:
    void copy(const UDPEchoAppMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const UDPEchoAppMsg&);

  public:
    UDPEchoAppMsg(const char *name=NULL, int kind=0);
    UDPEchoAppMsg(const UDPEchoAppMsg& other);
    virtual ~UDPEchoAppMsg();
    UDPEchoAppMsg& operator=(const UDPEchoAppMsg& other);
    virtual UDPEchoAppMsg *dup() const {return new UDPEchoAppMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getIsRequest() const;
    virtual void setIsRequest(bool isRequest);
};

inline void doPacking(cCommBuffer *b, UDPEchoAppMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, UDPEchoAppMsg& obj) {obj.parsimUnpack(b);}


#endif // _UDPECHOAPPMSG_M_H_
