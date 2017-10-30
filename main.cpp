#include <iostream>

using namespace std;

#include "CChar.h"
#include "CMob.h"
#include "CItem.h"

#define MAX_ITEMS 100


int main()
{
    CChar* player1= new CChar("Janek","Krasnolud");
    CMob* mob1 = new CMob("Karol","Ork");

    mob1->setBonus(st_str,1.3);
    mob1->setBonus(st_int,0.5);
    mob1->setBonus(st_hp,2.3);
    mob1->setBonus(st_mp,.3);

    mob1->setStat(st_str,10);
    mob1->setStat(st_int,5);
    mob1->setStat(st_hp,100);
    mob1->setStat(st_mp,50);

    mob1->showObject();

    CItem* ite1 = new CItem("Miecz","2-dsw");

    ite1->showObject();

}
