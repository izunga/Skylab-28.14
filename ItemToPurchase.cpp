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

      
void ItemToPurchase::SetName(string name){
itemName = name;
      }

void ItemToPurchase::SetDescription(string description){
itemDescription = description;
      }

void ItemToPurchase::SetPrice(int price){
itemPrice = price;
      }

void ItemToPurchase::SetQuantity(int quantity){
            itemQuantity = quantity;
      }

string ItemToPurchase::GetName(){
      return itemName;
}

string ItemToPurchase::GetDescription(){
      return itemDescription;
}

int ItemToPurchase::GetPrice(){
      return itemPrice;
}

int ItemToPurchase::GetQuantity(){
      return itemQuantity;
}

void ItemToPurchase::PrintItemCost(){
cout  << itemName << " " << itemQuantity << " @ $" << itemprice << " =  $" << itemprice * itemQuantity << endl;
 }
void ItemToPurchase::PrintItemDescription(){
            cout << itemName << ": " << itemDescription << endl;
      }
