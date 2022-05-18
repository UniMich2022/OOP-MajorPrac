#include "SquareCupcake.h"

#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

double SquareCupcake::getArea() {
  double area;
  cout << "\n\t\tEnter side size of your square cupcake:";
  cin >> x;
  while (cin.fail()) {
    cin.clear();  // Clear input
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input, enter enter a number: ";
    cin >> x;
  }
  area = x * x;
  cout << setprecision(2) << fixed;  // Set to 2 decimal places
  cout << "\n\t\tThe area of your square cupcake is " << area << endl;

  return area;
}

SquareCupcake::SquareCupcake() : Shape() {}
