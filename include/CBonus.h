#ifndef CBONUS_H
#define CBONUS_H

#include "../stale.h"
#include <string>

using namespace std;

class CBonus
{
    string m_name;
    double m_value;

    public:
        CBonus();
        virtual ~CBonus();
        double get()
        {
            return m_value;
        }
        void set(double newVal)
        {
            m_value = newVal;
        }
};

#endif // CBONUS_H
