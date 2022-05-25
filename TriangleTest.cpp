#include <iostream>

#include "TriangleCupcake.h"
using namespace std;

int main() {
  TriangleCupcake T;
  if (T.get_x() != 0) {
    cout << "Get x test failed" << endl;
  }
  if (T.get_y() != 0) {
    cout << "Get y test failed" << endl;
  }

  T.set_x_y(1, 1);
  if (T.get_x() != 1) {
    cout << "Get x test failed after setting" << endl;
  }
  if (T.get_y() != 1) {
    cout << "Get y test failed after setting" << endl;
  }

  if (T.getArea() != 0.5) {
    cout << "Get area failed" << endl;
  }
  if (T.getArea() != 0) {
    cout << "Get area failed" << endl;
  }
  return 0;
}