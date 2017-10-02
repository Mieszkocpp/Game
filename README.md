#include <iostream>
using namespace std;

#define MAX_ITEMS 100

class cItem
{
public:    
    cItem(string nazwa)
    {
        this->nazwa = nazwa;
    }
    string nazwa;

};

class cBohater
{
    double hp,mana;
    cItem* p[MAX_ITEMS];
public:    
    cBohater() {
        hp = 1;
        mana = 1;
        for(int i=0;i<MAX_ITEMS;++i)
        {
            p[i] = NULL;
        }
        
    }
    ~cBohater()
    {
        for(int i=0;i<MAX_ITEMS;++i)
        {
            if(p[i] != NULL) delete p[i];
        }
    }
    
    int dodaj_Item(cItem *item) {
        if(item == NULL) return 2; //brak itemu
        for(int i=0;i<MAX_ITEMS;++i)
        {
            if(p[i] == NULL) 
            {
                p[i] = item;
                return 0; //wszystko ok
            }
        }
        return 1; //brak miejsca
        
    }
    
    void pokaz()
    {
        cout<<hp<<" "<<mana<<endl;
        for(int i=0;i<MAX_ITEMS;++i)
        {
            if(p[i]!=NULL) cout<<"Item: "<<p[i]->nazwa<<endl;
        }
    }

};


class cMob
{

};

int main() {
    
    cBohater bohater;

    bohater.dodaj_Item(new cItem("miecz"));
    bohater.dodaj_Item(new cItem("miecz+2"));
    bohater.dodaj_Item(new cItem("miecz unikat"));
    
    bohater.pokaz();
    

    return 0;
}
