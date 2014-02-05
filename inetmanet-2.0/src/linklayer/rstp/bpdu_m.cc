//
// Generated file, do not edit! Created by opp_msgc 4.3 from linklayer/rstp/bpdu.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "bpdu_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(BPDU);

BPDU::BPDU(const char *name, int kind) : cPacket(name,kind)
{
    this->rootPathCost_var = 0;
    this->portId_var = 0;
    this->messageAge_var = 0;
    this->maxAge_var = 0;
    this->helloTime_var = 0;
    this->forwardDelay_var = 0;
    this->topologyChangeFlag_var = 0;
    this->ackFlag_var = 0;
    this->proposal_var = 0;
    this->agreement_var = 0;
    this->learning_var = 0;
    this->forwarding_var = 0;
}

BPDU::BPDU(const BPDU& other) : cPacket(other)
{
    copy(other);
}

BPDU::~BPDU()
{
}

BPDU& BPDU::operator=(const BPDU& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void BPDU::copy(const BPDU& other)
{
    this->type_var = other.type_var;
    this->rootBID_var = other.rootBID_var;
    this->rootPathCost_var = other.rootPathCost_var;
    this->senderBID_var = other.senderBID_var;
    this->portId_var = other.portId_var;
    this->messageAge_var = other.messageAge_var;
    this->maxAge_var = other.maxAge_var;
    this->helloTime_var = other.helloTime_var;
    this->forwardDelay_var = other.forwardDelay_var;
    this->topologyChangeFlag_var = other.topologyChangeFlag_var;
    this->ackFlag_var = other.ackFlag_var;
    this->proposal_var = other.proposal_var;
    this->agreement_var = other.agreement_var;
    this->portRole_var = other.portRole_var;
    this->learning_var = other.learning_var;
    this->forwarding_var = other.forwarding_var;
}

void BPDU::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->rootBID_var);
    doPacking(b,this->rootPathCost_var);
    doPacking(b,this->senderBID_var);
    doPacking(b,this->portId_var);
    doPacking(b,this->messageAge_var);
    doPacking(b,this->maxAge_var);
    doPacking(b,this->helloTime_var);
    doPacking(b,this->forwardDelay_var);
    doPacking(b,this->topologyChangeFlag_var);
    doPacking(b,this->ackFlag_var);
    doPacking(b,this->proposal_var);
    doPacking(b,this->agreement_var);
    doPacking(b,this->portRole_var);
    doPacking(b,this->learning_var);
    doPacking(b,this->forwarding_var);
}

void BPDU::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->rootBID_var);
    doUnpacking(b,this->rootPathCost_var);
    doUnpacking(b,this->senderBID_var);
    doUnpacking(b,this->portId_var);
    doUnpacking(b,this->messageAge_var);
    doUnpacking(b,this->maxAge_var);
    doUnpacking(b,this->helloTime_var);
    doUnpacking(b,this->forwardDelay_var);
    doUnpacking(b,this->topologyChangeFlag_var);
    doUnpacking(b,this->ackFlag_var);
    doUnpacking(b,this->proposal_var);
    doUnpacking(b,this->agreement_var);
    doUnpacking(b,this->portRole_var);
    doUnpacking(b,this->learning_var);
    doUnpacking(b,this->forwarding_var);
}

BPDUType& BPDU::getType()
{
    return type_var;
}

void BPDU::setType(const BPDUType& type)
{
    this->type_var = type;
}

BridgeID& BPDU::getRootBID()
{
    return rootBID_var;
}

void BPDU::setRootBID(const BridgeID& rootBID)
{
    this->rootBID_var = rootBID;
}

int BPDU::getRootPathCost() const
{
    return rootPathCost_var;
}

void BPDU::setRootPathCost(int rootPathCost)
{
    this->rootPathCost_var = rootPathCost;
}

BridgeID& BPDU::getSenderBID()
{
    return senderBID_var;
}

void BPDU::setSenderBID(const BridgeID& senderBID)
{
    this->senderBID_var = senderBID;
}

int BPDU::getPortId() const
{
    return portId_var;
}

void BPDU::setPortId(int portId)
{
    this->portId_var = portId;
}

int BPDU::getMessageAge() const
{
    return messageAge_var;
}

void BPDU::setMessageAge(int messageAge)
{
    this->messageAge_var = messageAge;
}

int BPDU::getMaxAge() const
{
    return maxAge_var;
}

void BPDU::setMaxAge(int maxAge)
{
    this->maxAge_var = maxAge;
}

int BPDU::getHelloTime() const
{
    return helloTime_var;
}

void BPDU::setHelloTime(int helloTime)
{
    this->helloTime_var = helloTime;
}

int BPDU::getForwardDelay() const
{
    return forwardDelay_var;
}

void BPDU::setForwardDelay(int forwardDelay)
{
    this->forwardDelay_var = forwardDelay;
}

bool BPDU::getTopologyChangeFlag() const
{
    return topologyChangeFlag_var;
}

void BPDU::setTopologyChangeFlag(bool topologyChangeFlag)
{
    this->topologyChangeFlag_var = topologyChangeFlag;
}

bool BPDU::getAckFlag() const
{
    return ackFlag_var;
}

void BPDU::setAckFlag(bool ackFlag)
{
    this->ackFlag_var = ackFlag;
}

bool BPDU::getProposal() const
{
    return proposal_var;
}

void BPDU::setProposal(bool proposal)
{
    this->proposal_var = proposal;
}

bool BPDU::getAgreement() const
{
    return agreement_var;
}

void BPDU::setAgreement(bool agreement)
{
    this->agreement_var = agreement;
}

PortRole& BPDU::getPortRole()
{
    return portRole_var;
}

void BPDU::setPortRole(const PortRole& portRole)
{
    this->portRole_var = portRole;
}

bool BPDU::getLearning() const
{
    return learning_var;
}

void BPDU::setLearning(bool learning)
{
    this->learning_var = learning;
}

bool BPDU::getForwarding() const
{
    return forwarding_var;
}

void BPDU::setForwarding(bool forwarding)
{
    this->forwarding_var = forwarding;
}

class BPDUDescriptor : public cClassDescriptor
{
  public:
    BPDUDescriptor();
    virtual ~BPDUDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(BPDUDescriptor);

BPDUDescriptor::BPDUDescriptor() : cClassDescriptor("BPDU", "cPacket")
{
}

BPDUDescriptor::~BPDUDescriptor()
{
}

bool BPDUDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BPDU *>(obj)!=NULL;
}

const char *BPDUDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BPDUDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 16+basedesc->getFieldCount(object) : 16;
}

unsigned int BPDUDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<16) ? fieldTypeFlags[field] : 0;
}

const char *BPDUDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "rootBID",
        "rootPathCost",
        "senderBID",
        "portId",
        "messageAge",
        "maxAge",
        "helloTime",
        "forwardDelay",
        "topologyChangeFlag",
        "ackFlag",
        "proposal",
        "agreement",
        "portRole",
        "learning",
        "forwarding",
    };
    return (field>=0 && field<16) ? fieldNames[field] : NULL;
}

int BPDUDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "rootBID")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "rootPathCost")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderBID")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "portId")==0) return base+4;
    if (fieldName[0]=='m' && strcmp(fieldName, "messageAge")==0) return base+5;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxAge")==0) return base+6;
    if (fieldName[0]=='h' && strcmp(fieldName, "helloTime")==0) return base+7;
    if (fieldName[0]=='f' && strcmp(fieldName, "forwardDelay")==0) return base+8;
    if (fieldName[0]=='t' && strcmp(fieldName, "topologyChangeFlag")==0) return base+9;
    if (fieldName[0]=='a' && strcmp(fieldName, "ackFlag")==0) return base+10;
    if (fieldName[0]=='p' && strcmp(fieldName, "proposal")==0) return base+11;
    if (fieldName[0]=='a' && strcmp(fieldName, "agreement")==0) return base+12;
    if (fieldName[0]=='p' && strcmp(fieldName, "portRole")==0) return base+13;
    if (fieldName[0]=='l' && strcmp(fieldName, "learning")==0) return base+14;
    if (fieldName[0]=='f' && strcmp(fieldName, "forwarding")==0) return base+15;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BPDUDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "BPDUType",
        "BridgeID",
        "int",
        "BridgeID",
        "int",
        "int",
        "int",
        "int",
        "int",
        "bool",
        "bool",
        "bool",
        "bool",
        "PortRole",
        "bool",
        "bool",
    };
    return (field>=0 && field<16) ? fieldTypeStrings[field] : NULL;
}

const char *BPDUDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int BPDUDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BPDU *pp = (BPDU *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BPDUDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BPDU *pp = (BPDU *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getType(); return out.str();}
        case 1: {std::stringstream out; out << pp->getRootBID(); return out.str();}
        case 2: return long2string(pp->getRootPathCost());
        case 3: {std::stringstream out; out << pp->getSenderBID(); return out.str();}
        case 4: return long2string(pp->getPortId());
        case 5: return long2string(pp->getMessageAge());
        case 6: return long2string(pp->getMaxAge());
        case 7: return long2string(pp->getHelloTime());
        case 8: return long2string(pp->getForwardDelay());
        case 9: return bool2string(pp->getTopologyChangeFlag());
        case 10: return bool2string(pp->getAckFlag());
        case 11: return bool2string(pp->getProposal());
        case 12: return bool2string(pp->getAgreement());
        case 13: {std::stringstream out; out << pp->getPortRole(); return out.str();}
        case 14: return bool2string(pp->getLearning());
        case 15: return bool2string(pp->getForwarding());
        default: return "";
    }
}

bool BPDUDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BPDU *pp = (BPDU *)object; (void)pp;
    switch (field) {
        case 2: pp->setRootPathCost(string2long(value)); return true;
        case 4: pp->setPortId(string2long(value)); return true;
        case 5: pp->setMessageAge(string2long(value)); return true;
        case 6: pp->setMaxAge(string2long(value)); return true;
        case 7: pp->setHelloTime(string2long(value)); return true;
        case 8: pp->setForwardDelay(string2long(value)); return true;
        case 9: pp->setTopologyChangeFlag(string2bool(value)); return true;
        case 10: pp->setAckFlag(string2bool(value)); return true;
        case 11: pp->setProposal(string2bool(value)); return true;
        case 12: pp->setAgreement(string2bool(value)); return true;
        case 14: pp->setLearning(string2bool(value)); return true;
        case 15: pp->setForwarding(string2bool(value)); return true;
        default: return false;
    }
}

const char *BPDUDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "BPDUType",
        "BridgeID",
        NULL,
        "BridgeID",
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        "PortRole",
        NULL,
        NULL,
    };
    return (field>=0 && field<16) ? fieldStructNames[field] : NULL;
}

void *BPDUDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BPDU *pp = (BPDU *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getType()); break;
        case 1: return (void *)(&pp->getRootBID()); break;
        case 3: return (void *)(&pp->getSenderBID()); break;
        case 13: return (void *)(&pp->getPortRole()); break;
        default: return NULL;
    }
}

Register_Class(CBPDU);

CBPDU::CBPDU(const char *name, int kind) : BPDU(name,kind)
{
    this->setType(CONF_BPDU);
}

CBPDU::CBPDU(const CBPDU& other) : BPDU(other)
{
    copy(other);
}

CBPDU::~CBPDU()
{
}

CBPDU& CBPDU::operator=(const CBPDU& other)
{
    if (this==&other) return *this;
    BPDU::operator=(other);
    copy(other);
    return *this;
}

void CBPDU::copy(const CBPDU& other)
{
}

void CBPDU::parsimPack(cCommBuffer *b)
{
    BPDU::parsimPack(b);
}

void CBPDU::parsimUnpack(cCommBuffer *b)
{
    BPDU::parsimUnpack(b);
}

class CBPDUDescriptor : public cClassDescriptor
{
  public:
    CBPDUDescriptor();
    virtual ~CBPDUDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(CBPDUDescriptor);

CBPDUDescriptor::CBPDUDescriptor() : cClassDescriptor("CBPDU", "BPDU")
{
}

CBPDUDescriptor::~CBPDUDescriptor()
{
}

bool CBPDUDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CBPDU *>(obj)!=NULL;
}

const char *CBPDUDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CBPDUDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int CBPDUDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *CBPDUDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int CBPDUDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *CBPDUDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *CBPDUDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int CBPDUDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CBPDU *pp = (CBPDU *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string CBPDUDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    CBPDU *pp = (CBPDU *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool CBPDUDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CBPDU *pp = (CBPDU *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *CBPDUDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *CBPDUDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CBPDU *pp = (CBPDU *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCNBPDU);

TCNBPDU::TCNBPDU(const char *name, int kind) : BPDU(name,kind)
{
    this->setType(TCN_BPDU);
}

TCNBPDU::TCNBPDU(const TCNBPDU& other) : BPDU(other)
{
    copy(other);
}

TCNBPDU::~TCNBPDU()
{
}

TCNBPDU& TCNBPDU::operator=(const TCNBPDU& other)
{
    if (this==&other) return *this;
    BPDU::operator=(other);
    copy(other);
    return *this;
}

void TCNBPDU::copy(const TCNBPDU& other)
{
}

void TCNBPDU::parsimPack(cCommBuffer *b)
{
    BPDU::parsimPack(b);
}

void TCNBPDU::parsimUnpack(cCommBuffer *b)
{
    BPDU::parsimUnpack(b);
}

class TCNBPDUDescriptor : public cClassDescriptor
{
  public:
    TCNBPDUDescriptor();
    virtual ~TCNBPDUDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(TCNBPDUDescriptor);

TCNBPDUDescriptor::TCNBPDUDescriptor() : cClassDescriptor("TCNBPDU", "BPDU")
{
}

TCNBPDUDescriptor::~TCNBPDUDescriptor()
{
}

bool TCNBPDUDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCNBPDU *>(obj)!=NULL;
}

const char *TCNBPDUDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCNBPDUDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int TCNBPDUDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *TCNBPDUDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int TCNBPDUDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCNBPDUDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *TCNBPDUDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int TCNBPDUDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCNBPDU *pp = (TCNBPDU *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCNBPDUDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCNBPDU *pp = (TCNBPDU *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool TCNBPDUDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCNBPDU *pp = (TCNBPDU *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TCNBPDUDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *TCNBPDUDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCNBPDU *pp = (TCNBPDU *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


