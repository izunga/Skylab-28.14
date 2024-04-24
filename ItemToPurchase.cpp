#include <iostream>
#include <iomanip>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase(){
itemPrice = 0;
itemQuantity = 0;
itemDescription = " ";
itemName = " ";
}
      
ItemToPurchase(string name, string description,  int price, int quantity = 0){
itemName = name;
itemDescription = description;
itemPrice = price;
itemQuantity = quantity;
}

      
      void SetName(string name){
itemName = name;
      }
      void SetDescription(string description){
itemDescription = description;
      }
      void SetPrice(int price){
itemPrice = price;
      }
      void SetQuantity(int quantity){
            itemQuantity = quantity;
      }

 void PrintItemCost(){
cout  << itemName << " " << itemQuantity << " @ $" << itemprice << " =  $" << itemprice * itemQuantity << endl;
 }
      void PrintItemDescription(){
            cout << itemName << ": " << itemDescription << endl;
      }
