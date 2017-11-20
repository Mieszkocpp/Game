
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


CStat getXMLValue(xml_node<> *nodeName, string subNode)
{
    CStat ret;
    if(nodeName)
    {
            xml_node<> *node = nodeName->first_node(subNode.c_str());
            if(node && node->first_attribute("value"))
                ret.setValue(atol(node->first_attribute("value")->value()));
            if(node && node->first_attribute("multi"))
                ret.setMulti(atof(node->first_attribute("multi")->value()));
     }
    return ret;
}

int main(void)
{
///loading data

    CChar races[100]; ///?????

    CChar player;

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
	do
    {
        cout<<"Choose race: [0-5]";
        cin>>race;
    }
	while(race < 0 || race > 5);

	player = races[race];
	player.setName(name);

	player.show();



}
