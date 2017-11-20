#ifndef CSTAT_H
#define CSTAT_H

#include "../stale.h"
#include <string>
#include <stdio.h>

using namespace std;

class CStat
{

protected:
    string m_name;
    long m_value;
    double m_multi;


public:
    long getValue()           {return m_value;}
    double getMulti()         {return m_multi;}
    string getName()          {return m_name;}
    int setValue(long value)  {m_value = value;   return 0;}
    int setMulti(double multi){m_multi = multi;   return 0;}
    int setName(string name)  {m_name = name;     return 0;}
    string show()
    {
        string r;
        char buff[1024];
        ///Do zmiany!!!!!
        sprintf(buff,"%ld (%4.2f)",m_value,m_multi);
        r = buff;
        return r;
    }
public:

    CStat();
    virtual ~CStat();
};

#endif // CSTAT_H
