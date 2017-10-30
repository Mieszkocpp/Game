#ifndef CCHAR_H
#define CCHAR_H

#include "../stale.h"
#include "CSkill.h"
#include "CObject.h"
#include <string>

using namespace std;

class CChar : public CObject
{

    unsigned long m_exp;



public:



    /*    int get_stat(ST st);
        int skill_tree(int m_exp);
        void chose_spel(int chose);
        void show_items();
        int drop_item();
        int pick_item();*/

        CChar(string name, string type);
        virtual ~CChar();

    protected:

    private:
};

#endif // CCHAR_H
