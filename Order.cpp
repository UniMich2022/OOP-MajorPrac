#include "Order.h"

#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

double Order::getTotalCost() { return totalCost; }
Cupcake* Order::getCupcake() { return theCupcake; }
// Decoration* getDeco() { return theDeco; }
void Order::payment() {
  char pay;
  cout << "\n\t\t=====================================";
  cout << "\n\t\tYou are buying " << numCupcake << " cupcakes!" << endl;
  cout << setprecision(2) << fixed;
  // Print to 2 decimal places
  cout << "\n\t\tThe cost is $" << totalCost << endl;

  cout << "\n\t\tType [P] to pay or [X] to cancel" << endl;
  cin >> pay;

  // Validity check
  while ((pay != 'P') && (pay != 'p') && (pay != 'X') && (pay != 'x')) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid choice please type P to pay or X to cancel. ";
    cin >> pay;
  }
  switch (pay) {
    case 'P':
    case 'p':
      cout << "\n\t\tYour order has been received!" << endl;
      break;
    case 'X':
    case 'x':
      cout << "\n\t\tOrder has been cancelled!" << endl;
      break;
  }
  clearCart();  // Clears cupcake pointer
}
Order::Order() {
  totalCost = 0;
  theCupcake = new Cupcake[20];
  numCupcake = 0;
}
void Order::addCupcake(Cupcake cup) {
  if (numCupcake < 20) {
    // Max 20 orders
    theCupcake[numCupcake] = cup;
    numCupcake++;
    totalCost += cup.getCost();  // Updates totalCost
  } else {
    cout << "Your cart is full!" << endl;
  }
}
Order::~Order() {}

void Order::clearCart() {
  numCupcake = 0;
  totalCost = 0;
}