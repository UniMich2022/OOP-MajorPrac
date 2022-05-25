#include <iostream>
#include <string>

#include "Decorations.h"
int main(void) {
  Decorations top;
  top.AddFrosting();
  top.AddToppings();
  top.AddToppings();
  top.AddToppings();
  top.AddToppings();
  top.AddToppings();
  std::cout << top.getFrosting() << std::endl;
  std::cout << top.getToppings()[0] << std::endl;
  std::cout << top.getToppings()[1] << std::endl;
  std::cout << top.getToppings()[2] << std::endl;
  std::cout << top.getToppings()[3] << std::endl;

  return 0;
}