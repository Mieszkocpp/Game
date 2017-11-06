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
	    if(klasa->first_node("str") && klasa->first_node("str")->first_attribute("value"))
            cout << klasa->first_node("str")->first_attribute("value")->value()<<endl;;

        if(klasa->first_node("int") && klasa->first_node("int")->first_attribute("value"))
            cout << klasa->first_node("int")->first_attribute("value")->value()<<endl;;

	    /*for(xml_node<> * stat = klasa->first_node("stat"); stat; stat = stat->next_sibling())
	    {
	        if(stat && stat->first_attribute("name")) cout<<stat->first_attribute("name")->value()<<": ";
            if(stat && stat->first_attribute("value")) cout<<stat->first_attribute("value")->value();
            cout << endl;
	    }*/
	}

}
