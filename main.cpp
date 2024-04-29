
//git repository link
// https://github.com/izunga/Skylab-28.14
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
    cout << endl;
   
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
    switch(option) {
        case 'a':
            {
                string itemName, itemDescription;
                int itemPrice, itemQuantity;
                
                cout << "ADD ITEM TO CART" << endl;
                cout << "Enter the item name:";
                cin.ignore();
                getline(cin, itemName);
                cout << endl;
                cout << "Enter the item description:";
                getline(cin, itemDescription);
                cout << endl;
                cout << "Enter the item price:";
                cin >> itemPrice;
                cout << endl;
                cout << "Enter the item quantity:";
                cin >> itemQuantity;
                cout << endl;
                
              
                ItemToPurchase newItem(itemName, itemDescription, itemPrice, itemQuantity);
                theCart.AddItem(newItem);
                //cout << endl;
                //PrintMenu();
                
                
            }
            break;
        case 'd':
            {
                string itemName;
                cout << "REMOVE ITEM FROM CART" << endl;
                cout << "Enter name of item to remove:";
                cin.ignore();
                getline(cin, itemName);
                cout << endl;
                theCart.RemoveItem(itemName);
                //cout << endl;
                //PrintMenu();
                
            }
            break;
        case 'c':
            {
                string itemName;
                //int newQuantity;
                ItemToPurchase modItem;
                //modItem = new ItemToPurchase();
                cout << "CHANGE ITEM QUANTITY" << endl;
                cout << "Enter the item name:";
                cin.ignore();
                modItem.SetName(itemName);
                getline(cin, itemName);
                modItem.SetName(itemName);
                //cout << "Enter the new quantity: ";
                //cin >> newQuantity;
                //modItem.SetQuanitity(itemQuantity);
                cout << endl;
                theCart.ModifyItem(modItem);
                //cout << endl;
                //PrintMenu();
                
            }
            break;
        case 'i':
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            theCart.PrintDescriptions();
            //cout << endl;
            //PrintMenu();
            break;
        case 'o':
            cout << "OUTPUT SHOPPING CART" << endl;
            cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart.GetDate() << endl;
            theCart.PrintTotal();
            //cout << endl;
            //PrintMenu();
            
            break;
        case 'q':
            cout << "Exiting program..." << endl;
            break;
        default:
            //cout << "Invalid option. Please try again." << endl;
            break;
    }
}


int main() {
   /* Type your code here */
   string name;
   string date;
   char option;
   bool valid = false;
   
   cout << "Enter customer's name:" << endl;
   getline(cin, name);
   
   cout << "Enter today's date:" << endl;
   getline(cin, date);
   
   cout<<endl;
   
   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl;
   cout<<endl;
   
   ShoppingCart myCart(name, date);
   
   PrintMenu();
   cout << "Choose an option:"<<endl;
   cin >> option;
   if(option=='a'||option=='d'||option=='c'||option=='i'||option=='o'||option=='q'){
      valid = true;
   }
   else{
      valid = false;
   }

   while(option!='q'){
      
      ExecuteMenu(option, myCart);
      
      if(option=='a'||option=='d'||option=='c'||option=='i'||option=='o'||option=='q'){
      valid = true;
      }
      else{
      valid = false;
      }
       
      if(valid){
      cout << endl;
      PrintMenu();
   }
      cout << "Choose an option:"<<endl;
      cin >> option;
      
   }

   
   return 0;
}
