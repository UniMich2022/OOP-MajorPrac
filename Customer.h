#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

#include "Order.h"
using namespace std;

class Customer {
 private:
  Order* myOrder;
  int numOrder;

 public:
  Customer();                      // Constructor
  ~Customer();                     // Destructor
  Order* getOrder();               // Returns pointer to Order array
  void createOrder(Order order1);  // Add an order to myOrder
};

#endif