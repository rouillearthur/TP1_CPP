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

Item* createItemArray(Item *item, int lenght);
Item setItem();
void readItem(Item item);
void readItems(Item *items, int lenght);

void swapPrice(Item &i1, Item &i2);
Item &cheaperItem(Item *items, int lenght);
Item &mostExpensiveItem(Item *items, int lenght);
void joke(Item *items, int lenght);

#endif
