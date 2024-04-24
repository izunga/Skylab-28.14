
//git repository link

//team members
//Jaden Kierulff, Inzwhi Zunga, Chris Deamon

#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"


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
    switch(option) {
        case 'a':
            {
                string itemName, itemDescription;
                int itemPrice, itemQuantity;
                
                cout << "ADD ITEM TO CART" << endl;
                cout << "Enter the item name: ";
                cin.ignore();
                getline(cin, itemName);
                cout << "Enter the item description: ";
                getline(cin, itemDescription);
                cout << "Enter the item price: ";
                cin >> itemPrice;
                cout << "Enter the item quantity: ";
                cin >> itemQuantity;
                
              
                ItemToPurchase newItem(itemName, itemDescription, itemPrice, itemQuantity);
                theCart.AddItem(newItem);
                break;
            }
        case 'd':
            {
                string itemName;
                cout << "REMOVE ITEM FROM CART" << endl;
                cout << "Enter name of item to remove: ";
                cin.ignore();
                getline(cin, itemName);
                theCart.RemoveItem(itemName);
                break;
            }
        case 'c':
            {
                string itemName;
                int newQuantity;
                cout << "CHANGE ITEM QUANTITY" << endl;
                cout << "Enter the item name: ";
                cin.ignore();
                getline(cin, itemName);
                cout << "Enter the new quantity: ";
                cin >> newQuantity;
                theCart.ModifyItem(itemName, newQuantity);
                break;
            }
        case 'i':
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            theCart.PrintDescriptions();
            break;
        case 'o':
            cout << "OUTPUT SHOPPING CART" << endl;
            cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart.GetDate() << endl;
            theCart.PrintTotal();
            break;
        case 'q':
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
    }
}


int main() {
   /* Type your code here */
   string name;
   string date;
   
   cout << "Enter customer's name:" << endl;
   cin >> name;
   
   cout << "Enter today's date:" << endl;
   cin >> date;
   
   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl;
   
   ShoppingCart(name, date);

   
   return 0;
}
