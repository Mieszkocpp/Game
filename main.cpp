#include <iostream>

using namespace std;

#include "CChar.h"


#define MAX_ITEMS 100


int main()
{
    CChar* player1 = new CChar("Janek","Krasnolud");
    player1->setBonus(st_str,1.3);
    player1->setBonus(st_int,0.5);
    player1->setBonus(st_hp,2.3);
    player1->setBonus(st_mp,.3);

    player1->setStat(st_str,10);
    player1->setStat(st_int,5);
    player1->setStat(st_hp,100);
    player1->setStat(st_mp,50);

    player1->showObject();

}
