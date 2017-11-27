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
    cout<<"Race: "<<m_type<<endl;
    cout<<"-----------------------------------------------------------"<<endl;

    map<string,CStat>::iterator it = m_stats.begin();
    for (it=m_stats.begin(); it!=m_stats.end(); ++it)
        cout << it->first << ": " << it->second.getValue() << ", (x " << it->second.getMulti() <<")"<<endl;


}

