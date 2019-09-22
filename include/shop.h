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

Item* createItemArray(Item *item, int length);
Item readItem();
void printItem(Item item);
void printItems(Item *items, int length);

void swapPrices(Item &i1, Item &i2);
Item &cheaperItem(Item *items, int length);
Item &mostExpensiveItem(Item *items, int length);
void joke(Item *items, int length);
void joke2(Item *items, int length);

bool logical_gate(bool & a, bool & b);

#endif

  
