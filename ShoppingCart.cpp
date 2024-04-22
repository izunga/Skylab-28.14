


      
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


