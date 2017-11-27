#ifndef COBJECT_H
#define COBJECT_H

#include "../stale.h"
#include "CStat.h"
#include <iostream>
#include <map>

using namespace std;

class CObject
{
protected:
    long   m_id;
    string m_name,
           m_type;

     map<string, CStat>     m_stats;

    // CStat  m_stats     [MAX_STATS];
    // CStat  m_bonuses   [MAX_STATS];

public:
    CObject();
    virtual ~CObject();

    ///GET

    CStat getStat(string un)
    {
        return m_stats[un];
    }

    long getId()            {return m_id;}
    string getName()        {return m_name;}
    string getType()        {return m_type;}

    ///SET

    int setStat(string un, CStat arg)
    {
        m_stats[un] = arg;
        return 0;
    }

    int setId(long id)                      {m_id=id;       return 0;}
    int setName(string name)                {m_name = name; return 0;}
    int setType(string type)                {m_type = type; return 0;}

    ///TMP

    virtual void show()
    {
        cout<<m_name<<" "<<m_type<<endl;

        map<string,CStat>::iterator it = m_stats.begin();
        for (it=m_stats.begin(); it!=m_stats.end(); ++it)
            cout << it->first << ": " << it->second.getValue() << ", (x " << it->second.getMulti() <<")"<<endl;
    }
};

#endif // COBJECT_H
