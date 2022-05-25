#include "CircleCupcake.h"

#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

double CircleCupcake::getArea() {
  double area;
  cout << "\n\t\tEnter the radius of your circle cupcake:";
  cin >> x;
  while (cin.fail() || x < 1) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n\t\tInvalid input, please enter a number greater than or equal "
            "to 1: ";
    cin >> x;
  }
  area = 3.14 * x * x;
  cout << setprecision(2) << fixed;
  cout << "\t\tThe size area of your square cupcake is ";

  return area;
}

CircleCupcake::CircleCupcake() : Shape() {}