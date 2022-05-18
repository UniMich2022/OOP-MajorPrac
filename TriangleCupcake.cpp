#include "TriangleCupcake.h"

#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

double TriangleCupcake::getArea() {
  double area;
  cout << "\n\t\tEnter the base of your triangle cupcake:";
  cin >> x;
  while (cin.fail()) {  // Validity test
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input, enter enter a number: ";
    cin >> x;
  }
  cout << "\n\t\tEnter the height of your triangle cupcake:";
  cin >> y;
  while (cin.fail()) {  // Validity test
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input, enter enter a number: ";
    cin >> x;
  }
  area = 0.5 * x * y;
  cout << setprecision(2) << fixed;  // Set to 2 decima places
  cout << "\n\t\tThe size area of your triangle cupcake is " << area << endl;

  return area;
}

TriangleCupcake::TriangleCupcake() : Shape() {}