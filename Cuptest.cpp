#include <iostream>

#include "Cupcake.h"
using namespace std;
int main() {
  Cupcake a;
  Cupcake b('t');
  Cupcake c('c');

  cout << a.getArea() << endl;
  cout << a.getCost() << endl;

  cout << b.getArea() << endl;
  cout << b.getCost() << endl;

  cout << c.getArea() << endl;
  cout << c.getCost() << endl;

  return 0;
}