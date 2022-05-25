#include <iostream>

#include "Cupcake.h"
#include "Customer.h"
#include "Order.h"
using namespace std;
int main() {
  Customer A;
  Order order;

  if (A.getID() != "00000000"){
      cout << "Get ID failed" << endl;
  }

  A.createOrder(order);
   cout << A.getOrder() << endl;               // Returns pointer to Order array
 

  return 0;
}