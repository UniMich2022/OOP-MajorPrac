#include <iostream>

#include "SquareCupcake.h"
using namespace std;

int main() {
  SquareCupcake S;
  if (S.get_x() != 0) {
    cout << "Get x test failed" << endl;
  }
  if (S.get_y() != 0) {
    cout << "Get y test failed" << endl;
  }

  S.set_x_y(1, 1);
  if (S.get_x() != 1) {
    cout << "Get x test failed after setting" << endl;
  }
  if (S.get_y() != 1) {
    cout << "Get y test failed after setting" << endl;
  }

  if (S.getArea() != 1) {
    cout << "Get area failed" << endl;
  }
  if (S.getArea() != 0) {
    cout << "Get area failed" << endl;
  }
  return 0;
}