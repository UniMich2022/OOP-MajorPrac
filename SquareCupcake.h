#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class SquareCupcake : public Shape {
 public:
  double getArea();  // Calculates and returns area of square
  SquareCupcake();   // Constructor
};
#endif