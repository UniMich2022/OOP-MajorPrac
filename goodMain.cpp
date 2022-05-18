#include <unistd.h>  //for sleep function

#include <iostream>

#include "CircleCupcake.h"
#include "Cupcake.h"
#include "Customer.h"
#include "Display.h"
#include "Shape.h"
#include "SquareCupcake.h"
#include "TriangleCupcake.h"

int main(void) {
  Display D;
  D.display();
  return 0;
}