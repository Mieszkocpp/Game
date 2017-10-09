#include "CChar.h"

void CChar::chose_spel(int chose)
{

}

int CChar::get_stat(ST st)
{
    return m_stat[st].get();
}

CChar::CChar()
{
    get_stat(st_int);
}

CChar::~CChar()
{
    //dtor
}
