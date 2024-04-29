#include <iostream>
#include <iomanip>
using namespace std;

#include "ItemToPurchase.h"

// Default constructor definition
ItemToPurchase::ItemToPurchase() {
    itemPrice = 0;
    itemQuantity = 0;
    itemDescription = " ";
    itemName = " ";
}

// Parameterized constructor definition
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity) {
    itemName = name;
    itemDescription = description;
    itemPrice = price;
    itemQuantity = quantity;
}

// Setter definitions
void ItemToPurchase::SetName(string name) {
    itemName = name;
}

void ItemToPurchase::SetDescription(string description) {
    itemDescription = description;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

// Getter definitions
string ItemToPurchase::GetName() const {
    return itemName;
}

string ItemToPurchase::GetDescription() const {
    return itemDescription;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

// PrintItemCost definition
void ItemToPurchase::PrintItemCost() {
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemPrice * itemQuantity << endl;
}

// PrintItemDescription definition
void ItemToPurchase::PrintItemDescription() {
    cout << itemName << ": " << itemDescription << endl;
}
