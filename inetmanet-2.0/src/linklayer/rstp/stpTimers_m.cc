//
// Generated file, do not edit! Created by opp_msgc 4.3 from linklayer/rstp/stpTimers.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "stpTimers_m.h"

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




Register_Class(STPTimer);

STPTimer::STPTimer(const char *name, int kind) : cMessage(name,kind)
{
}

STPTimer::STPTimer(const STPTimer& other) : cMessage(other)
{
    copy(other);
}

STPTimer::~STPTimer()
{
}

STPTimer& STPTimer::operator=(const STPTimer& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void STPTimer::copy(const STPTimer& other)
{
}

void STPTimer::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
}

void STPTimer::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
}

class STPTimerDescriptor : public cClassDescriptor
{
  public:
    STPTimerDescriptor();
    virtual ~STPTimerDescriptor();

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

Register_ClassDescriptor(STPTimerDescriptor);

STPTimerDescriptor::STPTimerDescriptor() : cClassDescriptor("STPTimer", "cMessage")
{
}

STPTimerDescriptor::~STPTimerDescriptor()
{
}

bool STPTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<STPTimer *>(obj)!=NULL;
}

const char *STPTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int STPTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int STPTimerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *STPTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int STPTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *STPTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *STPTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int STPTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    STPTimer *pp = (STPTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string STPTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    STPTimer *pp = (STPTimer *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool STPTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    STPTimer *pp = (STPTimer *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *STPTimerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *STPTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    STPTimer *pp = (STPTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(STPStartProtocol);

STPStartProtocol::STPStartProtocol(const char *name, int kind) : STPTimer(name,kind)
{
}

STPStartProtocol::STPStartProtocol(const STPStartProtocol& other) : STPTimer(other)
{
    copy(other);
}

STPStartProtocol::~STPStartProtocol()
{
}

STPStartProtocol& STPStartProtocol::operator=(const STPStartProtocol& other)
{
    if (this==&other) return *this;
    STPTimer::operator=(other);
    copy(other);
    return *this;
}

void STPStartProtocol::copy(const STPStartProtocol& other)
{
}

void STPStartProtocol::parsimPack(cCommBuffer *b)
{
    STPTimer::parsimPack(b);
}

void STPStartProtocol::parsimUnpack(cCommBuffer *b)
{
    STPTimer::parsimUnpack(b);
}

class STPStartProtocolDescriptor : public cClassDescriptor
{
  public:
    STPStartProtocolDescriptor();
    virtual ~STPStartProtocolDescriptor();

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

Register_ClassDescriptor(STPStartProtocolDescriptor);

STPStartProtocolDescriptor::STPStartProtocolDescriptor() : cClassDescriptor("STPStartProtocol", "STPTimer")
{
}

STPStartProtocolDescriptor::~STPStartProtocolDescriptor()
{
}

bool STPStartProtocolDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<STPStartProtocol *>(obj)!=NULL;
}

const char *STPStartProtocolDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int STPStartProtocolDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int STPStartProtocolDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *STPStartProtocolDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int STPStartProtocolDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *STPStartProtocolDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *STPStartProtocolDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int STPStartProtocolDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    STPStartProtocol *pp = (STPStartProtocol *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string STPStartProtocolDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    STPStartProtocol *pp = (STPStartProtocol *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool STPStartProtocolDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    STPStartProtocol *pp = (STPStartProtocol *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *STPStartProtocolDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *STPStartProtocolDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    STPStartProtocol *pp = (STPStartProtocol *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(STPHelloTimer);

STPHelloTimer::STPHelloTimer(const char *name, int kind) : STPTimer(name,kind)
{
}

STPHelloTimer::STPHelloTimer(const STPHelloTimer& other) : STPTimer(other)
{
    copy(other);
}

STPHelloTimer::~STPHelloTimer()
{
}

STPHelloTimer& STPHelloTimer::operator=(const STPHelloTimer& other)
{
    if (this==&other) return *this;
    STPTimer::operator=(other);
    copy(other);
    return *this;
}

void STPHelloTimer::copy(const STPHelloTimer& other)
{
}

void STPHelloTimer::parsimPack(cCommBuffer *b)
{
    STPTimer::parsimPack(b);
}

void STPHelloTimer::parsimUnpack(cCommBuffer *b)
{
    STPTimer::parsimUnpack(b);
}

class STPHelloTimerDescriptor : public cClassDescriptor
{
  public:
    STPHelloTimerDescriptor();
    virtual ~STPHelloTimerDescriptor();

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

Register_ClassDescriptor(STPHelloTimerDescriptor);

STPHelloTimerDescriptor::STPHelloTimerDescriptor() : cClassDescriptor("STPHelloTimer", "STPTimer")
{
}

STPHelloTimerDescriptor::~STPHelloTimerDescriptor()
{
}

bool STPHelloTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<STPHelloTimer *>(obj)!=NULL;
}

const char *STPHelloTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int STPHelloTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int STPHelloTimerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *STPHelloTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int STPHelloTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *STPHelloTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *STPHelloTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int STPHelloTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    STPHelloTimer *pp = (STPHelloTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string STPHelloTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    STPHelloTimer *pp = (STPHelloTimer *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool STPHelloTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    STPHelloTimer *pp = (STPHelloTimer *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *STPHelloTimerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *STPHelloTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    STPHelloTimer *pp = (STPHelloTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(STPForwardTimer);

STPForwardTimer::STPForwardTimer(const char *name, int kind) : STPTimer(name,kind)
{
    this->port_var = 0;
}

STPForwardTimer::STPForwardTimer(const STPForwardTimer& other) : STPTimer(other)
{
    copy(other);
}

STPForwardTimer::~STPForwardTimer()
{
}

STPForwardTimer& STPForwardTimer::operator=(const STPForwardTimer& other)
{
    if (this==&other) return *this;
    STPTimer::operator=(other);
    copy(other);
    return *this;
}

void STPForwardTimer::copy(const STPForwardTimer& other)
{
    this->port_var = other.port_var;
}

void STPForwardTimer::parsimPack(cCommBuffer *b)
{
    STPTimer::parsimPack(b);
    doPacking(b,this->port_var);
}

void STPForwardTimer::parsimUnpack(cCommBuffer *b)
{
    STPTimer::parsimUnpack(b);
    doUnpacking(b,this->port_var);
}

int STPForwardTimer::getPort() const
{
    return port_var;
}

void STPForwardTimer::setPort(int port)
{
    this->port_var = port;
}

class STPForwardTimerDescriptor : public cClassDescriptor
{
  public:
    STPForwardTimerDescriptor();
    virtual ~STPForwardTimerDescriptor();

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

Register_ClassDescriptor(STPForwardTimerDescriptor);

STPForwardTimerDescriptor::STPForwardTimerDescriptor() : cClassDescriptor("STPForwardTimer", "STPTimer")
{
}

STPForwardTimerDescriptor::~STPForwardTimerDescriptor()
{
}

bool STPForwardTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<STPForwardTimer *>(obj)!=NULL;
}

const char *STPForwardTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int STPForwardTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int STPForwardTimerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *STPForwardTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "port",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int STPForwardTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "port")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *STPForwardTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *STPForwardTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int STPForwardTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    STPForwardTimer *pp = (STPForwardTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string STPForwardTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    STPForwardTimer *pp = (STPForwardTimer *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPort());
        default: return "";
    }
}

bool STPForwardTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    STPForwardTimer *pp = (STPForwardTimer *)object; (void)pp;
    switch (field) {
        case 0: pp->setPort(string2long(value)); return true;
        default: return false;
    }
}

const char *STPForwardTimerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *STPForwardTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    STPForwardTimer *pp = (STPForwardTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(STPBPDUTimeoutTimer);

STPBPDUTimeoutTimer::STPBPDUTimeoutTimer(const char *name, int kind) : STPTimer(name,kind)
{
    this->port_var = 0;
}

STPBPDUTimeoutTimer::STPBPDUTimeoutTimer(const STPBPDUTimeoutTimer& other) : STPTimer(other)
{
    copy(other);
}

STPBPDUTimeoutTimer::~STPBPDUTimeoutTimer()
{
}

STPBPDUTimeoutTimer& STPBPDUTimeoutTimer::operator=(const STPBPDUTimeoutTimer& other)
{
    if (this==&other) return *this;
    STPTimer::operator=(other);
    copy(other);
    return *this;
}

void STPBPDUTimeoutTimer::copy(const STPBPDUTimeoutTimer& other)
{
    this->port_var = other.port_var;
}

void STPBPDUTimeoutTimer::parsimPack(cCommBuffer *b)
{
    STPTimer::parsimPack(b);
    doPacking(b,this->port_var);
}

void STPBPDUTimeoutTimer::parsimUnpack(cCommBuffer *b)
{
    STPTimer::parsimUnpack(b);
    doUnpacking(b,this->port_var);
}

int STPBPDUTimeoutTimer::getPort() const
{
    return port_var;
}

void STPBPDUTimeoutTimer::setPort(int port)
{
    this->port_var = port;
}

class STPBPDUTimeoutTimerDescriptor : public cClassDescriptor
{
  public:
    STPBPDUTimeoutTimerDescriptor();
    virtual ~STPBPDUTimeoutTimerDescriptor();

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

Register_ClassDescriptor(STPBPDUTimeoutTimerDescriptor);

STPBPDUTimeoutTimerDescriptor::STPBPDUTimeoutTimerDescriptor() : cClassDescriptor("STPBPDUTimeoutTimer", "STPTimer")
{
}

STPBPDUTimeoutTimerDescriptor::~STPBPDUTimeoutTimerDescriptor()
{
}

bool STPBPDUTimeoutTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<STPBPDUTimeoutTimer *>(obj)!=NULL;
}

const char *STPBPDUTimeoutTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int STPBPDUTimeoutTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int STPBPDUTimeoutTimerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *STPBPDUTimeoutTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "port",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int STPBPDUTimeoutTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "port")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *STPBPDUTimeoutTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *STPBPDUTimeoutTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int STPBPDUTimeoutTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    STPBPDUTimeoutTimer *pp = (STPBPDUTimeoutTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string STPBPDUTimeoutTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    STPBPDUTimeoutTimer *pp = (STPBPDUTimeoutTimer *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPort());
        default: return "";
    }
}

bool STPBPDUTimeoutTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    STPBPDUTimeoutTimer *pp = (STPBPDUTimeoutTimer *)object; (void)pp;
    switch (field) {
        case 0: pp->setPort(string2long(value)); return true;
        default: return false;
    }
}

const char *STPBPDUTimeoutTimerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *STPBPDUTimeoutTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    STPBPDUTimeoutTimer *pp = (STPBPDUTimeoutTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(STPHoldTimer);

STPHoldTimer::STPHoldTimer(const char *name, int kind) : STPTimer(name,kind)
{
    this->port_var = 0;
}

STPHoldTimer::STPHoldTimer(const STPHoldTimer& other) : STPTimer(other)
{
    copy(other);
}

STPHoldTimer::~STPHoldTimer()
{
}

STPHoldTimer& STPHoldTimer::operator=(const STPHoldTimer& other)
{
    if (this==&other) return *this;
    STPTimer::operator=(other);
    copy(other);
    return *this;
}

void STPHoldTimer::copy(const STPHoldTimer& other)
{
    this->port_var = other.port_var;
}

void STPHoldTimer::parsimPack(cCommBuffer *b)
{
    STPTimer::parsimPack(b);
    doPacking(b,this->port_var);
}

void STPHoldTimer::parsimUnpack(cCommBuffer *b)
{
    STPTimer::parsimUnpack(b);
    doUnpacking(b,this->port_var);
}

int STPHoldTimer::getPort() const
{
    return port_var;
}

void STPHoldTimer::setPort(int port)
{
    this->port_var = port;
}

class STPHoldTimerDescriptor : public cClassDescriptor
{
  public:
    STPHoldTimerDescriptor();
    virtual ~STPHoldTimerDescriptor();

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

Register_ClassDescriptor(STPHoldTimerDescriptor);

STPHoldTimerDescriptor::STPHoldTimerDescriptor() : cClassDescriptor("STPHoldTimer", "STPTimer")
{
}

STPHoldTimerDescriptor::~STPHoldTimerDescriptor()
{
}

bool STPHoldTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<STPHoldTimer *>(obj)!=NULL;
}

const char *STPHoldTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int STPHoldTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int STPHoldTimerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *STPHoldTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "port",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int STPHoldTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "port")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *STPHoldTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *STPHoldTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int STPHoldTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    STPHoldTimer *pp = (STPHoldTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string STPHoldTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    STPHoldTimer *pp = (STPHoldTimer *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPort());
        default: return "";
    }
}

bool STPHoldTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    STPHoldTimer *pp = (STPHoldTimer *)object; (void)pp;
    switch (field) {
        case 0: pp->setPort(string2long(value)); return true;
        default: return false;
    }
}

const char *STPHoldTimerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *STPHoldTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    STPHoldTimer *pp = (STPHoldTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(STPPortEdgeTimer);

STPPortEdgeTimer::STPPortEdgeTimer(const char *name, int kind) : STPTimer(name,kind)
{
    this->port_var = 0;
}

STPPortEdgeTimer::STPPortEdgeTimer(const STPPortEdgeTimer& other) : STPTimer(other)
{
    copy(other);
}

STPPortEdgeTimer::~STPPortEdgeTimer()
{
}

STPPortEdgeTimer& STPPortEdgeTimer::operator=(const STPPortEdgeTimer& other)
{
    if (this==&other) return *this;
    STPTimer::operator=(other);
    copy(other);
    return *this;
}

void STPPortEdgeTimer::copy(const STPPortEdgeTimer& other)
{
    this->port_var = other.port_var;
}

void STPPortEdgeTimer::parsimPack(cCommBuffer *b)
{
    STPTimer::parsimPack(b);
    doPacking(b,this->port_var);
}

void STPPortEdgeTimer::parsimUnpack(cCommBuffer *b)
{
    STPTimer::parsimUnpack(b);
    doUnpacking(b,this->port_var);
}

int STPPortEdgeTimer::getPort() const
{
    return port_var;
}

void STPPortEdgeTimer::setPort(int port)
{
    this->port_var = port;
}

class STPPortEdgeTimerDescriptor : public cClassDescriptor
{
  public:
    STPPortEdgeTimerDescriptor();
    virtual ~STPPortEdgeTimerDescriptor();

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

Register_ClassDescriptor(STPPortEdgeTimerDescriptor);

STPPortEdgeTimerDescriptor::STPPortEdgeTimerDescriptor() : cClassDescriptor("STPPortEdgeTimer", "STPTimer")
{
}

STPPortEdgeTimerDescriptor::~STPPortEdgeTimerDescriptor()
{
}

bool STPPortEdgeTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<STPPortEdgeTimer *>(obj)!=NULL;
}

const char *STPPortEdgeTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int STPPortEdgeTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int STPPortEdgeTimerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *STPPortEdgeTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "port",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int STPPortEdgeTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "port")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *STPPortEdgeTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *STPPortEdgeTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int STPPortEdgeTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    STPPortEdgeTimer *pp = (STPPortEdgeTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string STPPortEdgeTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    STPPortEdgeTimer *pp = (STPPortEdgeTimer *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPort());
        default: return "";
    }
}

bool STPPortEdgeTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    STPPortEdgeTimer *pp = (STPPortEdgeTimer *)object; (void)pp;
    switch (field) {
        case 0: pp->setPort(string2long(value)); return true;
        default: return false;
    }
}

const char *STPPortEdgeTimerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *STPPortEdgeTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    STPPortEdgeTimer *pp = (STPPortEdgeTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


