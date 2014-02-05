//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/ipv6/_6lowpan/_6lowpanDatagram.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "_6lowpanDatagram_m.h"

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




Register_Class(_6lowpanDatagram);

_6lowpanDatagram::_6lowpanDatagram(const char *name, int kind) : cPacket(name,kind)
{
    this->transportMessageKind_var = 0;
    payload_arraysize = 0;
    this->payload_var = 0;
}

_6lowpanDatagram::_6lowpanDatagram(const _6lowpanDatagram& other) : cPacket(other)
{
    payload_arraysize = 0;
    this->payload_var = 0;
    copy(other);
}

_6lowpanDatagram::~_6lowpanDatagram()
{
    delete [] payload_var;
}

_6lowpanDatagram& _6lowpanDatagram::operator=(const _6lowpanDatagram& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void _6lowpanDatagram::copy(const _6lowpanDatagram& other)
{
    this->transportMessageKind_var = other.transportMessageKind_var;
    delete [] this->payload_var;
    this->payload_var = (other.payload_arraysize==0) ? NULL : new unsigned char[other.payload_arraysize];
    payload_arraysize = other.payload_arraysize;
    for (unsigned int i=0; i<payload_arraysize; i++)
        this->payload_var[i] = other.payload_var[i];
}

void _6lowpanDatagram::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->transportMessageKind_var);
    b->pack(payload_arraysize);
    doPacking(b,this->payload_var,payload_arraysize);
}

void _6lowpanDatagram::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->transportMessageKind_var);
    delete [] this->payload_var;
    b->unpack(payload_arraysize);
    if (payload_arraysize==0) {
        this->payload_var = 0;
    } else {
        this->payload_var = new unsigned char[payload_arraysize];
        doUnpacking(b,this->payload_var,payload_arraysize);
    }
}

short _6lowpanDatagram::getTransportMessageKind() const
{
    return transportMessageKind_var;
}

void _6lowpanDatagram::setTransportMessageKind(short transportMessageKind)
{
    this->transportMessageKind_var = transportMessageKind;
}

void _6lowpanDatagram::setPayloadArraySize(unsigned int size)
{
    unsigned char *payload_var2 = (size==0) ? NULL : new unsigned char[size];
    unsigned int sz = payload_arraysize < size ? payload_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        payload_var2[i] = this->payload_var[i];
    for (unsigned int i=sz; i<size; i++)
        payload_var2[i] = 0;
    payload_arraysize = size;
    delete [] this->payload_var;
    this->payload_var = payload_var2;
}

unsigned int _6lowpanDatagram::getPayloadArraySize() const
{
    return payload_arraysize;
}

unsigned char _6lowpanDatagram::getPayload(unsigned int k) const
{
    if (k>=payload_arraysize) throw cRuntimeError("Array of size %d indexed by %d", payload_arraysize, k);
    return payload_var[k];
}

void _6lowpanDatagram::setPayload(unsigned int k, unsigned char payload)
{
    if (k>=payload_arraysize) throw cRuntimeError("Array of size %d indexed by %d", payload_arraysize, k);
    this->payload_var[k] = payload;
}

class _6lowpanDatagramDescriptor : public cClassDescriptor
{
  public:
    _6lowpanDatagramDescriptor();
    virtual ~_6lowpanDatagramDescriptor();

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

Register_ClassDescriptor(_6lowpanDatagramDescriptor);

_6lowpanDatagramDescriptor::_6lowpanDatagramDescriptor() : cClassDescriptor("_6lowpanDatagram", "cPacket")
{
}

_6lowpanDatagramDescriptor::~_6lowpanDatagramDescriptor()
{
}

bool _6lowpanDatagramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<_6lowpanDatagram *>(obj)!=NULL;
}

const char *_6lowpanDatagramDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int _6lowpanDatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int _6lowpanDatagramDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *_6lowpanDatagramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "transportMessageKind",
        "payload",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int _6lowpanDatagramDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "transportMessageKind")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "payload")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *_6lowpanDatagramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "unsigned char",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *_6lowpanDatagramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int _6lowpanDatagramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    _6lowpanDatagram *pp = (_6lowpanDatagram *)object; (void)pp;
    switch (field) {
        case 1: return pp->getPayloadArraySize();
        default: return 0;
    }
}

std::string _6lowpanDatagramDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    _6lowpanDatagram *pp = (_6lowpanDatagram *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getTransportMessageKind());
        case 1: return ulong2string(pp->getPayload(i));
        default: return "";
    }
}

bool _6lowpanDatagramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    _6lowpanDatagram *pp = (_6lowpanDatagram *)object; (void)pp;
    switch (field) {
        case 0: pp->setTransportMessageKind(string2long(value)); return true;
        case 1: pp->setPayload(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *_6lowpanDatagramDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *_6lowpanDatagramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    _6lowpanDatagram *pp = (_6lowpanDatagram *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


