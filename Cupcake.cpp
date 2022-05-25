
#include "Cupcake.h"

#include <limits>

#include "CircleCupcake.h"
#include "Decorations.h"
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
  theDeco = new Decorations[1];
}

Cupcake::Cupcake() : Cupcake('s') {}  // Default is a square cupcake

double Cupcake::getArea() {
  double area = theShape->getArea();  // Finds area of shape
  cost = area / 50 * 3;               // Calculates and updates cost
  return area;
}

double Cupcake::getCost() { return cost; }

Decorations* Cupcake::getDeco() { return theDeco; }

void Cupcake::addDecorations() {
  Decorations Deco;
  char frosting;
  char top;

  cout << "Do you want to add some frosting for $1? [Y] Yes [N] No: ";
  cin >> frosting;

  // Validation loop
  while (cin.fail() || (frosting != 'Y' && frosting != 'y' && frosting != 'N' &&
                        frosting != 'n')) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n\t\tInvalid input, please enter [Y] or [N]: ";
    cin >> frosting;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clears buffer

  switch (frosting) {
    case 'Y':
    case 'y':
      Deco.AddFrosting();  // If yes to frosting, add frosting and increase cost
      cost++;
      break;
    default:
      break;
  }
  cout << "Do you want to add some toppings for $1? [Y] Yes [N] No: ";
  cin >> top;
  if (top == 'n') {
    return;
  }
  // Validation loop
  while (cin.fail() || (top != 'Y' && top != 'y' && top != 'N' && top != 'n')) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n\t\tInvalid input, please enter [Y] or [N]: ";
    cin >> top;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clears buffer

  // WHILE THE ANSWER IS NOT NO, CONTINUE LOOP 4 TIMES
  int loop = 0;  // Counts how many loops
  while (top != 'N' && top != 'n' && loop < 4) {
    switch (top) {
      case 'Y':
      case 'y':
        Deco.AddToppings();  // If yes to toppings, add toppings and increase
                             // cost
        cost++;
        cout << "Do you want to add more toppings for $1? [Y] Yes [N] No: ";
        cin >> top;

        // Validation loop
        while (cin.fail() ||
               (top != 'Y' && top != 'y' && top != 'N' && top != 'n')) {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          cout << "\n\t\tInvalid input, please enter [Y] or [N]: ";
          cin >> top;
        }
        break;
      default:
        top = 'N';
        break;
    }
    loop++;
  }
  if (loop == 4) {
    cout << "\nSorry you can only add a maximum of 4 serves of toppings."
         << endl;
  }
  *theDeco = Deco;  // Store in the pointer so it is not lost
}
Cupcake::~Cupcake() {}