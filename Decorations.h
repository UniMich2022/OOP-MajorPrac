#ifndef DECO_H
#define DECO_H

#include <string>

class Decorations {
 private:
  int Num_Toppings;  // No. of toppings for cupcake
  int MAX_TOPPINGS;  // Max toppings a cupcake can have

  std::string chosenToppings[4];  // Toppings chosen
  std::string chosenFrosting;     // Frosting chosen

 public:
  Decorations();
  std::string toppings[4] = {{"Choco Balls"},
                             {"Rainbow Sprinkles"},
                             {"Fruits"},
                             {"Candles"}};  // Toppings menu
  std::string frosting[4] = {{"Simple Swirl"},
                             {"Plain Round"},
                             {"French Twist"},
                             {"Open Star"}};  // Frosting menu
  void printList(std::string toppings[], char type);
  // to display toppings or frosting list selection

  void AddFrosting();          // changes chosenFrosting
  void AddToppings();          // adds to chosenToppings
  std::string getFrosting();   // returns chosenFrosting
  std::string* getToppings();  // returns chosenToppings
};
#endif