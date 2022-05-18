#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class TriangleCupcake : public Shape {
 public:
  double getArea();   // Calculates and returns area of triangle
  TriangleCupcake();  // Constructor
};
#endif