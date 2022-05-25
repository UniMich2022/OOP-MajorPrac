#include "Decorations.h"

#include <iostream>
#include <limits>
#include <string>
using namespace std;

Decorations::Decorations() {
  Num_Toppings = 0;
  MAX_TOPPINGS = 4;
}

void Decorations::printList(string toppings[], char type) {
  int b = 0;
  // type determines if the title says toppings or frosting
  string title;
  if (type == 't') {
    title = "Toppings";
  } else {
    title = "Frosting";
  }

  // Print title
  cout << "\n\t\tCupcake" << title << "List:" << endl;
  cout << "\t\t========================" << endl << "\t";

  // For Loop to output the menu in a 3x4 grid
  for (int a = 0; a < 4; a++) {
    cout << a + 1 << ". " << toppings[a] << " ";

    // if for loop equal to any of these numbers, add tab to make grid look
    // nicer.
    if (a == 0 || a == 6 || a == 9 || a == 10) {
      cout << "\t";
    }
    b++;

    // if for loop printed out 3 cakes, add new line with tab to make grid look
    // nicer.
    if (b == 3) {
      cout << "\n\t";
      b = 0;
    }
  }
  cout << endl;
}

void Decorations::AddFrosting() {
  printList(frosting, 'f');  // displays frosting menu
  int choose = 0;
  cout << "\n\n\tWhich frosting would you like? Type the number: ";
  cin >> choose;  // choose which frosting

  // Validation loop
  while (cin.fail() || choose < 1 || choose > 4) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n\t\tInvalid input, please enter a number on the menu: ";
    cin >> choose;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  chosenFrosting = frosting[choose - 1];  // record what is chosen
  cout << "\n\t\tYou have chosen " << chosenFrosting << endl;
}

void Decorations::AddToppings() {
  printList(toppings, 't');  // display toppings menu
  if (Num_Toppings < MAX_TOPPINGS) {
    int choose = 0;
    cout << "\n\n\tWhich topping would you like? Type the number: ";
    cin >> choose;
    // Validation loop
    while (cin.fail() || choose < 1 || choose > 4) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "\n\t\tInvalid input, please enter a number on the menu: ";
      cin >> choose;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Add to record
    chosenToppings[Num_Toppings] = toppings[choose - 1];
    cout << "\n\t\tYou have chosen " << chosenToppings[Num_Toppings] << endl;
    Num_Toppings++;
  } else {
    // If cupcake already has 4 toppings
    cout << "\t\tYou can only have a maximum of 4 toppings!\n";
  }
}

string Decorations::getFrosting() { return chosenFrosting; }

string* Decorations::getToppings() { return chosenToppings; }
