#ifndef __SHOP_H__
#define __SHOP_H__

struct Item {
    char name[30];
    double price;
};

double readPositiveFloat();

double readPositiveFloat(double* pInputPrice);

double readPositiveFloat(double inputPrice);

#endif
