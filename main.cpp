
#include <iostream>


#include "CChar.h"
#include "CMob.h"
#include "CItem.h"

#define MAX_ITEMS 100

#include <string.h>
#include <stdio.h>
#include <fstream>
#include <vector>
#include "CChar.h"
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;

long getXMLValue(xml_node<> *nodeName, string attrName)
{
    if(nodeName && nodeName->first_node(attrName.c_str()) && nodeName->first_node(attrName.c_str())->first_attribute("value"))
        return atol(nodeName->first_node(attrName.c_str())->first_attribute("value")->value());
    else return 0;
}

int main(void)
{
///loading data

    CChar races[100]; ///?????

    xml_document<> doc;
	xml_node<> * root;
    ifstream klasyXML ("klasy.xml");
    vector<char> buffer((istreambuf_iterator<char>(klasyXML)), istreambuf_iterator<char>());
	buffer.push_back('\0');
	doc.parse<0>(&buffer[0]);
	root = doc.first_node("char");
	int i=0;
	for (xml_node<> * klasa = root->first_node("class"); klasa; klasa = klasa->next_sibling(),++i)
	{

        races[i].setType(klasa->first_attribute("name")->value());
        races[i].setStat(st_str,getXMLValue(klasa,"str"));
        races[i].setStat(st_int,getXMLValue(klasa,"int"));
        races[i].setStat(st_hp,getXMLValue(klasa,"hp"));
        races[i].setStat(st_mp,getXMLValue(klasa,"mp"));
        races[i].setStat(st_arm,getXMLValue(klasa,"arm"));
        races[i].setStat(st_res,getXMLValue(klasa,"res"));
        races[i].setStat(st_mdgm,getXMLValue(klasa,"mdmg"));
        races[i].setStat(st_pdmg,getXMLValue(klasa,"pdmg"));
        races[i].setStat(st_speed,getXMLValue(klasa,"speed"));
        races[i].setStat(st_gold,getXMLValue(klasa,"gold"));
        races[i].show();

	}


    int race;

    string name;
	cout<<"Select your name and choose race! "<<endl;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Choose race: ";
	cin>>race;
	switch(race)
	{
    case 1:
        {
            break;
        }
	}

/*

	cin>>wybor;
	switch(wybor)
{
    case 1:
        {
            CChar* Play1 = new CChar(name,"Ork");
            Play1->setStat(st_arm, 1);
            Play1->setStat(st_gold, 1);
            Play1->setStat(st_hp, 1);
            Play1->setStat(st_int, 1);
            Play1->setStat(st_mdgm, 1);
            Play1->setStat(st_mp, 1);
            Play1->setStat(st_pdmg, 1);
            Play1->setStat(st_res, 1);
            Play1->setStat(st_speed, 1);
            Play1->setStat(st_str, 1);
            Play1->setBonus(st_arm, 1);
            Play1->setBonus(st_gold, 1);
            Play1->setBonus(st_hp, 1);
            Play1->setBonus(st_int, 1);
            Play1->setBonus(st_mdgm, 1);
            Play1->setBonus(st_mp, 1);
            Play1->setBonus(st_pdmg, 1);
            Play1->setBonus(st_res, 1);
            Play1->setBonus(st_speed, 1);
            Play1->setBonus(st_str, 1);
            break;
        }
        case 2:
        {
            CChar* Play1 = new CChar(name,"Elf");
            Play1->setStat(st_arm, 1);
            Play1->setStat(st_gold, 1);
            Play1->setStat(st_hp, 1);
            Play1->setStat(st_int, 1);
            Play1->setStat(st_mdgm, 1);
            Play1->setStat(st_mp, 1);
            Play1->setStat(st_pdmg, 1);
            Play1->setStat(st_res, 1);
            Play1->setStat(st_speed, 1);
            Play1->setStat(st_str, 1);
            Play1->setBonus(st_arm, 1);
            Play1->setBonus(st_gold, 1);
            Play1->setBonus(st_hp, 1);
            Play1->setBonus(st_int, 1);
            Play1->setBonus(st_mdgm, 1);
            Play1->setBonus(st_mp, 1);
            Play1->setBonus(st_pdmg, 1);
            Play1->setBonus(st_res, 1);
            Play1->setBonus(st_speed, 1);
            Play1->setBonus(st_str, 1);
            break;
        }
        case 3:
        {
            CChar* Play1 = new CChar(name,"Dwarf");
            Play1->setStat(st_arm, 1);
            Play1->setStat(st_gold, 1);
            Play1->setStat(st_hp, 1);
            Play1->setStat(st_int, 1);
            Play1->setStat(st_mdgm, 1);
            Play1->setStat(st_mp, 1);
            Play1->setStat(st_pdmg, 1);
            Play1->setStat(st_res, 1);
            Play1->setStat(st_speed, 1);
            Play1->setStat(st_str, 1);
            Play1->setBonus(st_arm, 1);
            Play1->setBonus(st_gold, 1);
            Play1->setBonus(st_hp, 1);
            Play1->setBonus(st_int, 1);
            Play1->setBonus(st_mdgm, 1);
            Play1->setBonus(st_mp, 1);
            Play1->setBonus(st_pdmg, 1);
            Play1->setBonus(st_res, 1);
            Play1->setBonus(st_speed, 1);
            Play1->setBonus(st_str, 1);
            break;
        }
        case 4:
        {
            CChar* Play1 = new CChar(name,"Human");
            Play1->setStat(st_arm, 1);
            Play1->setStat(st_gold, 1);
            Play1->setStat(st_hp, 1);
            Play1->setStat(st_int, 1);
            Play1->setStat(st_mdgm, 1);
            Play1->setStat(st_mp, 1);
            Play1->setStat(st_pdmg, 1);
            Play1->setStat(st_res, 1);
            Play1->setStat(st_speed, 1);
            Play1->setStat(st_str, 1);
            Play1->setBonus(st_arm, 1);
            Play1->setBonus(st_gold, 1);
            Play1->setBonus(st_hp, 1);
            Play1->setBonus(st_int, 1);
            Play1->setBonus(st_mdgm, 1);
            Play1->setBonus(st_mp, 1);
            Play1->setBonus(st_pdmg, 1);
            Play1->setBonus(st_res, 1);
            Play1->setBonus(st_speed, 1);
            Play1->setBonus(st_str, 1);
            break;
        }
        case 5:
        {
        CChar* Play1 = new CChar(name,"Undead");
            Play1->setStat(st_arm, 1);
            Play1->setStat(st_gold, 1);
            Play1->setStat(st_hp, 1);
            Play1->setStat(st_int, 1);
            Play1->setStat(st_mdgm, 1);
            Play1->setStat(st_mp, 1);
            Play1->setStat(st_pdmg, 1);
            Play1->setStat(st_res, 1);
            Play1->setStat(st_speed, 1);
            Play1->setStat(st_str, 1);
            Play1->setBonus(st_arm, 1);
            Play1->setBonus(st_gold, 1);
            Play1->setBonus(st_hp, 1);
            Play1->setBonus(st_int, 1);
            Play1->setBonus(st_mdgm, 1);
            Play1->setBonus(st_mp, 1);
            Play1->setBonus(st_pdmg, 1);
            Play1->setBonus(st_res, 1);
            Play1->setBonus(st_speed, 1);
            Play1->setBonus(st_str, 1);
            break;
        }
        case 6:
        {
            CChar* Play1 = new CChar(name,"Goblin");
            Play1->setStat(st_arm, 1);
            Play1->setStat(st_gold, 1);
            Play1->setStat(st_hp, 1);
            Play1->setStat(st_int, 1);
            Play1->setStat(st_mdgm, 1);
            Play1->setStat(st_mp, 1);
            Play1->setStat(st_pdmg, 1);
            Play1->setStat(st_res, 1);
            Play1->setStat(st_speed, 1);
            Play1->setStat(st_str, 1);
            Play1->setBonus(st_arm, 1);
            Play1->setBonus(st_gold, 1);
            Play1->setBonus(st_hp, 1);
            Play1->setBonus(st_int, 1);
            Play1->setBonus(st_mdgm, 1);
            Play1->setBonus(st_mp, 1);
            Play1->setBonus(st_pdmg, 1);
            Play1->setBonus(st_res, 1);
            Play1->setBonus(st_speed, 1);
            Play1->setBonus(st_str, 1);
            break;
        }
        case 7:
        {
            CChar* Play1 = new CChar(name,"Sauron's son");
            Play1->setStat(st_arm, 1);
            Play1->setStat(st_gold, 1);
            Play1->setStat(st_hp, 1);
            Play1->setStat(st_int, 1);
            Play1->setStat(st_mdgm, 1);
            Play1->setStat(st_mp, 1);
            Play1->setStat(st_pdmg, 1);
            Play1->setStat(st_res, 1);
            Play1->setStat(st_speed, 1);
            Play1->setStat(st_str, 1);
            Play1->setBonus(st_arm, 1);
            Play1->setBonus(st_gold, 1);
            Play1->setBonus(st_hp, 1);
            Play1->setBonus(st_int, 1);
            Play1->setBonus(st_mdgm, 1);
            Play1->setBonus(st_mp, 1);
            Play1->setBonus(st_pdmg, 1);
            Play1->setBonus(st_res, 1);
            Play1->setBonus(st_speed, 1);
            Play1->setBonus(st_str, 1);
            break;
        }
        case 8:
        {
            CChar* Play1 = new CChar(name,"Ent");
            Play1->setStat(st_arm, 1);
            Play1->setStat(st_gold, 1);
            Play1->setStat(st_hp, 1);
            Play1->setStat(st_int, 1);
            Play1->setStat(st_mdgm, 1);
            Play1->setStat(st_mp, 1);
            Play1->setStat(st_pdmg, 1);
            Play1->setStat(st_res, 1);
            Play1->setStat(st_speed, 1);
            Play1->setStat(st_str, 1);
            Play1->setBonus(st_arm, 1);
            Play1->setBonus(st_gold, 1);
            Play1->setBonus(st_hp, 1);
            Play1->setBonus(st_int, 1);
            Play1->setBonus(st_mdgm, 1);
            Play1->setBonus(st_mp, 1);
            Play1->setBonus(st_pdmg, 1);
            Play1->setBonus(st_res, 1);
            Play1->setBonus(st_speed, 1);
            Play1->setBonus(st_str, 1);
            break;
        }
	}
*/

}
