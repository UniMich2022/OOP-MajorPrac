#ifndef CUPCAKE_H
#define CUPCAKE_H
#include <iostream>

#include "Decorations.h"
#include "Shape.h"
#include "SquareCupcake.h"
using namespace std;

class Cupcake {
 protected:
  Shape* theShape;       // Pointer to store shape of cupcake
  Decorations* theDeco;  // Stores frosting and toppings of cupcake
  double cost;

 public:
  Cupcake(char cup);  // Constructor
  Cupcake();          // Default constructor

  double getArea();        // Calculates area of cupcake and updates cost
  double getCost();        // Returns cost
  Decorations* getDeco();  // Returns theDeco pointer
  void addDecorations();   // Adds frosting and toppings
  ~Cupcake();              // Destructor
};
#endif