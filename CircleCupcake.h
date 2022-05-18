#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class CircleCupcake : public Shape {
 public:
  double getArea();  // Calculates and returns area of circle
  CircleCupcake();   // Default constructor
};
#endif