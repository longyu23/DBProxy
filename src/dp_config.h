#ifndef _DBPROXY_CONFIG_H_
#define _DBPROXY_CONFIG_H_

#include "configure.h"
#include "dp_common.h"

namespace dbproxy
{

class CDPConfig : public CConfigure
{
public:
    CDPConfig() {}
    virtual ~CDPConfig() {}
    
    virtual bool parse_value(const char* key, const char* value);
    virtual void print(void);
    
public:
    int m_iHost;
    int m_iPort;
    int m_iMaxFileSize;
    int m_iMaxSubWorker;
    int m_iMaxBindTimes;
};

} //end of namespace dbproxy


#endif //_DBPROXY_CONFIG_H_
