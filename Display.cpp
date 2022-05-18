#include "Display.h"

#include <unistd.h>  //for sleep function

#include <limits>  // for clearing line in validity checks

#include "CircleCupcake.h"
#include "Cupcake.h"
#include "Customer.h"
#include "Order.h"
#include "Shape.h"
#include "SquareCupcake.h"
#include "TriangleCupcake.h"

void Display::loading() {
  // This is for the Title
  usleep(100);
  cout << "                                                          " << endl;
  cout << "░█████╗░██╗░░░██╗██████╗░░█████╗░░█████╗░██╗░░██╗███████╗ " << endl;
  cout << "██╔══██╗██║░░░██║██╔══██╗██╔══██╗██╔══██╗██║░██╔╝██╔════╝ " << endl;
  cout << "██║░░╚═╝██║░░░██║██████╔╝██║░░╚═╝███████║█████═╝░█████╗░░ " << endl;
  cout << "██║░░██╗██║░░░██║██╔═══╝░██║░░██╗██╔══██║██╔═██╗░██╔══╝░░ " << endl;
  cout << "╚█████╔╝╚██████╔╝██║░░░░░╚█████╔╝██║░░██║██║░╚██╗███████╗ " << endl;
  cout << "░╚════╝░░╚═════╝░╚═╝░░░░░░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚══════╝ " << endl;
  cout << "                                                                    "
          "                             "
       << endl;
  cout << "██████╗░███████╗░██████╗██╗░██████╗░███╗░░██╗███████╗██████╗░ "
          "██╗░░██╗██╗░█████╗░░██████╗██╗░░██╗"
       << endl;
  cout << "██╔══██╗██╔════╝██╔════╝██║██╔════╝░████╗░██║██╔════╝██╔══██╗ "
          "██║░██╔╝██║██╔══██╗██╔════╝██║░██╔╝"
       << endl;
  cout << "██║░░██║█████╗░░╚█████╗░██║██║░░██╗░██╔██╗██║█████╗░░██████╔╝ "
          "█████═╝░██║██║░░██║╚█████╗░█████═╝░"
       << endl;
  cout << "██║░░██║██╔══╝░░░╚═══██╗██║██║░░╚██╗██║╚████║██╔══╝░░██╔══██╗ "
          "██╔═██╗░██║██║░░██║░╚═══██╗██╔═██╗░"
       << endl;
  cout << "██████╔╝███████╗██████╔╝██║╚██████╔╝██║░╚███║███████╗██║░░██║ "
          "██║░╚██╗██║╚█████╔╝██████╔╝██║░╚██╗"
       << endl;
  cout << "╚═════╝░╚══════╝╚═════╝░╚═╝░╚═════╝░╚═╝░░╚══╝╚══════╝╚═╝░░╚═╝ "
          "╚═╝░░╚═╝╚═╝░╚════╝░╚═════╝░╚═╝░░╚═╝"
       << endl;

  // This is for the loading effect
  for (int i = 0; i <= 100; i++) {
    cout << "\t\tLoading...";
    cout << i << "%...\n";
    i += 9;
    usleep(100000);
  }
  sleep(2);  // wait 2 seconds so user can see it
}

void Display::display(void) {
  char choice;         // Determines shape of cupcake
  int orderAgain = 1;  // Controls the order loop
  loading();

  while (orderAgain != 0) {
    A.createOrder(B);
    int type = 1;  // Controls the Cupcake loop

    // WHILE CHOICE IS NOT 0, CONTINUE TO RUN
    while (type != 0) {
      system("clear");  // Clear Screen
      cout << "\t\t\t Choose your cupcake shape! \t";
      cout << "\n\t\t==========================================\n";
      cout << "\t\t [S] Square \t[T] Triangle \t[C] Circle \n\n\t\t\tChoose: ";
      cin >> choice;

      // validity check
      while ((choice != 'S') && (choice != 's') && (choice != 'T') &&
             (choice != 't') && (choice != 'C') && (choice != 'c')) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice: Please enter [S], [T] or [C]" << endl;
        cin >> choice;
      }

      // Based on the choice, run according to case
      switch (choice) {
        case 'S':
        case 's': {
          Cupcake sq('s');
          sq.getArea();  // Ask and calculate are of cupcake
          cout << "\t\tThe cost of your square cupcake is $" << sq.getCost()
               << endl;
          A.getOrder()->addCupcake(sq);  // Add cupcake to order
          break;
        }
        case 'T':
        case 't': {
          Cupcake t('t');
          t.getArea();
          cout << "\t\tThe cost of your triangle cupcake is $" << t.getCost()
               << endl;
          A.getOrder()->addCupcake(t);
          break;
        }
        case 'C':
        case 'c': {
          Cupcake c('c');
          c.getArea();
          cout << "\t\tThe cost of your cirlce cupcake is $" << c.getCost()
               << endl;
          A.getOrder()->addCupcake(c);
          break;
        }
        default:
          break;
      }

      cin.clear();  // Clear user input line, prepare for more user input
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\n\t\tDo you want to add another cupcake?\n\t\tYes [Enter any "
              "input]  No [Enter 0]:";
      cin >> type;  // Any value other than 0 will end loop
    }
    A.getOrder()->payment();  // Proceed to payment or cancel order
    cin.clear();  // Clear user input line, prepare for more user input
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n\t\tDo you want to order again?\n\t\tYes [Enter any input]  No "
            "[Enter 0]:";
    cin >> orderAgain;  // Any value other than 0 will end loop
  }
  cout << "\n\t\tThank you for using the Cupcake Designer Kiosk!\n";
}