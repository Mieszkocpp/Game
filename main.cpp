
#include <iostream>


#include "CChar.h"
#include "CMob.h"
#include "CItem.h"

#define MAX_ITEMS 100

#include <string.h>
#include <stdio.h>
#include <fstream>
#include <vector>
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;

int main(void)
{
    int wybor;
	xml_document<> doc;
	xml_node<> * root;


	ifstream klasyXML ("klasy.xml");
	vector<char> buffer((istreambuf_iterator<char>(klasyXML)), istreambuf_iterator<char>());
	buffer.push_back('\0');
	doc.parse<0>(&buffer[0]);
	root = doc.first_node("char");

	for (xml_node<> * klasa = root->first_node("class"); klasa; klasa = klasa->next_sibling())
	{
	    cout<<"Klasa: "<<klasa->first_attribute("name")->value()<<endl;
	     cout<<endl;
	    if(klasa->first_node("arm") && klasa->first_node("arm")->first_attribute("value"))
            cout <<"arm: "<< klasa->first_node("arm")->first_attribute("value")->value()<<"  ";

        if(klasa->first_node("gold") && klasa->first_node("gold")->first_attribute("value"))
            cout <<"gold: "<<  klasa->first_node("gold")->first_attribute("value")->value()<<"  ";

        if(klasa->first_node("hp") && klasa->first_node("hp")->first_attribute("value"))
            cout <<"hp: "<<  klasa->first_node("hp")->first_attribute("value")->value()<<"  ";

	    if(klasa->first_node("int") && klasa->first_node("int")->first_attribute("value"))
            cout <<"int: "<<  klasa->first_node("int")->first_attribute("value")->value()<<"  ";

        if(klasa->first_node("mdgm") && klasa->first_node("mdgm")->first_attribute("value"))
            cout <<"mdgm: "<<  klasa->first_node("mdgm")->first_attribute("value")->value()<<"  ";

        if(klasa->first_node("mp") && klasa->first_node("mp")->first_attribute("value"))
            cout <<"mp: "<<  klasa->first_node("mp")->first_attribute("value")->value()<<"  ";

	    if(klasa->first_node("pdmg") && klasa->first_node("pdmg")->first_attribute("value"))
            cout <<"pdmg: "<<  klasa->first_node("pdmg")->first_attribute("value")->value()<<"  ";

        if(klasa->first_node("res") && klasa->first_node("res")->first_attribute("value"))
            cout <<"speed: "<<  klasa->first_node("res")->first_attribute("value")->value()<<"  ";

        if(klasa->first_node("speed") && klasa->first_node("speed")->first_attribute("value"))
            cout <<"speed: "<<  klasa->first_node("speed")->first_attribute("value")->value()<<"  ";

            if(klasa->first_node("str") && klasa->first_node("str")->first_attribute("value"))
            cout <<"str: "<<  klasa->first_node("str")->first_attribute("value")->value()<<"  ";
            cout<<endl;
            cout<<endl;
	    /*for(xml_node<> * stat = klasa->first_node("stat"); stat; stat = stat->next_sibling())
	    {
	        if(stat && stat->first_attribute("name")) cout<<stat->first_attribute("name")->value()<<": ";
            if(stat && stat->first_attribute("value")) cout<<stat->first_attribute("value")->value();
            cout << endl;
	    }*/
	}
	string name;
	cin>>name;
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
        CChar* Play1 = new CChar(name,"Forsaken");
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



}
