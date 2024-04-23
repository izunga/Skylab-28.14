#include "ShoppingCart.h"
//all the setters


void ShoppingCart::ShoppingCart(){};

void void ShoppingCart::ShoppingCart(string name, string date){
  customerName = name;
  currentDate = date; 
}


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

string ShoppingCart::GetCustomerName() const{
        return customerName;
      }
      string ShoppingCart::GetDate() const(
    return currentDate;
      }
      
      int ShoppingCart::GetNumItemsInCart(){
          int num = 0;
            for(int i = 0; i < cartItems.size(); i++){
                  num += cartItem[i].GetQuantity();
                        }
            return num;
      }
                  

                  
      double ShoppingCart::GetCostOfCart(){
             double num = 0;
            for(int i = 0; i < cartItems.size(); i++){
                  num += cartItem[i].GetCost();
                        }
            return num;      
      }
