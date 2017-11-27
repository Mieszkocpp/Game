#ifndef CSKILL_H
#define CSKILL_H

#include "../stale.h"
#include "CObject.h"
#include <string>

using namespace std;

class CSkill : public CObject
{
protected:
    int     m_ttl;
public:
    CSkill();
    virtual ~CSkill();
};

#endif // CSKILL_H
