#include <iostream>
#include "../include/shop.h"
using namespace std;

double readPositiveFloat() {
    double price;
    cin >> price;

    while(cin.fail() || price<=0.0) {
	cin.clear();
	cin.ignore();
	cout << "Please enter a positive price for the item" << endl;
	cin >> price;
    }
    return price;
}


void readPositiveFloat(double* pInputPrice) {
    double price;
    cin >> price;
    while(cin.fail() || price<=0.0) {
	cin.clear();
	cin.ignore();
	cout << "Please enter a positive price for the item" << endl;
	cin >> price;
    }
    *pInputPrice = price;

}


void readPositiveFloat(double inputPrice) {
   double price;
    cin >> price;
    while(cin.fail() || price<=0.0) {
	cin.clear();
	cin.ignore();
	cout << "Please enter a positive price for the item" << endl;
	cin >> price;
    }
    inputPrice=price;

}

int main() {
    double price = 0.0;
    double inputPrice = 0.0;
    // Read number
    price = readPositiveFloat();
    cout << "(Read number) The price is : " << price << "€" << endl;

    // Address
    double* pInputPrice=&inputPrice;
    readPositiveFloat(pInputPrice);
    cout << "(Address) The price is : " << *pInputPrice << "€" << endl;

    //Value
    readPositiveFloat(inputPrice);
    cout << "(Value) The price is : " << inputPrice << "€" << endl;
}

