#include "TriangleCupcake.h"

#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

double TriangleCupcake::getArea() {
  double area;
  cout << "\n\t\tEnter the base length of your triangle:";
  cin >> x;
  // Input validation
  while (cin.fail() || x < 1) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n\t\tInvalid input, please enter a number greater than or equal "
            "to 1.";
    cin >> x;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clear buffer

  cout << "\n\t\tEnter the height of your triangle:";
  cin >> y;
  // Input validation
  while (cin.fail() || y < 1) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n\t\tInvalid input, please enter a number greater than or equal "
            "to 1.";
    cin >> y;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clear buffer
  area = 0.5 * x * y;
  cout << setprecision(2) << fixed;
  cout << "\n\t\tThe size area of your triangle cupcake is " << area << endl;

  return area;
}

TriangleCupcake::TriangleCupcake() : Shape() {}