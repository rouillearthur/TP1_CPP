#ifndef __SHOP_H__
#define __SHOP_H__

struct Item {
    char name[30];
    double price;
};


namespace Ref {
  void readPositiveFloat(double inputPrice);
}


double readPositiveFloat();
void readPositiveFloat(double* pInputPrice);
void readPositiveFloat(double & inputPrice);

Item setItem();
Item* createItemArray(Item *item, int lenght);

#endif
