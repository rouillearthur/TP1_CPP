#include <iostream>
#include <array>
#include "../include/shop.h"
using namespace std;

double readPositiveFloat() {
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
    return price;
}


void readPositiveFloat(double* pInputPrice) {
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
    inputPrice=price;
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
    inputPrice=price;
   
}

Item setItem() {
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

Item* createItemArray(Item *items, int lenght) {
  items = new Item[lenght];
  for (int i=0;i<lenght;i++) {
    items[i]=setItem();
  }
  return items;
}

void readItem(Item item) {
  cout << item.name << " (" << item.price << "€)" << endl;
}

void readItems(Item *items) { 
  cout << "Item array :" << endl;
  for (int i=0;i<(sizeof(items)/sizeof(*items));i++) {
    cout << "-> ";
    readItem(items[i]);
  }
}

int main() {
  /*  double price = 0.0;
    double inputPrice = 0.0;
    double* pInputPrice=&inputPrice;
    
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
  Item item = setItem();
  cout << item.name << " (" << item.price << "€)" << endl;
  */
  Item *items = createItemArray(items,3);
  readItems(items);
}

