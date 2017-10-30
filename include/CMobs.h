#ifndef CMOBS_H
#define CMOBS_H

#include "../stale.h"
#include "CObject"
#include "CSkill.h"
#include <string>

class CMobs : public CObject
{
    
    CSkill m_tSpells[MAX_SKILLS];
    CStat m_tStats[MAX_STATS];
    CBonus m_tBonuses[MAX_STATS];

    public:
        int set_stats();
        int use_spell();
        int use_atatck();
        CMobs(string name,string race);
        virtual ~CMobs();

    protected:

    private:
};

#endif // CMOBS_H
