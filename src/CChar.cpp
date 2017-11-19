#include "CChar.h"
/*
void CChar::chose_spel(int chose)
{

}*/


CChar::CChar(string name, string type)
{
    m_name = name;
    m_type = type;
}

CChar::~CChar()
{
    //dtor
}


void CChar::show()
{
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Name: "<<m_name<<endl;
    cout<<"Race: "<<m_type<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout << "Aramor: "<<m_stats[st_arm].getValue()<<"\t\t"<< "Res: "<<m_stats[st_res].getValue()<<endl;
    cout << "Helth points: "<<m_stats[st_hp].getValue()<<"\t"<< "Mana points: "<<m_stats[st_mp].getValue()<<endl;
    cout << "Strength: "<<m_stats[st_str].getValue()<<"\t\t"<< "Inteligence: "<<m_stats[st_int].getValue()<<endl;
    cout << "Phisical dmg: "<<m_stats[st_pdmg].getValue()<<"\t"<< "Magical dmg: "<<m_stats[st_mdgm].getValue()<<endl;
    cout << "Gold: "<<m_stats[st_gold].getValue()<<"\t\t"<< "Speed: "<<m_stats[st_speed].getValue()<<endl<<endl;

}
