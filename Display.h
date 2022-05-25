#ifndef DISPLAY
#define DISPLAY
#include <unistd.h>  //for sleep function

#include <limits>

#include "CircleCupcake.h"
#include "Cupcake.h"
#include "Customer.h"
#include "Order.h"
#include "Shape.h"
#include "SquareCupcake.h"
#include "TriangleCupcake.h"

using namespace std;

class Display {
 private:
  Customer A;
  Order B;

 public:
  void display();  // user interface
  void loading();  // creates loading effect
};
#endif