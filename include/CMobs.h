#ifndef CMOBS_H
#define CMOBS_H

#include "../stale.h"
#include "CBonus.h"
#include "CSkill.h"
#include "CStat.h"
#include <string>

class CMobs
{
    CSkill m_tSpells[MAX_SKILLS];
    CStat m_tStats[MAX_STATS];
    CBonus m_tBonuses[MAX_STATS];

    public:
        int set_stats();
        int use_spell();
        int use_atatck();
        CMobs();
        virtual ~CMobs();

    protected:

    private:
};

#endif // CMOBS_H