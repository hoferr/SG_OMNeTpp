//
// Generated file, do not edit! Created by opp_msgc 4.3 from src/PlcFrame.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "PlcFrame_m.h"

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




Register_Class(PlcJam);

PlcJam::PlcJam(const char *name, int kind) : cPacket(name,kind)
{
}

PlcJam::PlcJam(const PlcJam& other) : cPacket(other)
{
    copy(other);
}

PlcJam::~PlcJam()
{
}

PlcJam& PlcJam::operator=(const PlcJam& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void PlcJam::copy(const PlcJam& other)
{
}

void PlcJam::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
}

void PlcJam::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
}

class PlcJamDescriptor : public cClassDescriptor
{
  public:
    PlcJamDescriptor();
    virtual ~PlcJamDescriptor();

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

Register_ClassDescriptor(PlcJamDescriptor);

PlcJamDescriptor::PlcJamDescriptor() : cClassDescriptor("PlcJam", "cPacket")
{
}

PlcJamDescriptor::~PlcJamDescriptor()
{
}

bool PlcJamDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlcJam *>(obj)!=NULL;
}

const char *PlcJamDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlcJamDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int PlcJamDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *PlcJamDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int PlcJamDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PlcJamDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *PlcJamDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PlcJamDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlcJam *pp = (PlcJam *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PlcJamDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PlcJam *pp = (PlcJam *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool PlcJamDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlcJam *pp = (PlcJam *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PlcJamDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *PlcJamDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlcJam *pp = (PlcJam *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlcFrame);

PlcFrame::PlcFrame(const char *name, int kind) : cPacket(name,kind)
{
    this->priority_var = 0;
    this->datarate_var = 0;
    this->PER_var = 0;
    this->vendorID_var = 0;
    this->isPolite_var = 0;
    this->encapsulationTime_var = 0;
    this->higherLayerOffset_var = 0;
    this->hopCounter_var = 0;
    this->type_var = 0;
}

PlcFrame::PlcFrame(const PlcFrame& other) : cPacket(other)
{
    copy(other);
}

PlcFrame::~PlcFrame()
{
}

PlcFrame& PlcFrame::operator=(const PlcFrame& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void PlcFrame::copy(const PlcFrame& other)
{
    this->dest_var = other.dest_var;
    this->src_var = other.src_var;
    this->priority_var = other.priority_var;
    this->datarate_var = other.datarate_var;
    this->PER_var = other.PER_var;
    this->vendorID_var = other.vendorID_var;
    this->isPolite_var = other.isPolite_var;
    this->encapsulationTime_var = other.encapsulationTime_var;
    this->higherLayerOffset_var = other.higherLayerOffset_var;
    this->hopCounter_var = other.hopCounter_var;
    this->type_var = other.type_var;
}

void PlcFrame::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->dest_var);
    doPacking(b,this->src_var);
    doPacking(b,this->priority_var);
    doPacking(b,this->datarate_var);
    doPacking(b,this->PER_var);
    doPacking(b,this->vendorID_var);
    doPacking(b,this->isPolite_var);
    doPacking(b,this->encapsulationTime_var);
    doPacking(b,this->higherLayerOffset_var);
    doPacking(b,this->hopCounter_var);
    doPacking(b,this->type_var);
}

void PlcFrame::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->dest_var);
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->priority_var);
    doUnpacking(b,this->datarate_var);
    doUnpacking(b,this->PER_var);
    doUnpacking(b,this->vendorID_var);
    doUnpacking(b,this->isPolite_var);
    doUnpacking(b,this->encapsulationTime_var);
    doUnpacking(b,this->higherLayerOffset_var);
    doUnpacking(b,this->hopCounter_var);
    doUnpacking(b,this->type_var);
}

MACAddress& PlcFrame::getDest()
{
    return dest_var;
}

void PlcFrame::setDest(const MACAddress& dest)
{
    this->dest_var = dest;
}

MACAddress& PlcFrame::getSrc()
{
    return src_var;
}

void PlcFrame::setSrc(const MACAddress& src)
{
    this->src_var = src;
}

int PlcFrame::getPriority() const
{
    return priority_var;
}

void PlcFrame::setPriority(int priority)
{
    this->priority_var = priority;
}

double PlcFrame::getDatarate() const
{
    return datarate_var;
}

void PlcFrame::setDatarate(double datarate)
{
    this->datarate_var = datarate;
}

double PlcFrame::getPER() const
{
    return PER_var;
}

void PlcFrame::setPER(double PER)
{
    this->PER_var = PER;
}

int PlcFrame::getVendorID() const
{
    return vendorID_var;
}

void PlcFrame::setVendorID(int vendorID)
{
    this->vendorID_var = vendorID;
}

bool PlcFrame::getIsPolite() const
{
    return isPolite_var;
}

void PlcFrame::setIsPolite(bool isPolite)
{
    this->isPolite_var = isPolite;
}

simtime_t PlcFrame::getEncapsulationTime() const
{
    return encapsulationTime_var;
}

void PlcFrame::setEncapsulationTime(simtime_t encapsulationTime)
{
    this->encapsulationTime_var = encapsulationTime;
}

simtime_t PlcFrame::getHigherLayerOffset() const
{
    return higherLayerOffset_var;
}

void PlcFrame::setHigherLayerOffset(simtime_t higherLayerOffset)
{
    this->higherLayerOffset_var = higherLayerOffset;
}

int PlcFrame::getHopCounter() const
{
    return hopCounter_var;
}

void PlcFrame::setHopCounter(int hopCounter)
{
    this->hopCounter_var = hopCounter;
}

int PlcFrame::getType() const
{
    return type_var;
}

void PlcFrame::setType(int type)
{
    this->type_var = type;
}

class PlcFrameDescriptor : public cClassDescriptor
{
  public:
    PlcFrameDescriptor();
    virtual ~PlcFrameDescriptor();

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

Register_ClassDescriptor(PlcFrameDescriptor);

PlcFrameDescriptor::PlcFrameDescriptor() : cClassDescriptor("PlcFrame", "cPacket")
{
}

PlcFrameDescriptor::~PlcFrameDescriptor()
{
}

bool PlcFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlcFrame *>(obj)!=NULL;
}

const char *PlcFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlcFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 11+basedesc->getFieldCount(object) : 11;
}

unsigned int PlcFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<11) ? fieldTypeFlags[field] : 0;
}

const char *PlcFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "dest",
        "src",
        "priority",
        "datarate",
        "PER",
        "vendorID",
        "isPolite",
        "encapsulationTime",
        "higherLayerOffset",
        "hopCounter",
        "type",
    };
    return (field>=0 && field<11) ? fieldNames[field] : NULL;
}

int PlcFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "priority")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "datarate")==0) return base+3;
    if (fieldName[0]=='P' && strcmp(fieldName, "PER")==0) return base+4;
    if (fieldName[0]=='v' && strcmp(fieldName, "vendorID")==0) return base+5;
    if (fieldName[0]=='i' && strcmp(fieldName, "isPolite")==0) return base+6;
    if (fieldName[0]=='e' && strcmp(fieldName, "encapsulationTime")==0) return base+7;
    if (fieldName[0]=='h' && strcmp(fieldName, "higherLayerOffset")==0) return base+8;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCounter")==0) return base+9;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+10;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PlcFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "MACAddress",
        "int",
        "double",
        "double",
        "int",
        "bool",
        "simtime_t",
        "simtime_t",
        "int",
        "int",
    };
    return (field>=0 && field<11) ? fieldTypeStrings[field] : NULL;
}

const char *PlcFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PlcFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrame *pp = (PlcFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PlcFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrame *pp = (PlcFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDest(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSrc(); return out.str();}
        case 2: return long2string(pp->getPriority());
        case 3: return double2string(pp->getDatarate());
        case 4: return double2string(pp->getPER());
        case 5: return long2string(pp->getVendorID());
        case 6: return bool2string(pp->getIsPolite());
        case 7: return double2string(pp->getEncapsulationTime());
        case 8: return double2string(pp->getHigherLayerOffset());
        case 9: return long2string(pp->getHopCounter());
        case 10: return long2string(pp->getType());
        default: return "";
    }
}

bool PlcFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrame *pp = (PlcFrame *)object; (void)pp;
    switch (field) {
        case 2: pp->setPriority(string2long(value)); return true;
        case 3: pp->setDatarate(string2double(value)); return true;
        case 4: pp->setPER(string2double(value)); return true;
        case 5: pp->setVendorID(string2long(value)); return true;
        case 6: pp->setIsPolite(string2bool(value)); return true;
        case 7: pp->setEncapsulationTime(string2double(value)); return true;
        case 8: pp->setHigherLayerOffset(string2double(value)); return true;
        case 9: pp->setHopCounter(string2long(value)); return true;
        case 10: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *PlcFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "MACAddress",
        "MACAddress",
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<11) ? fieldStructNames[field] : NULL;
}

void *PlcFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrame *pp = (PlcFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDest()); break;
        case 1: return (void *)(&pp->getSrc()); break;
        default: return NULL;
    }
}

Register_Class(PlcIIFrame);

PlcIIFrame::PlcIIFrame(const char *name, int kind) : PlcFrame(name,kind)
{
    this->PlcType_var = 0;
}

PlcIIFrame::PlcIIFrame(const PlcIIFrame& other) : PlcFrame(other)
{
    copy(other);
}

PlcIIFrame::~PlcIIFrame()
{
}

PlcIIFrame& PlcIIFrame::operator=(const PlcIIFrame& other)
{
    if (this==&other) return *this;
    PlcFrame::operator=(other);
    copy(other);
    return *this;
}

void PlcIIFrame::copy(const PlcIIFrame& other)
{
    this->PlcType_var = other.PlcType_var;
}

void PlcIIFrame::parsimPack(cCommBuffer *b)
{
    PlcFrame::parsimPack(b);
    doPacking(b,this->PlcType_var);
}

void PlcIIFrame::parsimUnpack(cCommBuffer *b)
{
    PlcFrame::parsimUnpack(b);
    doUnpacking(b,this->PlcType_var);
}

int PlcIIFrame::getPlcType() const
{
    return PlcType_var;
}

void PlcIIFrame::setPlcType(int PlcType)
{
    this->PlcType_var = PlcType;
}

class PlcIIFrameDescriptor : public cClassDescriptor
{
  public:
    PlcIIFrameDescriptor();
    virtual ~PlcIIFrameDescriptor();

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

Register_ClassDescriptor(PlcIIFrameDescriptor);

PlcIIFrameDescriptor::PlcIIFrameDescriptor() : cClassDescriptor("PlcIIFrame", "PlcFrame")
{
}

PlcIIFrameDescriptor::~PlcIIFrameDescriptor()
{
}

bool PlcIIFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlcIIFrame *>(obj)!=NULL;
}

const char *PlcIIFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlcIIFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PlcIIFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PlcIIFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "PlcType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PlcIIFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='P' && strcmp(fieldName, "PlcType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PlcIIFrameDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PlcIIFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PlcIIFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlcIIFrame *pp = (PlcIIFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PlcIIFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PlcIIFrame *pp = (PlcIIFrame *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPlcType());
        default: return "";
    }
}

bool PlcIIFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlcIIFrame *pp = (PlcIIFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setPlcType(string2long(value)); return true;
        default: return false;
    }
}

const char *PlcIIFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *PlcIIFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlcIIFrame *pp = (PlcIIFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlcFrameWithLLC);

PlcFrameWithLLC::PlcFrameWithLLC(const char *name, int kind) : PlcFrame(name,kind)
{
    this->ssap_var = 0;
    this->dsap_var = 0;
    this->control_var = 0;
}

PlcFrameWithLLC::PlcFrameWithLLC(const PlcFrameWithLLC& other) : PlcFrame(other)
{
    copy(other);
}

PlcFrameWithLLC::~PlcFrameWithLLC()
{
}

PlcFrameWithLLC& PlcFrameWithLLC::operator=(const PlcFrameWithLLC& other)
{
    if (this==&other) return *this;
    PlcFrame::operator=(other);
    copy(other);
    return *this;
}

void PlcFrameWithLLC::copy(const PlcFrameWithLLC& other)
{
    this->ssap_var = other.ssap_var;
    this->dsap_var = other.dsap_var;
    this->control_var = other.control_var;
}

void PlcFrameWithLLC::parsimPack(cCommBuffer *b)
{
    PlcFrame::parsimPack(b);
    doPacking(b,this->ssap_var);
    doPacking(b,this->dsap_var);
    doPacking(b,this->control_var);
}

void PlcFrameWithLLC::parsimUnpack(cCommBuffer *b)
{
    PlcFrame::parsimUnpack(b);
    doUnpacking(b,this->ssap_var);
    doUnpacking(b,this->dsap_var);
    doUnpacking(b,this->control_var);
}

int PlcFrameWithLLC::getSsap() const
{
    return ssap_var;
}

void PlcFrameWithLLC::setSsap(int ssap)
{
    this->ssap_var = ssap;
}

int PlcFrameWithLLC::getDsap() const
{
    return dsap_var;
}

void PlcFrameWithLLC::setDsap(int dsap)
{
    this->dsap_var = dsap;
}

int PlcFrameWithLLC::getControl() const
{
    return control_var;
}

void PlcFrameWithLLC::setControl(int control)
{
    this->control_var = control;
}

class PlcFrameWithLLCDescriptor : public cClassDescriptor
{
  public:
    PlcFrameWithLLCDescriptor();
    virtual ~PlcFrameWithLLCDescriptor();

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

Register_ClassDescriptor(PlcFrameWithLLCDescriptor);

PlcFrameWithLLCDescriptor::PlcFrameWithLLCDescriptor() : cClassDescriptor("PlcFrameWithLLC", "PlcFrame")
{
}

PlcFrameWithLLCDescriptor::~PlcFrameWithLLCDescriptor()
{
}

bool PlcFrameWithLLCDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlcFrameWithLLC *>(obj)!=NULL;
}

const char *PlcFrameWithLLCDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlcFrameWithLLCDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int PlcFrameWithLLCDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *PlcFrameWithLLCDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ssap",
        "dsap",
        "control",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int PlcFrameWithLLCDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssap")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dsap")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "control")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PlcFrameWithLLCDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *PlcFrameWithLLCDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PlcFrameWithLLCDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrameWithLLC *pp = (PlcFrameWithLLC *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PlcFrameWithLLCDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrameWithLLC *pp = (PlcFrameWithLLC *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSsap());
        case 1: return long2string(pp->getDsap());
        case 2: return long2string(pp->getControl());
        default: return "";
    }
}

bool PlcFrameWithLLCDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrameWithLLC *pp = (PlcFrameWithLLC *)object; (void)pp;
    switch (field) {
        case 0: pp->setSsap(string2long(value)); return true;
        case 1: pp->setDsap(string2long(value)); return true;
        case 2: pp->setControl(string2long(value)); return true;
        default: return false;
    }
}

const char *PlcFrameWithLLCDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *PlcFrameWithLLCDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrameWithLLC *pp = (PlcFrameWithLLC *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlcFrameWithSNAP);

PlcFrameWithSNAP::PlcFrameWithSNAP(const char *name, int kind) : PlcFrame(name,kind)
{
    this->orgCode_var = 0;
    this->localcode_var = 0;
}

PlcFrameWithSNAP::PlcFrameWithSNAP(const PlcFrameWithSNAP& other) : PlcFrame(other)
{
    copy(other);
}

PlcFrameWithSNAP::~PlcFrameWithSNAP()
{
}

PlcFrameWithSNAP& PlcFrameWithSNAP::operator=(const PlcFrameWithSNAP& other)
{
    if (this==&other) return *this;
    PlcFrame::operator=(other);
    copy(other);
    return *this;
}

void PlcFrameWithSNAP::copy(const PlcFrameWithSNAP& other)
{
    this->orgCode_var = other.orgCode_var;
    this->localcode_var = other.localcode_var;
}

void PlcFrameWithSNAP::parsimPack(cCommBuffer *b)
{
    PlcFrame::parsimPack(b);
    doPacking(b,this->orgCode_var);
    doPacking(b,this->localcode_var);
}

void PlcFrameWithSNAP::parsimUnpack(cCommBuffer *b)
{
    PlcFrame::parsimUnpack(b);
    doUnpacking(b,this->orgCode_var);
    doUnpacking(b,this->localcode_var);
}

long PlcFrameWithSNAP::getOrgCode() const
{
    return orgCode_var;
}

void PlcFrameWithSNAP::setOrgCode(long orgCode)
{
    this->orgCode_var = orgCode;
}

int PlcFrameWithSNAP::getLocalcode() const
{
    return localcode_var;
}

void PlcFrameWithSNAP::setLocalcode(int localcode)
{
    this->localcode_var = localcode;
}

class PlcFrameWithSNAPDescriptor : public cClassDescriptor
{
  public:
    PlcFrameWithSNAPDescriptor();
    virtual ~PlcFrameWithSNAPDescriptor();

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

Register_ClassDescriptor(PlcFrameWithSNAPDescriptor);

PlcFrameWithSNAPDescriptor::PlcFrameWithSNAPDescriptor() : cClassDescriptor("PlcFrameWithSNAP", "PlcFrame")
{
}

PlcFrameWithSNAPDescriptor::~PlcFrameWithSNAPDescriptor()
{
}

bool PlcFrameWithSNAPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlcFrameWithSNAP *>(obj)!=NULL;
}

const char *PlcFrameWithSNAPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlcFrameWithSNAPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PlcFrameWithSNAPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PlcFrameWithSNAPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "orgCode",
        "localcode",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PlcFrameWithSNAPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "orgCode")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "localcode")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PlcFrameWithSNAPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "long",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *PlcFrameWithSNAPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PlcFrameWithSNAPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrameWithSNAP *pp = (PlcFrameWithSNAP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PlcFrameWithSNAPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrameWithSNAP *pp = (PlcFrameWithSNAP *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getOrgCode());
        case 1: return long2string(pp->getLocalcode());
        default: return "";
    }
}

bool PlcFrameWithSNAPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrameWithSNAP *pp = (PlcFrameWithSNAP *)object; (void)pp;
    switch (field) {
        case 0: pp->setOrgCode(string2long(value)); return true;
        case 1: pp->setLocalcode(string2long(value)); return true;
        default: return false;
    }
}

const char *PlcFrameWithSNAPDescriptor::getFieldStructName(void *object, int field) const
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

void *PlcFrameWithSNAPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlcFrameWithSNAP *pp = (PlcFrameWithSNAP *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlcPauseFrame);

PlcPauseFrame::PlcPauseFrame(const char *name, int kind) : PlcFrame(name,kind)
{
    this->pauseTime_var = 0;
}

PlcPauseFrame::PlcPauseFrame(const PlcPauseFrame& other) : PlcFrame(other)
{
    copy(other);
}

PlcPauseFrame::~PlcPauseFrame()
{
}

PlcPauseFrame& PlcPauseFrame::operator=(const PlcPauseFrame& other)
{
    if (this==&other) return *this;
    PlcFrame::operator=(other);
    copy(other);
    return *this;
}

void PlcPauseFrame::copy(const PlcPauseFrame& other)
{
    this->pauseTime_var = other.pauseTime_var;
}

void PlcPauseFrame::parsimPack(cCommBuffer *b)
{
    PlcFrame::parsimPack(b);
    doPacking(b,this->pauseTime_var);
}

void PlcPauseFrame::parsimUnpack(cCommBuffer *b)
{
    PlcFrame::parsimUnpack(b);
    doUnpacking(b,this->pauseTime_var);
}

int PlcPauseFrame::getPauseTime() const
{
    return pauseTime_var;
}

void PlcPauseFrame::setPauseTime(int pauseTime)
{
    this->pauseTime_var = pauseTime;
}

class PlcPauseFrameDescriptor : public cClassDescriptor
{
  public:
    PlcPauseFrameDescriptor();
    virtual ~PlcPauseFrameDescriptor();

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

Register_ClassDescriptor(PlcPauseFrameDescriptor);

PlcPauseFrameDescriptor::PlcPauseFrameDescriptor() : cClassDescriptor("PlcPauseFrame", "PlcFrame")
{
}

PlcPauseFrameDescriptor::~PlcPauseFrameDescriptor()
{
}

bool PlcPauseFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlcPauseFrame *>(obj)!=NULL;
}

const char *PlcPauseFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlcPauseFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PlcPauseFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PlcPauseFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "pauseTime",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PlcPauseFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pauseTime")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PlcPauseFrameDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PlcPauseFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PlcPauseFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlcPauseFrame *pp = (PlcPauseFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PlcPauseFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PlcPauseFrame *pp = (PlcPauseFrame *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPauseTime());
        default: return "";
    }
}

bool PlcPauseFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlcPauseFrame *pp = (PlcPauseFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setPauseTime(string2long(value)); return true;
        default: return false;
    }
}

const char *PlcPauseFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *PlcPauseFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlcPauseFrame *pp = (PlcPauseFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlcAutoconfig);

PlcAutoconfig::PlcAutoconfig(const char *name, int kind) : cPacket(name,kind)
{
    this->txrate_var = 0;
    this->halfDuplex_var = false;
}

PlcAutoconfig::PlcAutoconfig(const PlcAutoconfig& other) : cPacket(other)
{
    copy(other);
}

PlcAutoconfig::~PlcAutoconfig()
{
}

PlcAutoconfig& PlcAutoconfig::operator=(const PlcAutoconfig& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void PlcAutoconfig::copy(const PlcAutoconfig& other)
{
    this->txrate_var = other.txrate_var;
    this->halfDuplex_var = other.halfDuplex_var;
}

void PlcAutoconfig::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->txrate_var);
    doPacking(b,this->halfDuplex_var);
}

void PlcAutoconfig::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->txrate_var);
    doUnpacking(b,this->halfDuplex_var);
}

double PlcAutoconfig::getTxrate() const
{
    return txrate_var;
}

void PlcAutoconfig::setTxrate(double txrate)
{
    this->txrate_var = txrate;
}

bool PlcAutoconfig::getHalfDuplex() const
{
    return halfDuplex_var;
}

void PlcAutoconfig::setHalfDuplex(bool halfDuplex)
{
    this->halfDuplex_var = halfDuplex;
}

class PlcAutoconfigDescriptor : public cClassDescriptor
{
  public:
    PlcAutoconfigDescriptor();
    virtual ~PlcAutoconfigDescriptor();

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

Register_ClassDescriptor(PlcAutoconfigDescriptor);

PlcAutoconfigDescriptor::PlcAutoconfigDescriptor() : cClassDescriptor("PlcAutoconfig", "cPacket")
{
}

PlcAutoconfigDescriptor::~PlcAutoconfigDescriptor()
{
}

bool PlcAutoconfigDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlcAutoconfig *>(obj)!=NULL;
}

const char *PlcAutoconfigDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlcAutoconfigDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PlcAutoconfigDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PlcAutoconfigDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "txrate",
        "halfDuplex",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PlcAutoconfigDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "txrate")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "halfDuplex")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PlcAutoconfigDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "bool",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *PlcAutoconfigDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PlcAutoconfigDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlcAutoconfig *pp = (PlcAutoconfig *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PlcAutoconfigDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PlcAutoconfig *pp = (PlcAutoconfig *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getTxrate());
        case 1: return bool2string(pp->getHalfDuplex());
        default: return "";
    }
}

bool PlcAutoconfigDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlcAutoconfig *pp = (PlcAutoconfig *)object; (void)pp;
    switch (field) {
        case 0: pp->setTxrate(string2double(value)); return true;
        case 1: pp->setHalfDuplex(string2bool(value)); return true;
        default: return false;
    }
}

const char *PlcAutoconfigDescriptor::getFieldStructName(void *object, int field) const
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

void *PlcAutoconfigDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlcAutoconfig *pp = (PlcAutoconfig *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlcChannelUpdate);

PlcChannelUpdate::PlcChannelUpdate(const char *name, int kind) : cMessage(name,kind)
{
    this->datarate_var = 0;
    this->PER_var = 0;
}

PlcChannelUpdate::PlcChannelUpdate(const PlcChannelUpdate& other) : cMessage(other)
{
    copy(other);
}

PlcChannelUpdate::~PlcChannelUpdate()
{
}

PlcChannelUpdate& PlcChannelUpdate::operator=(const PlcChannelUpdate& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void PlcChannelUpdate::copy(const PlcChannelUpdate& other)
{
    this->datarate_var = other.datarate_var;
    this->PER_var = other.PER_var;
}

void PlcChannelUpdate::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->datarate_var);
    doPacking(b,this->PER_var);
}

void PlcChannelUpdate::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->datarate_var);
    doUnpacking(b,this->PER_var);
}

double PlcChannelUpdate::getDatarate() const
{
    return datarate_var;
}

void PlcChannelUpdate::setDatarate(double datarate)
{
    this->datarate_var = datarate;
}

double PlcChannelUpdate::getPER() const
{
    return PER_var;
}

void PlcChannelUpdate::setPER(double PER)
{
    this->PER_var = PER;
}

class PlcChannelUpdateDescriptor : public cClassDescriptor
{
  public:
    PlcChannelUpdateDescriptor();
    virtual ~PlcChannelUpdateDescriptor();

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

Register_ClassDescriptor(PlcChannelUpdateDescriptor);

PlcChannelUpdateDescriptor::PlcChannelUpdateDescriptor() : cClassDescriptor("PlcChannelUpdate", "cMessage")
{
}

PlcChannelUpdateDescriptor::~PlcChannelUpdateDescriptor()
{
}

bool PlcChannelUpdateDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlcChannelUpdate *>(obj)!=NULL;
}

const char *PlcChannelUpdateDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlcChannelUpdateDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PlcChannelUpdateDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PlcChannelUpdateDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "datarate",
        "PER",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PlcChannelUpdateDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "datarate")==0) return base+0;
    if (fieldName[0]=='P' && strcmp(fieldName, "PER")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PlcChannelUpdateDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "double",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *PlcChannelUpdateDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PlcChannelUpdateDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlcChannelUpdate *pp = (PlcChannelUpdate *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PlcChannelUpdateDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PlcChannelUpdate *pp = (PlcChannelUpdate *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getDatarate());
        case 1: return double2string(pp->getPER());
        default: return "";
    }
}

bool PlcChannelUpdateDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlcChannelUpdate *pp = (PlcChannelUpdate *)object; (void)pp;
    switch (field) {
        case 0: pp->setDatarate(string2double(value)); return true;
        case 1: pp->setPER(string2double(value)); return true;
        default: return false;
    }
}

const char *PlcChannelUpdateDescriptor::getFieldStructName(void *object, int field) const
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

void *PlcChannelUpdateDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlcChannelUpdate *pp = (PlcChannelUpdate *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlcSendRequestTDMA);

PlcSendRequestTDMA::PlcSendRequestTDMA(const char *name, int kind) : cMessage(name,kind)
{
}

PlcSendRequestTDMA::PlcSendRequestTDMA(const PlcSendRequestTDMA& other) : cMessage(other)
{
    copy(other);
}

PlcSendRequestTDMA::~PlcSendRequestTDMA()
{
}

PlcSendRequestTDMA& PlcSendRequestTDMA::operator=(const PlcSendRequestTDMA& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void PlcSendRequestTDMA::copy(const PlcSendRequestTDMA& other)
{
    this->src_var = other.src_var;
}

void PlcSendRequestTDMA::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->src_var);
}

void PlcSendRequestTDMA::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->src_var);
}

MACAddress& PlcSendRequestTDMA::getSrc()
{
    return src_var;
}

void PlcSendRequestTDMA::setSrc(const MACAddress& src)
{
    this->src_var = src;
}

class PlcSendRequestTDMADescriptor : public cClassDescriptor
{
  public:
    PlcSendRequestTDMADescriptor();
    virtual ~PlcSendRequestTDMADescriptor();

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

Register_ClassDescriptor(PlcSendRequestTDMADescriptor);

PlcSendRequestTDMADescriptor::PlcSendRequestTDMADescriptor() : cClassDescriptor("PlcSendRequestTDMA", "cMessage")
{
}

PlcSendRequestTDMADescriptor::~PlcSendRequestTDMADescriptor()
{
}

bool PlcSendRequestTDMADescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlcSendRequestTDMA *>(obj)!=NULL;
}

const char *PlcSendRequestTDMADescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlcSendRequestTDMADescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PlcSendRequestTDMADescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *PlcSendRequestTDMADescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "src",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PlcSendRequestTDMADescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PlcSendRequestTDMADescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PlcSendRequestTDMADescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PlcSendRequestTDMADescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlcSendRequestTDMA *pp = (PlcSendRequestTDMA *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PlcSendRequestTDMADescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PlcSendRequestTDMA *pp = (PlcSendRequestTDMA *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); return out.str();}
        default: return "";
    }
}

bool PlcSendRequestTDMADescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlcSendRequestTDMA *pp = (PlcSendRequestTDMA *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PlcSendRequestTDMADescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "MACAddress",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *PlcSendRequestTDMADescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlcSendRequestTDMA *pp = (PlcSendRequestTDMA *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        default: return NULL;
    }
}

Register_Class(Token);

Token::Token(const char *name, int kind) : cPacket(name,kind)
{
    this->vendor_ID_var = 0;
    this->type_var = 0;
}

Token::Token(const Token& other) : cPacket(other)
{
    copy(other);
}

Token::~Token()
{
}

Token& Token::operator=(const Token& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void Token::copy(const Token& other)
{
    this->token_var = other.token_var;
    this->vendor_ID_var = other.vendor_ID_var;
    this->type_var = other.type_var;
}

void Token::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->token_var);
    doPacking(b,this->vendor_ID_var);
    doPacking(b,this->type_var);
}

void Token::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->token_var);
    doUnpacking(b,this->vendor_ID_var);
    doUnpacking(b,this->type_var);
}

MACAddress& Token::getToken()
{
    return token_var;
}

void Token::setToken(const MACAddress& token)
{
    this->token_var = token;
}

int Token::getVendor_ID() const
{
    return vendor_ID_var;
}

void Token::setVendor_ID(int vendor_ID)
{
    this->vendor_ID_var = vendor_ID;
}

int Token::getType() const
{
    return type_var;
}

void Token::setType(int type)
{
    this->type_var = type;
}

class TokenDescriptor : public cClassDescriptor
{
  public:
    TokenDescriptor();
    virtual ~TokenDescriptor();

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

Register_ClassDescriptor(TokenDescriptor);

TokenDescriptor::TokenDescriptor() : cClassDescriptor("Token", "cPacket")
{
}

TokenDescriptor::~TokenDescriptor()
{
}

bool TokenDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Token *>(obj)!=NULL;
}

const char *TokenDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TokenDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int TokenDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *TokenDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "token",
        "vendor_ID",
        "type",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int TokenDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "token")==0) return base+0;
    if (fieldName[0]=='v' && strcmp(fieldName, "vendor_ID")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TokenDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "int",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *TokenDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TokenDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Token *pp = (Token *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TokenDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Token *pp = (Token *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getToken(); return out.str();}
        case 1: return long2string(pp->getVendor_ID());
        case 2: return long2string(pp->getType());
        default: return "";
    }
}

bool TokenDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Token *pp = (Token *)object; (void)pp;
    switch (field) {
        case 1: pp->setVendor_ID(string2long(value)); return true;
        case 2: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *TokenDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "MACAddress",
        NULL,
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *TokenDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Token *pp = (Token *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getToken()); break;
        default: return NULL;
    }
}

Register_Class(QoSRequest);

QoSRequest::QoSRequest(const char *name, int kind) : cMessage(name,kind)
{
    this->priority_var = 0;
}

QoSRequest::QoSRequest(const QoSRequest& other) : cMessage(other)
{
    copy(other);
}

QoSRequest::~QoSRequest()
{
}

QoSRequest& QoSRequest::operator=(const QoSRequest& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void QoSRequest::copy(const QoSRequest& other)
{
    this->priority_var = other.priority_var;
}

void QoSRequest::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->priority_var);
}

void QoSRequest::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->priority_var);
}

int QoSRequest::getPriority() const
{
    return priority_var;
}

void QoSRequest::setPriority(int priority)
{
    this->priority_var = priority;
}

class QoSRequestDescriptor : public cClassDescriptor
{
  public:
    QoSRequestDescriptor();
    virtual ~QoSRequestDescriptor();

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

Register_ClassDescriptor(QoSRequestDescriptor);

QoSRequestDescriptor::QoSRequestDescriptor() : cClassDescriptor("QoSRequest", "cMessage")
{
}

QoSRequestDescriptor::~QoSRequestDescriptor()
{
}

bool QoSRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QoSRequest *>(obj)!=NULL;
}

const char *QoSRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QoSRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int QoSRequestDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *QoSRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "priority",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int QoSRequestDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "priority")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *QoSRequestDescriptor::getFieldTypeString(void *object, int field) const
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

const char *QoSRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int QoSRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QoSRequest *pp = (QoSRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string QoSRequestDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    QoSRequest *pp = (QoSRequest *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPriority());
        default: return "";
    }
}

bool QoSRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QoSRequest *pp = (QoSRequest *)object; (void)pp;
    switch (field) {
        case 0: pp->setPriority(string2long(value)); return true;
        default: return false;
    }
}

const char *QoSRequestDescriptor::getFieldStructName(void *object, int field) const
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

void *QoSRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QoSRequest *pp = (QoSRequest *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(MoreBandwidthRequest);

MoreBandwidthRequest::MoreBandwidthRequest(const char *name, int kind) : cMessage(name,kind)
{
}

MoreBandwidthRequest::MoreBandwidthRequest(const MoreBandwidthRequest& other) : cMessage(other)
{
    copy(other);
}

MoreBandwidthRequest::~MoreBandwidthRequest()
{
}

MoreBandwidthRequest& MoreBandwidthRequest::operator=(const MoreBandwidthRequest& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void MoreBandwidthRequest::copy(const MoreBandwidthRequest& other)
{
    this->src_var = other.src_var;
}

void MoreBandwidthRequest::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->src_var);
}

void MoreBandwidthRequest::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->src_var);
}

MACAddress& MoreBandwidthRequest::getSrc()
{
    return src_var;
}

void MoreBandwidthRequest::setSrc(const MACAddress& src)
{
    this->src_var = src;
}

class MoreBandwidthRequestDescriptor : public cClassDescriptor
{
  public:
    MoreBandwidthRequestDescriptor();
    virtual ~MoreBandwidthRequestDescriptor();

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

Register_ClassDescriptor(MoreBandwidthRequestDescriptor);

MoreBandwidthRequestDescriptor::MoreBandwidthRequestDescriptor() : cClassDescriptor("MoreBandwidthRequest", "cMessage")
{
}

MoreBandwidthRequestDescriptor::~MoreBandwidthRequestDescriptor()
{
}

bool MoreBandwidthRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MoreBandwidthRequest *>(obj)!=NULL;
}

const char *MoreBandwidthRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MoreBandwidthRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int MoreBandwidthRequestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *MoreBandwidthRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "src",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int MoreBandwidthRequestDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MoreBandwidthRequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *MoreBandwidthRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MoreBandwidthRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MoreBandwidthRequest *pp = (MoreBandwidthRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MoreBandwidthRequestDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MoreBandwidthRequest *pp = (MoreBandwidthRequest *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); return out.str();}
        default: return "";
    }
}

bool MoreBandwidthRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MoreBandwidthRequest *pp = (MoreBandwidthRequest *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *MoreBandwidthRequestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "MACAddress",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *MoreBandwidthRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MoreBandwidthRequest *pp = (MoreBandwidthRequest *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        default: return NULL;
    }
}

Register_Class(MeasurementData);

MeasurementData::MeasurementData(const char *name, int kind) : cMessage(name,kind)
{
    this->runTime_var = 0;
    this->runTime_clean_var = 0;
    this->higherLayerOffset_var = 0;
    this->priority_var = 0;
    this->typeOfModem_var = 0;
}

MeasurementData::MeasurementData(const MeasurementData& other) : cMessage(other)
{
    copy(other);
}

MeasurementData::~MeasurementData()
{
}

MeasurementData& MeasurementData::operator=(const MeasurementData& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void MeasurementData::copy(const MeasurementData& other)
{
    this->runTime_var = other.runTime_var;
    this->runTime_clean_var = other.runTime_clean_var;
    this->higherLayerOffset_var = other.higherLayerOffset_var;
    this->priority_var = other.priority_var;
    this->typeOfModem_var = other.typeOfModem_var;
}

void MeasurementData::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->runTime_var);
    doPacking(b,this->runTime_clean_var);
    doPacking(b,this->higherLayerOffset_var);
    doPacking(b,this->priority_var);
    doPacking(b,this->typeOfModem_var);
}

void MeasurementData::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->runTime_var);
    doUnpacking(b,this->runTime_clean_var);
    doUnpacking(b,this->higherLayerOffset_var);
    doUnpacking(b,this->priority_var);
    doUnpacking(b,this->typeOfModem_var);
}

simtime_t MeasurementData::getRunTime() const
{
    return runTime_var;
}

void MeasurementData::setRunTime(simtime_t runTime)
{
    this->runTime_var = runTime;
}

simtime_t MeasurementData::getRunTime_clean() const
{
    return runTime_clean_var;
}

void MeasurementData::setRunTime_clean(simtime_t runTime_clean)
{
    this->runTime_clean_var = runTime_clean;
}

simtime_t MeasurementData::getHigherLayerOffset() const
{
    return higherLayerOffset_var;
}

void MeasurementData::setHigherLayerOffset(simtime_t higherLayerOffset)
{
    this->higherLayerOffset_var = higherLayerOffset;
}

int MeasurementData::getPriority() const
{
    return priority_var;
}

void MeasurementData::setPriority(int priority)
{
    this->priority_var = priority;
}

int MeasurementData::getTypeOfModem() const
{
    return typeOfModem_var;
}

void MeasurementData::setTypeOfModem(int typeOfModem)
{
    this->typeOfModem_var = typeOfModem;
}

class MeasurementDataDescriptor : public cClassDescriptor
{
  public:
    MeasurementDataDescriptor();
    virtual ~MeasurementDataDescriptor();

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

Register_ClassDescriptor(MeasurementDataDescriptor);

MeasurementDataDescriptor::MeasurementDataDescriptor() : cClassDescriptor("MeasurementData", "cMessage")
{
}

MeasurementDataDescriptor::~MeasurementDataDescriptor()
{
}

bool MeasurementDataDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MeasurementData *>(obj)!=NULL;
}

const char *MeasurementDataDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MeasurementDataDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int MeasurementDataDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *MeasurementDataDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "runTime",
        "runTime_clean",
        "higherLayerOffset",
        "priority",
        "typeOfModem",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int MeasurementDataDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "runTime")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "runTime_clean")==0) return base+1;
    if (fieldName[0]=='h' && strcmp(fieldName, "higherLayerOffset")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "priority")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "typeOfModem")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MeasurementDataDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "simtime_t",
        "simtime_t",
        "simtime_t",
        "int",
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *MeasurementDataDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MeasurementDataDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MeasurementData *pp = (MeasurementData *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MeasurementDataDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MeasurementData *pp = (MeasurementData *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getRunTime());
        case 1: return double2string(pp->getRunTime_clean());
        case 2: return double2string(pp->getHigherLayerOffset());
        case 3: return long2string(pp->getPriority());
        case 4: return long2string(pp->getTypeOfModem());
        default: return "";
    }
}

bool MeasurementDataDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MeasurementData *pp = (MeasurementData *)object; (void)pp;
    switch (field) {
        case 0: pp->setRunTime(string2double(value)); return true;
        case 1: pp->setRunTime_clean(string2double(value)); return true;
        case 2: pp->setHigherLayerOffset(string2double(value)); return true;
        case 3: pp->setPriority(string2long(value)); return true;
        case 4: pp->setTypeOfModem(string2long(value)); return true;
        default: return false;
    }
}

const char *MeasurementDataDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *MeasurementDataDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MeasurementData *pp = (MeasurementData *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NetCondition);

NetCondition::NetCondition(const char *name, int kind) : cMessage(name,kind)
{
    this->typeOfNet_var = 0;
    this->datarate_var = 0;
    this->PER_var = 0;
}

NetCondition::NetCondition(const NetCondition& other) : cMessage(other)
{
    copy(other);
}

NetCondition::~NetCondition()
{
}

NetCondition& NetCondition::operator=(const NetCondition& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void NetCondition::copy(const NetCondition& other)
{
    this->typeOfNet_var = other.typeOfNet_var;
    this->datarate_var = other.datarate_var;
    this->PER_var = other.PER_var;
}

void NetCondition::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->typeOfNet_var);
    doPacking(b,this->datarate_var);
    doPacking(b,this->PER_var);
}

void NetCondition::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->typeOfNet_var);
    doUnpacking(b,this->datarate_var);
    doUnpacking(b,this->PER_var);
}

int NetCondition::getTypeOfNet() const
{
    return typeOfNet_var;
}

void NetCondition::setTypeOfNet(int typeOfNet)
{
    this->typeOfNet_var = typeOfNet;
}

double NetCondition::getDatarate() const
{
    return datarate_var;
}

void NetCondition::setDatarate(double datarate)
{
    this->datarate_var = datarate;
}

double NetCondition::getPER() const
{
    return PER_var;
}

void NetCondition::setPER(double PER)
{
    this->PER_var = PER;
}

class NetConditionDescriptor : public cClassDescriptor
{
  public:
    NetConditionDescriptor();
    virtual ~NetConditionDescriptor();

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

Register_ClassDescriptor(NetConditionDescriptor);

NetConditionDescriptor::NetConditionDescriptor() : cClassDescriptor("NetCondition", "cMessage")
{
}

NetConditionDescriptor::~NetConditionDescriptor()
{
}

bool NetConditionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NetCondition *>(obj)!=NULL;
}

const char *NetConditionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NetConditionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int NetConditionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *NetConditionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "typeOfNet",
        "datarate",
        "PER",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int NetConditionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "typeOfNet")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "datarate")==0) return base+1;
    if (fieldName[0]=='P' && strcmp(fieldName, "PER")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NetConditionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "double",
        "double",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *NetConditionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NetConditionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NetCondition *pp = (NetCondition *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NetConditionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NetCondition *pp = (NetCondition *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getTypeOfNet());
        case 1: return double2string(pp->getDatarate());
        case 2: return double2string(pp->getPER());
        default: return "";
    }
}

bool NetConditionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NetCondition *pp = (NetCondition *)object; (void)pp;
    switch (field) {
        case 0: pp->setTypeOfNet(string2long(value)); return true;
        case 1: pp->setDatarate(string2double(value)); return true;
        case 2: pp->setPER(string2double(value)); return true;
        default: return false;
    }
}

const char *NetConditionDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *NetConditionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NetCondition *pp = (NetCondition *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(DATA_PlcNet);

DATA_PlcNet::DATA_PlcNet(const char *name, int kind) : cMessage(name,kind)
{
    this->typeOfNet_var = 0;
    this->packetsLost_var = 0;
    this->numMessages_var = 0;
}

DATA_PlcNet::DATA_PlcNet(const DATA_PlcNet& other) : cMessage(other)
{
    copy(other);
}

DATA_PlcNet::~DATA_PlcNet()
{
}

DATA_PlcNet& DATA_PlcNet::operator=(const DATA_PlcNet& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void DATA_PlcNet::copy(const DATA_PlcNet& other)
{
    this->typeOfNet_var = other.typeOfNet_var;
    this->packetsLost_var = other.packetsLost_var;
    this->numMessages_var = other.numMessages_var;
}

void DATA_PlcNet::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->typeOfNet_var);
    doPacking(b,this->packetsLost_var);
    doPacking(b,this->numMessages_var);
}

void DATA_PlcNet::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->typeOfNet_var);
    doUnpacking(b,this->packetsLost_var);
    doUnpacking(b,this->numMessages_var);
}

int DATA_PlcNet::getTypeOfNet() const
{
    return typeOfNet_var;
}

void DATA_PlcNet::setTypeOfNet(int typeOfNet)
{
    this->typeOfNet_var = typeOfNet;
}

long DATA_PlcNet::getPacketsLost() const
{
    return packetsLost_var;
}

void DATA_PlcNet::setPacketsLost(long packetsLost)
{
    this->packetsLost_var = packetsLost;
}

long DATA_PlcNet::getNumMessages() const
{
    return numMessages_var;
}

void DATA_PlcNet::setNumMessages(long numMessages)
{
    this->numMessages_var = numMessages;
}

class DATA_PlcNetDescriptor : public cClassDescriptor
{
  public:
    DATA_PlcNetDescriptor();
    virtual ~DATA_PlcNetDescriptor();

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

Register_ClassDescriptor(DATA_PlcNetDescriptor);

DATA_PlcNetDescriptor::DATA_PlcNetDescriptor() : cClassDescriptor("DATA_PlcNet", "cMessage")
{
}

DATA_PlcNetDescriptor::~DATA_PlcNetDescriptor()
{
}

bool DATA_PlcNetDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DATA_PlcNet *>(obj)!=NULL;
}

const char *DATA_PlcNetDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DATA_PlcNetDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int DATA_PlcNetDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *DATA_PlcNetDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "typeOfNet",
        "packetsLost",
        "numMessages",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int DATA_PlcNetDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "typeOfNet")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetsLost")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "numMessages")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DATA_PlcNetDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "long",
        "long",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *DATA_PlcNetDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DATA_PlcNetDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DATA_PlcNet *pp = (DATA_PlcNet *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DATA_PlcNetDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DATA_PlcNet *pp = (DATA_PlcNet *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getTypeOfNet());
        case 1: return long2string(pp->getPacketsLost());
        case 2: return long2string(pp->getNumMessages());
        default: return "";
    }
}

bool DATA_PlcNetDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DATA_PlcNet *pp = (DATA_PlcNet *)object; (void)pp;
    switch (field) {
        case 0: pp->setTypeOfNet(string2long(value)); return true;
        case 1: pp->setPacketsLost(string2long(value)); return true;
        case 2: pp->setNumMessages(string2long(value)); return true;
        default: return false;
    }
}

const char *DATA_PlcNetDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *DATA_PlcNetDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DATA_PlcNet *pp = (DATA_PlcNet *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(DATA_PlcMAC);

DATA_PlcMAC::DATA_PlcMAC(const char *name, int kind) : cMessage(name,kind)
{
    this->typeOfModem_var = 0;
    this->numCollisions_var = 0;
    this->numBackoffs_var = 0;
    this->totalChannelIdleTime_var = 0;
    this->totalSuccessfulRxTxTime_var = 0;
    this->totalCollisionTime_var = 0;
}

DATA_PlcMAC::DATA_PlcMAC(const DATA_PlcMAC& other) : cMessage(other)
{
    copy(other);
}

DATA_PlcMAC::~DATA_PlcMAC()
{
}

DATA_PlcMAC& DATA_PlcMAC::operator=(const DATA_PlcMAC& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void DATA_PlcMAC::copy(const DATA_PlcMAC& other)
{
    this->typeOfModem_var = other.typeOfModem_var;
    this->numCollisions_var = other.numCollisions_var;
    this->numBackoffs_var = other.numBackoffs_var;
    this->totalChannelIdleTime_var = other.totalChannelIdleTime_var;
    this->totalSuccessfulRxTxTime_var = other.totalSuccessfulRxTxTime_var;
    this->totalCollisionTime_var = other.totalCollisionTime_var;
}

void DATA_PlcMAC::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->typeOfModem_var);
    doPacking(b,this->numCollisions_var);
    doPacking(b,this->numBackoffs_var);
    doPacking(b,this->totalChannelIdleTime_var);
    doPacking(b,this->totalSuccessfulRxTxTime_var);
    doPacking(b,this->totalCollisionTime_var);
}

void DATA_PlcMAC::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->typeOfModem_var);
    doUnpacking(b,this->numCollisions_var);
    doUnpacking(b,this->numBackoffs_var);
    doUnpacking(b,this->totalChannelIdleTime_var);
    doUnpacking(b,this->totalSuccessfulRxTxTime_var);
    doUnpacking(b,this->totalCollisionTime_var);
}

int DATA_PlcMAC::getTypeOfModem() const
{
    return typeOfModem_var;
}

void DATA_PlcMAC::setTypeOfModem(int typeOfModem)
{
    this->typeOfModem_var = typeOfModem;
}

long DATA_PlcMAC::getNumCollisions() const
{
    return numCollisions_var;
}

void DATA_PlcMAC::setNumCollisions(long numCollisions)
{
    this->numCollisions_var = numCollisions;
}

long DATA_PlcMAC::getNumBackoffs() const
{
    return numBackoffs_var;
}

void DATA_PlcMAC::setNumBackoffs(long numBackoffs)
{
    this->numBackoffs_var = numBackoffs;
}

simtime_t DATA_PlcMAC::getTotalChannelIdleTime() const
{
    return totalChannelIdleTime_var;
}

void DATA_PlcMAC::setTotalChannelIdleTime(simtime_t totalChannelIdleTime)
{
    this->totalChannelIdleTime_var = totalChannelIdleTime;
}

simtime_t DATA_PlcMAC::getTotalSuccessfulRxTxTime() const
{
    return totalSuccessfulRxTxTime_var;
}

void DATA_PlcMAC::setTotalSuccessfulRxTxTime(simtime_t totalSuccessfulRxTxTime)
{
    this->totalSuccessfulRxTxTime_var = totalSuccessfulRxTxTime;
}

simtime_t DATA_PlcMAC::getTotalCollisionTime() const
{
    return totalCollisionTime_var;
}

void DATA_PlcMAC::setTotalCollisionTime(simtime_t totalCollisionTime)
{
    this->totalCollisionTime_var = totalCollisionTime;
}

class DATA_PlcMACDescriptor : public cClassDescriptor
{
  public:
    DATA_PlcMACDescriptor();
    virtual ~DATA_PlcMACDescriptor();

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

Register_ClassDescriptor(DATA_PlcMACDescriptor);

DATA_PlcMACDescriptor::DATA_PlcMACDescriptor() : cClassDescriptor("DATA_PlcMAC", "cMessage")
{
}

DATA_PlcMACDescriptor::~DATA_PlcMACDescriptor()
{
}

bool DATA_PlcMACDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DATA_PlcMAC *>(obj)!=NULL;
}

const char *DATA_PlcMACDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DATA_PlcMACDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int DATA_PlcMACDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *DATA_PlcMACDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "typeOfModem",
        "numCollisions",
        "numBackoffs",
        "totalChannelIdleTime",
        "totalSuccessfulRxTxTime",
        "totalCollisionTime",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int DATA_PlcMACDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "typeOfModem")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "numCollisions")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "numBackoffs")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "totalChannelIdleTime")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "totalSuccessfulRxTxTime")==0) return base+4;
    if (fieldName[0]=='t' && strcmp(fieldName, "totalCollisionTime")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DATA_PlcMACDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "long",
        "long",
        "simtime_t",
        "simtime_t",
        "simtime_t",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *DATA_PlcMACDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DATA_PlcMACDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DATA_PlcMAC *pp = (DATA_PlcMAC *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DATA_PlcMACDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DATA_PlcMAC *pp = (DATA_PlcMAC *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getTypeOfModem());
        case 1: return long2string(pp->getNumCollisions());
        case 2: return long2string(pp->getNumBackoffs());
        case 3: return double2string(pp->getTotalChannelIdleTime());
        case 4: return double2string(pp->getTotalSuccessfulRxTxTime());
        case 5: return double2string(pp->getTotalCollisionTime());
        default: return "";
    }
}

bool DATA_PlcMACDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DATA_PlcMAC *pp = (DATA_PlcMAC *)object; (void)pp;
    switch (field) {
        case 0: pp->setTypeOfModem(string2long(value)); return true;
        case 1: pp->setNumCollisions(string2long(value)); return true;
        case 2: pp->setNumBackoffs(string2long(value)); return true;
        case 3: pp->setTotalChannelIdleTime(string2double(value)); return true;
        case 4: pp->setTotalSuccessfulRxTxTime(string2double(value)); return true;
        case 5: pp->setTotalCollisionTime(string2double(value)); return true;
        default: return false;
    }
}

const char *DATA_PlcMACDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<6) ? fieldStructNames[field] : NULL;
}

void *DATA_PlcMACDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DATA_PlcMAC *pp = (DATA_PlcMAC *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


