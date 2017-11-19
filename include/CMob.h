#ifndef CMOB_H
#define CMOB_H

#include "../stale.h"
#include "CObject.h"
#include "CSkill.h"
#include <string>

class CMob : public CObject
{
protected:
    CSkill  m_Spells   [MAX_SKILLS];

public:
    int     set_stats();
    int     use_spell();
    int     use_atatck();
    CMob(string name,string type);
    virtual ~CMob();
};

#endif // CMOBS_H
