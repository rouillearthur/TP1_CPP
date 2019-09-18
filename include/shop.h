#ifndef __SHOP_H__
#define __SHOP_H__

struct Item {
    char name[30];
    double price;
};

double readPositiveFloat();

void readPositiveFloat(double* pInputPrice);

void readPositiveFloat(double inputPrice);

#endif
