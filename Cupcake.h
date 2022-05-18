#ifndef CUPCAKE_H
#define CUPCAKE_H
#include <iostream>

//#include "Decoration.h"
#include "Shape.h"
#include "SquareCupcake.h"
using namespace std;

class Cupcake {
 protected:
  Shape* theShape;
  // Decoration* theDeco;  // Add in for Week 11
  double cost;

 public:
  Cupcake(char cup);  // Constructor
  Cupcake();          // Default constructor
  // void getShape();  // Prints shape of cupcake (Wk 11)
  double getArea();  // Calculates area of cupcake and updates cost
  double getCost();  // Returns cost
  ~Cupcake();        // Destructor
};
#endif