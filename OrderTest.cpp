#include <iostream>

#include "Cupcake.h"
#include "Order.h"
using namespace std;
int main() {
  Order order;
  Cupcake c;

  if (order.getTotalCost() != 0) {
    cout << "Origin total cost failed" << endl;
  }

  order.addCupcake(c);
  cout << "Pointer to theCupcake is " << order.getCupcake() << endl;
  cout << "Cupcake added area " << order.getCupcake()[0].getArea() << endl;

  order.payment();
  order.clearCart();
  if (order.getTotalCost() != 0) {
    cout << "Clear cart total cost failed" << endl;
  }

  return 0;
}