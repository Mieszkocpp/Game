#ifndef CCHAR_H
#define CCHAR_H

#include "../stale.h"
#include "CBonus.h"
#include "CStat.h"
#include <string>

using namespace std;

class CChar
{
    string m_name;
    unsigned long m_exp;

    CStat m_stat[MAX_STATS];


    public:

        CChar();
        virtual ~CChar();

    protected:

    private:
};

#endif // CCHAR_H
