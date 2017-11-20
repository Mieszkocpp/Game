#ifndef COBJECT_H
#define COBJECT_H

#include "../stale.h"
#include "CStat.h"
#include <iostream>
using namespace std;

class CObject
{
protected:
     long   m_id;
     string m_name,
            m_type;
     CStat  m_stats     [MAX_STATS];
     CStat  m_bonuses   [MAX_STATS];

public:
    CObject();
    virtual ~CObject();

    ///GET

    long getStat(ST st)     {return m_stats[st].getValue();}
    long getBonus(ST st)    {return m_bonuses[st].getValue();}
    long getId()            {return m_id;}
    string getName()        {return m_name;}
    string getType()        {return m_type;}

    ///SET
    int setStat(ST stat, CStat arg)
    {
        m_stats[stat]=arg;
        return 0;
    }
    int setBonus(ST stat, double newVal)    {m_bonuses[stat].setValue(newVal);   return 0;}
    int setId(long id)                      {m_id=id;       return 0;}
    int setName(string name)                {m_name = name; return 0;}
    int setType(string type)                {m_type = type; return 0;}

    ///TMP
    virtual void show()
    {
        cout<<m_name<<" "<<m_type<<endl;
        cout<<"Strength: "<<m_stats[st_str].getValue()<<" "<<m_bonuses[st_str].getValue()<<endl;
        cout<<"Inteligence: "<<m_stats[st_int].getValue()<<" "<<m_bonuses[st_int].getValue()<<endl;
        cout<<"Helth: "<<m_stats[st_hp].getValue()<<" "<<m_bonuses[st_hp].getValue()<<endl;
        cout<<"Mana: "<<m_stats[st_mp].getValue()<<" "<<m_bonuses[st_mp].getValue()<<endl;
    }
};

#endif // COBJECT_H
