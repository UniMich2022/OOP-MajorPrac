#include "CircleCupcake.h"

#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

double CircleCupcake::getArea() {
  double area;
  cout << "\n\t\tEnter the radius of your circle cupcake:";
  cin >> x;
  // Validity test
  while (cin.fail()) {
    cin.clear();  // Clear input
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input, enter enter a number: ";
    cin >> x;
  }
  area = 3.14 * x * x;
  cout << setprecision(2) << fixed;  // Displays to 2 decimal points
  cout << "\t\tThe size area of your circle cupcake is " << area << endl;

  return area;
}

CircleCupcake::CircleCupcake() : Shape() {}