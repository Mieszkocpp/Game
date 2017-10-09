#ifndef CSTAT_H
#define CSTAT_H

#include "../stale.h"
#include <string>

using namespace std;

class CStat
{
    string m_name;
    long m_value;
    public:
        CStat();
        long get()
        {
            return m_value;
        }
        virtual ~CStat();

    protected:

    private:
};

#endif // CSTAT_H
