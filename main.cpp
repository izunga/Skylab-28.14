
//git repository link
//team members

#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

string name;
string date;

cout << "Enter customer's name:" << endl;
cin >> name;

cout << "Enter today's date:" << endl;
cin >> date;

cout << "Customer name: " << name << endl;
cout << "Today's date: " << date << endl;

ShoppingCart(name, date);

void PrintMenu() {
   /* Type your code here */
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
   
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   
}

int main() {
   /* Type your code here */
   
   return 0;
}
