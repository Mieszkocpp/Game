#ifndef CSTAT_H
#define CSTAT_H

#include "../stale.h"
#include <string>

using namespace std;

class CStat
{
    long m_value;
    public:
        long get()
        {
            return m_value;
        }
        void set(long newVal)
        {
            m_value = newVal;
        }
        CStat();
        virtual ~CStat();
};

#endif // CSTAT_H
