#include <iostream>
#include <array>
#include "../include/shop.h"
using namespace std;

double readPositiveFloat() {
    double price;
    cout << "Price : ";
    cin >> price;

    while(cin.fail() || price <= 0.0) {
	cin.clear();
	cin.ignore();
	cout << "Please enter a positive non-nul price : ";
	cin >> price;
	cout << endl;
    }
    return price;
}


void readPositiveFloat(double* pInputPrice) {
    double price;
     cout << "Price : ";
    cin >> price;
    while(cin.fail() || price <= 0.0) {
	cin.clear();
	cin.ignore();
	cout << "Please enter a positive non-nul price : ";
	cin >> price;
	cout << endl;
    }
    *pInputPrice = price;

}


void Ref::readPositiveFloat(double inputPrice) {
   double price;
 cout << "Price : ";
   cin >> price;
    while(cin.fail() || price<=0.0) {
	cin.clear();
	cin.ignore();
	cout << "Please enter a positive non-nul price : ";
	cin >> price;
	cout << endl;
    }
    inputPrice = price;
}

void readPositiveFloat(double & inputPrice) {
   double price;
   cout << "Price : ";
    cin >> price;
    while(cin.fail() || price<=0.0) {
	cin.clear();
	cin.ignore();
	cout << "Please enter a positive non-nul price : ";
	cin >> price;
	cout << endl;
    }
    inputPrice = price;
   
}

Item readItem() {
  Item item;
  cout << "Please enter item name (30 char max.) : ";
  cin >> item.name;
  while(cin.fail()) {
	cin.clear();
	cin.ignore();
	cout << "Please enter item name (30 char max.) : ";
	cin >> item.name;
	cout << endl;
  }
  
  readPositiveFloat(item.price);
  return item;
}

Item* createItemArray(Item *items, int length) {
  items = new Item[length];
  for (int i = 0;i<length;i++) {
    items[i] = readItem();
  }
  return items;
}

void printItem(Item item) {
  cout << item.name << " (" << item.price << "€)" << endl;
}

void printItems(Item *items, int length) { 
  cout << "Item array :" << endl;
  for (int i = 0;i<length;i++) {
    cout << "-> ";
    printItem(items[i]);
  }
}

void swapPrices(Item &i1, Item &i2) {
  double &a = i1.price;
  double &b = i2.price;
  a = a+b;
  b = a-b;
  a = a-b;
}

Item &cheaperItem(Item *items, int length) {
  int itemIndex = 0;
  double minPrice = items[0].price;
  for(int i = 1;i<length;i++) {
    if(items[i].price<minPrice) {
      itemIndex = i;
      minPrice = items[i].price;
    }
  }
  return items[itemIndex];
}

Item &mostExpensiveItem(Item *items, int length) {
  int itemIndex;
  double maxPrice = 0.0;
  for(int i = 0;i<length;i++) {
    if(items[i].price>maxPrice) {
      itemIndex = i;
      maxPrice = items[i].price;
    }
  }
  return items[itemIndex];
}


void joke(Item *items, int length) {
  swapPrices(cheaperItem(items, length), mostExpensiveItem(items,length));
  printItems(items,length);
  
}

void joke2(Item *items, int length) {
  Item &cheaper = cheaperItem(items,length);
  Item &mostExpensive = mostExpensiveItem(items,length);

  double tmp = cheaper.price;
  cheaper.price = mostExpensive.price;
  mostExpensive.price = tmp;

  printItems(items,length);
}

bool logical_gate(bool & a, bool & b) {
    return (a || b); // Logical function AND
}

int main() {

/*
// I - PLAYING WITH DIFFERENT ARGUMENT TYPES
    double price = 0.0;
    double inputPrice = 0.0;
    double* pInputPrice = &inputPrice;
    
    // Read number
    price = readPositiveFloat();
    cout << "(Read number) The price is : " << price << "€" << endl;

    // Address
    readPositiveFloat(pInputPrice);
    cout << "(Address) The price is : " << *pInputPrice << "€" << endl;

    // Value
    Ref::readPositiveFloat(inputPrice);
    cout << "(Value) The price is : " << inputPrice << "€" << endl;

    // Reference
    readPositiveFloat(inputPrice);
    cout << "(Reference) The price is : " << inputPrice << "€" << endl;
*/

/*
// II - LET'S MAKE A JOKE 
    Item *items = createItemArray(items,3);
    printItems(items,3);
    joke(items,3);
    //joke2(items,3);
*/  

/*
// III - REFERENCES AND RETURN TYPE
    swapPrices(readItem(),readItem());
*/

if (logical_gate(true,true)) { cout << "OK" << endl; }    
}

