//
// Generated file, do not edit! Created by opp_msgc 4.3 from linklayer/rstp/stpTimers.msg.
//

#ifndef _STPTIMERS_M_H_
#define _STPTIMERS_M_H_

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



/**
 * Class generated from <tt>linklayer/rstp/stpTimers.msg</tt> by opp_msgc.
 * <pre>
 * message STPTimer { }
 * </pre>
 */
class INET_API STPTimer : public ::cMessage
{
  protected:

  private:
    void copy(const STPTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const STPTimer&);

  public:
    STPTimer(const char *name=NULL, int kind=0);
    STPTimer(const STPTimer& other);
    virtual ~STPTimer();
    STPTimer& operator=(const STPTimer& other);
    virtual STPTimer *dup() const {return new STPTimer(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, STPTimer& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, STPTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/rstp/stpTimers.msg</tt> by opp_msgc.
 * <pre>
 * message STPStartProtocol extends STPTimer { }
 * </pre>
 */
class INET_API STPStartProtocol : public ::STPTimer
{
  protected:

  private:
    void copy(const STPStartProtocol& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const STPStartProtocol&);

  public:
    STPStartProtocol(const char *name=NULL, int kind=0);
    STPStartProtocol(const STPStartProtocol& other);
    virtual ~STPStartProtocol();
    STPStartProtocol& operator=(const STPStartProtocol& other);
    virtual STPStartProtocol *dup() const {return new STPStartProtocol(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, STPStartProtocol& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, STPStartProtocol& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/rstp/stpTimers.msg</tt> by opp_msgc.
 * <pre>
 * message STPHelloTimer extends STPTimer { }
 * </pre>
 */
class INET_API STPHelloTimer : public ::STPTimer
{
  protected:

  private:
    void copy(const STPHelloTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const STPHelloTimer&);

  public:
    STPHelloTimer(const char *name=NULL, int kind=0);
    STPHelloTimer(const STPHelloTimer& other);
    virtual ~STPHelloTimer();
    STPHelloTimer& operator=(const STPHelloTimer& other);
    virtual STPHelloTimer *dup() const {return new STPHelloTimer(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, STPHelloTimer& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, STPHelloTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/rstp/stpTimers.msg</tt> by opp_msgc.
 * <pre>
 * message STPForwardTimer extends STPTimer { 
 * 	int port;
 * }
 * </pre>
 */
class INET_API STPForwardTimer : public ::STPTimer
{
  protected:
    int port_var;

  private:
    void copy(const STPForwardTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const STPForwardTimer&);

  public:
    STPForwardTimer(const char *name=NULL, int kind=0);
    STPForwardTimer(const STPForwardTimer& other);
    virtual ~STPForwardTimer();
    STPForwardTimer& operator=(const STPForwardTimer& other);
    virtual STPForwardTimer *dup() const {return new STPForwardTimer(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPort() const;
    virtual void setPort(int port);
};

inline void doPacking(cCommBuffer *b, STPForwardTimer& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, STPForwardTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/rstp/stpTimers.msg</tt> by opp_msgc.
 * <pre>
 * message STPBPDUTimeoutTimer extends STPTimer {
 *     int port;
 * }
 * </pre>
 */
class INET_API STPBPDUTimeoutTimer : public ::STPTimer
{
  protected:
    int port_var;

  private:
    void copy(const STPBPDUTimeoutTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const STPBPDUTimeoutTimer&);

  public:
    STPBPDUTimeoutTimer(const char *name=NULL, int kind=0);
    STPBPDUTimeoutTimer(const STPBPDUTimeoutTimer& other);
    virtual ~STPBPDUTimeoutTimer();
    STPBPDUTimeoutTimer& operator=(const STPBPDUTimeoutTimer& other);
    virtual STPBPDUTimeoutTimer *dup() const {return new STPBPDUTimeoutTimer(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPort() const;
    virtual void setPort(int port);
};

inline void doPacking(cCommBuffer *b, STPBPDUTimeoutTimer& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, STPBPDUTimeoutTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/rstp/stpTimers.msg</tt> by opp_msgc.
 * <pre>
 * message STPHoldTimer extends STPTimer {
 *     int port;
 * }
 * </pre>
 */
class INET_API STPHoldTimer : public ::STPTimer
{
  protected:
    int port_var;

  private:
    void copy(const STPHoldTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const STPHoldTimer&);

  public:
    STPHoldTimer(const char *name=NULL, int kind=0);
    STPHoldTimer(const STPHoldTimer& other);
    virtual ~STPHoldTimer();
    STPHoldTimer& operator=(const STPHoldTimer& other);
    virtual STPHoldTimer *dup() const {return new STPHoldTimer(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPort() const;
    virtual void setPort(int port);
};

inline void doPacking(cCommBuffer *b, STPHoldTimer& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, STPHoldTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/rstp/stpTimers.msg</tt> by opp_msgc.
 * <pre>
 * message STPPortEdgeTimer extends STPTimer {
 *     int port;
 * }
 * </pre>
 */
class INET_API STPPortEdgeTimer : public ::STPTimer
{
  protected:
    int port_var;

  private:
    void copy(const STPPortEdgeTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const STPPortEdgeTimer&);

  public:
    STPPortEdgeTimer(const char *name=NULL, int kind=0);
    STPPortEdgeTimer(const STPPortEdgeTimer& other);
    virtual ~STPPortEdgeTimer();
    STPPortEdgeTimer& operator=(const STPPortEdgeTimer& other);
    virtual STPPortEdgeTimer *dup() const {return new STPPortEdgeTimer(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPort() const;
    virtual void setPort(int port);
};

inline void doPacking(cCommBuffer *b, STPPortEdgeTimer& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, STPPortEdgeTimer& obj) {obj.parsimUnpack(b);}


#endif // _STPTIMERS_M_H_
