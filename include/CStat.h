#ifndef CSTAT_H
#define CSTAT_H

#include "../stale.h"
#include <string>

using namespace std;

class CStat
{

protected:
    string m_name;
    double m_value;

public:
    double getValue()           {return m_value;}
    string getName()            {return m_name;}
    int setValue(double value)  {m_value = value;   return 0;}
    int setName(string name)    {m_name = name;     return 0;}
public:

    CStat();
    virtual ~CStat();
};

#endif // CSTAT_H
