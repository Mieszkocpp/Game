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
    cout << "Aramor: "<<m_stats[st_arm].show()<<"\t\t"<< "Res: "<<m_stats[st_res].show()<<endl;
    cout << "Helth points: "<<m_stats[st_hp].show()<<" \t"<< "Mana points: "<<m_stats[st_mp].show()<<endl;
    cout << "Strength: "<<m_stats[st_str].show()<<"\t\t"<< "Inteligence: "<<m_stats[st_int].show()<<endl;
    cout << "Phisical dmg: "<<m_stats[st_pdmg].show()<<"\t\t"<< "Magical dmg: "<<m_stats[st_mdgm].show()<<endl;
    cout << "Gold: "<<m_stats[st_gold].show()<<"\t\t"<< "Speed: "<<m_stats[st_speed].show()<<endl<<endl;

}
