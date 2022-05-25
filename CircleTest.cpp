#include <iostream>

#include "CircleCupcake.h"
using namespace std;

int main() {
  CircleCupcake C;  // Testing Constructor
  if (C.get_x() != 0) {
    cout << "Get x test failed" << endl;
  }
  if (C.get_y() != 0) {
    cout << "Get y test failed" << endl;
  }

  C.set_x_y(1, 1);
  if (C.get_x() != 1) {
    cout << "Get x test failed after setting" << endl;
  }
  if (C.get_y() != 1) {
    cout << "Get y test failed after setting" << endl;
  }

  if (C.getArea() != 3.14) {
    cout << "Get area failed" << endl;
  }
  if (C.getArea() != 0) {
    cout << "Get area failed" << endl;
  }
  return 0;
}