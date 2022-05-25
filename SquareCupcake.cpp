#include "SquareCupcake.h"

#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

double SquareCupcake::getArea() {
  double area;
  cout << "\n\t\tEnter side size of your square cupcake:";
  cin >> x;
  while (cin.fail() || x < 1) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n\t\tInvalid input, please enter a number greater than or equal "
            "to 1.";
    cin >> x;
  }
  area = x * x;
  cout << setprecision(2) << fixed;
  cout << "\n\t\tThe area of your square cupcake is " << area << endl;

  return area;
}

SquareCupcake::SquareCupcake() : Shape() {}