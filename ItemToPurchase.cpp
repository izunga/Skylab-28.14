#include <iostream>
#include <iomanip>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase(){
price = 0;
quantity = 0;
}
      
ItemToPurchase(string name, string description, 
                  int price, int quantity = 0){

      
      void SetName(string name);
      void SetDescription(string description);
      void SetPrice(int price);
      void SetQuantity(int quantity);
