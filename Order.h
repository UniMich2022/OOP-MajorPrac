#ifndef ORDER_H
#define ORDER_H
#include "Cupcake.h"
class Order {
 private:
  double totalCost;
  Cupcake* theCupcake;
  //Decoration * theDeco;
  int numCupcake;

 public:
  double getTotalCost();         // Returns totalCost
  Cupcake* getCupcake();         // Returns theCupcake
  //Decoration * getDeco();
  void addCupcake(Cupcake cup);  // Adds cup to theCupcake
  void payment();                // Asks if user wants to pay or cancel order
  void clearCart();              // Clears theCupcake
  Order();                       // Constructor
  ~Order();                      // Destructor
};
#endif