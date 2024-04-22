#include "ShoppingCart.h"


//setters

void ShoppingCart::AddItem(ItemToPurchase item) {
  cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string name) {
  bool found = false;
  for (unsigned int i = 0; I <carItems.size(); i++) {
    if (cartItems[i].GetName() == name) {
      cartItems.erase(cartItems.begin() + i);
      found = true;
      break;
    }
  }
  if (!found) {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
  bool found = false;
    for (unsigned int i = 0; i < cartItems.size(); ++i) {
        if (cartItems[i].GetName() == item.GetName()) {
            if (item.GetDescription() != "none") {
                cartItems[i].SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                cartItems[i].SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                cartItems[i].SetQuantity(item.GetQuantity());
            }
            found = true;
            break;
        }
    }
  if (!found) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }

}

