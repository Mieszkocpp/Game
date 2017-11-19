#ifndef CITEM_H
#define CITEM_H

#include <string>
#include "../stale.h"
#include "CObject.h"

using namespace std;

class CItem : public CObject
{
public:
    CItem(string name,string type);
    virtual ~CItem();

};

#endif // CITEMS_H
