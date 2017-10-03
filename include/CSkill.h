#ifndef CSKILL_H
#define CSKILL_H

#include "../stale.h"
#include <string>
#include "CBonus.h"

using namespace std;

class CSkill
{
    string m_name;
    char turns;
    CBonus m_stat[MAX_STATS];
    public:
        CSkill();
        virtual ~CSkill();

    protected:

    private:
};

#endif // CSKILL_H
