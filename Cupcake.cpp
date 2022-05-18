#include "Cupcake.h"

#include "CircleCupcake.h"
#include "SquareCupcake.h"
#include "TriangleCupcake.h"

Cupcake::Cupcake(char cup) {
  switch (cup) {
    case 's': {
      theShape = new SquareCupcake[1];
      SquareCupcake square;
      *theShape = square;  // pointing to shape square
      break;
    }
    case 't': {
      theShape = new TriangleCupcake[1];
      TriangleCupcake triangle;
      *theShape = triangle;  // pointing to shape triangle
      break;
    }
    case 'c': {
      theShape = new CircleCupcake[1];
      CircleCupcake circle;
      *theShape = circle;  // pointing to shape circle
      break;
    }
  }
}

Cupcake::Cupcake() : Cupcake('s') {}  // Default is a square cupcake

double Cupcake::getArea() {
  double area = theShape->getArea();  // Finds area of shape
  cost = area / 50 * 3;               // Calculates and updates cost
  return area;
}

double Cupcake::getCost() { return cost; }

Cupcake::~Cupcake() {
  // delete[] theShape;
  // cout << "delete Cupcake\n";
}