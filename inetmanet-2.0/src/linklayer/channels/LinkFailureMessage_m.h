//
// Generated file, do not edit! Created by opp_msgc 4.3 from linklayer/channels/LinkFailureMessage.msg.
//

#ifndef _LINKFAILUREMESSAGE_M_H_
#define _LINKFAILUREMESSAGE_M_H_

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
#include "LinkFailureManager.h"
// }}



/**
 * Class generated from <tt>linklayer/channels/LinkFailureMessage.msg</tt> by opp_msgc.
 * <pre>
 * message LinkFailureMessage {
 *     int module_id;
 *     int port_id;
 *     LinkState state;
 *     string description;
 * }
 * </pre>
 */
class INET_API LinkFailureMessage : public ::cMessage
{
  protected:
    int module_id_var;
    int port_id_var;
    LinkState state_var;
    opp_string description_var;

  private:
    void copy(const LinkFailureMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LinkFailureMessage&);

  public:
    LinkFailureMessage(const char *name=NULL, int kind=0);
    LinkFailureMessage(const LinkFailureMessage& other);
    virtual ~LinkFailureMessage();
    LinkFailureMessage& operator=(const LinkFailureMessage& other);
    virtual LinkFailureMessage *dup() const {return new LinkFailureMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getModule_id() const;
    virtual void setModule_id(int module_id);
    virtual int getPort_id() const;
    virtual void setPort_id(int port_id);
    virtual LinkState& getState();
    virtual const LinkState& getState() const {return const_cast<LinkFailureMessage*>(this)->getState();}
    virtual void setState(const LinkState& state);
    virtual const char * getDescription() const;
    virtual void setDescription(const char * description);
};

inline void doPacking(cCommBuffer *b, LinkFailureMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LinkFailureMessage& obj) {obj.parsimUnpack(b);}


#endif // _LINKFAILUREMESSAGE_M_H_
