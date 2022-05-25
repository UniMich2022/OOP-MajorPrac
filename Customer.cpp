#include "Customer.h"

Customer::Customer() {
  myOrder = new Order[10];  // Max 10 orders
  numOrder = 0;
}

Customer::~Customer() { delete[] myOrder; }

Order* Customer::getOrder() { return myOrder; }

void Customer::createOrder(Order order1) {
  // IF myOrder not full, adds order1 to myOrder
  if (numOrder < 10) {
    myOrder[numOrder] = order1;
    numOrder++;
  } else {
    cout << "You can only have 10 orders at once!" << endl;
  }
}