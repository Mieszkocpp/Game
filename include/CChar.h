#ifndef CCHAR_H
#define CCHAR_H

#include "../stale.h"
#include "CBonus.h"
#include "CSkill.h"
#include "CStat.h"
#include <string>

using namespace std;

class CChar
{
    string m_name;
    string m_race;

    unsigned long m_exp;


    CStat m_stat[MAX_STATS];
    CSkill m_spels[MAX_SKILLS];


public:
        int get_stat(ST st);
        int skill_tree(int m_exp);
        void chose_spel(int chose);
        void show_items();
        int drop_item();
        int pick_item();
        CChar();
        virtual ~CChar();

    protected:

    private:
};

#endif // CCHAR_H
