#ifndef COBJECT_H
#define COBJECT_H

#include "../stale.h"
#include "CStat.h"
#include "CBonus.h"
#include <iostream>
using namespace std;

class CObject
{
    public:
        CObject();
        virtual ~CObject();

        long getStat(ST st)
        {
            return m_stat[st].get();
        }

        long getBonus(ST st)
        {
            return m_bonus[st].get();
        }

        int setStat(ST stat, long newVal)
        {
            m_stat[stat].set(newVal);
            return 0;
        }

        int setBonus(ST stat, double newVal)
        {
            m_bonus[stat].set(newVal);
            return 0;
        }
        int setName(string name)
        {
            m_name = name;
        }
        string getName()
        {
            return m_name;
        }
        int setType(string type)
        {
            m_type = type;
        }
        string getType()
        {
            return m_type;
        }
        void showObject()
        {
            cout<<m_name<<" "<<m_type<<endl;
            cout<<"Strength: "<<m_stat[st_str].get()<<" "<<m_bonus[st_str].get()<<endl;
            cout<<"Inteligence: "<<m_stat[st_int].get()<<" "<<m_bonus[st_int].get()<<endl;
            cout<<"Helth: "<<m_stat[st_hp].get()<<" "<<m_bonus[st_hp].get()<<endl;
            cout<<"Mana: "<<m_stat[st_mp].get()<<" "<<m_bonus[st_mp].get()<<endl;
        }
    protected:
         string m_name,m_type;
         CStat m_stat[MAX_STATS];
         CBonus m_bonus[MAX_STATS];

    private:
};

#endif // COBJECT_H
