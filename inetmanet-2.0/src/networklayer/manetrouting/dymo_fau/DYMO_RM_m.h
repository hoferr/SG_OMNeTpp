//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/manetrouting/dymo_fau/DYMO_RM.msg.
//

#ifndef _DYMO_RM_M_H_
#define _DYMO_RM_M_H_

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
#include "DYMO_PacketBBMessage_m.h"
#include "DYMO_AddressBlock.h"
#include "InspectorHelpers.h"
#include <vector>
#include <sys/types.h>


typedef std::vector<DYMO_AddressBlock> VectorOfDYMOAddressBlocks;
// }}



/**
 * Class generated from <tt>networklayer/manetrouting/dymo_fau/DYMO_RM.msg</tt> by opp_msgc.
 * <pre>
 * message DYMO_RM extends DYMO_PacketBBMessage
 * {
 *     DYMO_AddressBlock targetNode;
 *     DYMO_AddressBlock origNode;
 *     VectorOfDYMOAddressBlocks additionalNodes;
 * }
 * </pre>
 */
class INET_API DYMO_RM : public ::DYMO_PacketBBMessage
{
  protected:
    DYMO_AddressBlock targetNode_var;
    DYMO_AddressBlock origNode_var;
    VectorOfDYMOAddressBlocks additionalNodes_var;

  private:
    void copy(const DYMO_RM& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DYMO_RM&);

  public:
    DYMO_RM(const char *name=NULL, int kind=0);
    DYMO_RM(const DYMO_RM& other);
    virtual ~DYMO_RM();
    DYMO_RM& operator=(const DYMO_RM& other);
    virtual DYMO_RM *dup() const {return new DYMO_RM(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual DYMO_AddressBlock& getTargetNode();
    virtual const DYMO_AddressBlock& getTargetNode() const {return const_cast<DYMO_RM*>(this)->getTargetNode();}
    virtual void setTargetNode(const DYMO_AddressBlock& targetNode);
    virtual DYMO_AddressBlock& getOrigNode();
    virtual const DYMO_AddressBlock& getOrigNode() const {return const_cast<DYMO_RM*>(this)->getOrigNode();}
    virtual void setOrigNode(const DYMO_AddressBlock& origNode);
    virtual VectorOfDYMOAddressBlocks& getAdditionalNodes();
    virtual const VectorOfDYMOAddressBlocks& getAdditionalNodes() const {return const_cast<DYMO_RM*>(this)->getAdditionalNodes();}
    virtual void setAdditionalNodes(const VectorOfDYMOAddressBlocks& additionalNodes);
};

inline void doPacking(cCommBuffer *b, DYMO_RM& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DYMO_RM& obj) {obj.parsimUnpack(b);}


#endif // _DYMO_RM_M_H_
