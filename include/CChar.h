#ifndef CCHAR_H
#define CCHAR_H

#include "../stale.h"
#include "CSkill.h"
#include "CObject.h"
#include <string>

using namespace std;

class CChar : public CObject
{
protected:
    unsigned long   m_exp;
    /*
    CItem   m_inv [...]; //itemy ubrane
    CItem   m_backpack[...]; //itemy w plecaku
    CItem   m_depo [...]; //itemy w skrzyni
    */
public:
    void show();
    unsigned long getExp()          {return m_exp;}
    int setExp(unsigned long exp)   {m_exp = exp; return 0;}


    CChar() {}
    CChar(string name, string type);
    virtual ~CChar();

};


#endif // CCHAR_H
