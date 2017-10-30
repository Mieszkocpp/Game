#ifndef CMOB_H
#define CMOB_H

#include "../stale.h"
#include "CObject.h"
#include "CSkill.h"
#include <string>

class CMob : public CObject
{

    CSkill m_tSpells[MAX_SKILLS];
    CStat m_tStats[MAX_STATS];
    CBonus m_tBonuses[MAX_STATS];

    public:
        int set_stats();
        int use_spell();
        int use_atatck();
        CMob(string name,string type);
        virtual ~CMob();

    protected:

    private:
};

#endif // CMOBS_H
