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


double readPositiveFloat(double* pInputPrice) {
    double price;
    cin >> price;
    while(cin.fail() || price<=0.0) {
	cin.clear();
	cin.ignore();
	cout << "Please enter a positive price for the item" << endl;
	cin >> price;
    }
    cout << "Avant le drame\n" << endl;
    *pInputPrice = price;
    cout << "Boum\n" << endl;
    return price;
}


double readPositiveFloat(double inputPrice) {
   double price;
    cin >> price;
    while(cin.fail() || price<=0.0) {
	cin.clear();
	cin.ignore();
	cout << "Please enter a positive price for the item" << endl;
	cin >> price;
    }
    return inputPrice;

}

int main() {
    double price = 0.0;
    double inputPrice = 0.0;
    /* Read number
    price = readPositiveFloat();
    cout << "(Read number) The price is : " << price << "€" << endl;
    */
    // Address
    double* pInputPrice; //= nullptr_t;
    cout << "pInputPrice = " << pInputPrice << "\n";
    cout << "*pInputPrice = " << *pInputPrice << "\n";
    price = readPositiveFloat(pInputPrice);
    cout << "(Address) The price is : " << price << "€" << endl;

    //Value
    price = readPositiveFloat(inputPrice);
    cout << "(Value) The price is : " << price << "€" << endl;
}

