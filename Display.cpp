#include "Display.h"

#include <unistd.h>  //for sleep function

#include <iostream>
#include <limits>  // for clearing line in validity checks

#include "CircleCupcake.h"
#include "Cupcake.h"
#include "Customer.h"
#include "Decorations.h"
#include "Order.h"
#include "Shape.h"
#include "SquareCupcake.h"
#include "TriangleCupcake.h"

void Display::loading() {
  // This is for the Title
  system("clear");  // Clear Screen
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
  char choice;          // Determines shape of cupcake
  char orderAgain = 1;  // Controls the order loop
  loading();

  while (orderAgain != '0') {
    A.createOrder(B);
    char type = 1;  // Controls the Cupcake loop

    // WHILE CHOICE IS NOT 0, CONTINUE TO RUN
    while (type != '0') {
      system("clear");  // Clear Screen
      cout << "\t\t "
           << "                   ¶¶¶¶¶¶                  " << endl;
      cout << "\t\t "
           << "                 ¶¶¶¶¶  ¶¶                 " << endl;
      cout << "\t\t "
           << "                ¶¶¶¶¶¶¶   ¶                " << endl;
      cout << "\t\t "
           << "               ¶¶¶¶¶¶¶¶¶¶¶¶¶               " << endl;
      cout << "\t\t "
           << "           ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶           " << endl;
      cout << "\t\t "
           << "        ¶¶¶¶¶   ¶¶¶¶¶¶¶¶¶¶¶    ¶¶¶¶¶       " << endl;
      cout << "\t\t "
           << "     ¶¶¶¶         ¶¶¶¶¶¶¶          ¶¶¶     " << endl;
      cout << "\t\t "
           << "    ¶¶¶      ¶                    ¶  ¶¶¶   " << endl;
      cout << "\t\t "
           << "   ¶¶        ¶¶  ¶¶     ¶¶  ¶¶¶        ¶¶  " << endl;
      cout << "\t\t "
           << "  ¶¶               ¶¶  ¶¶     ¶¶¶       ¶¶ " << endl;
      cout << "\t\t "
           << " ¶¶                                        " << endl;
      cout << "\t\t "
           << "¶¶                                        ¶" << endl;
      cout << "\t\t "
           << "¶¶                                        ¶" << endl;
      cout << "\t\t "
           << " ¶¶¶                                    ¶¶ " << endl;
      cout << "\t\t "
           << "   ¶¶¶¶¶                            ¶¶¶¶¶  " << endl;
      cout << "\t\t "
           << "    ¶¶ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶   " << endl;
      cout << "\t\t "
           << "     ¶____¶_____¶____¶¶____¶_____¶¶___¶¶   " << endl;
      cout << "\t\t "
           << "     ¶____¶¶____¶____¶¶____¶_____¶____¶    " << endl;
      cout << "\t\t "
           << "     ¶¶____¶____¶¶___¶¶___¶¶____¶¶___¶¶    " << endl;
      cout << "\t\t "
           << "      ¶____¶¶___¶¶___¶¶___¶¶____¶____¶     " << endl;
      cout << "\t\t "
           << "      ¶¶____¶___¶¶___¶¶___¶¶___¶¶___¶¶     " << endl;
      cout << "\t\t "
           << "       ¶____¶¶___¶___¶¶___¶____¶¶___¶      " << endl;
      cout << "\t\t "
           << "       ¶¶___¶¶___¶___¶¶___¶____¶___¶¶      " << endl;
      cout << "\t\t "
           << "        ¶____¶¶__¶¶__¶¶__¶¶___¶¶___¶       " << endl;
      cout << "\t\t "
           << "        ¶¶____¶___¶__¶¶__¶___¶¶__¶¶        " << endl;
      cout << "\t\t "
           << "         ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶        " << endl;
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
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          cout << "\n\t\t"
               << "                          ██████                        "
               << endl;
          cout << "\t\t"
               << "                      ▓▓▓▓      ▓▓░░                    "
               << endl;
          cout << "\t\t"
               << "                  ░░░░              ▓▓▓▓                "
               << endl;
          cout << "\t\t"
               << "              ████                      ████            "
               << endl;
          cout << "\t\t"
               << "          ████                              ████        "
               << endl;
          cout << "\t\t"
               << "      ████                                      ████    "
               << endl;
          cout << "\t\t"
               << "  ████                                              ████"
               << endl;
          cout << "\t\t"
               << "  ██  ████                                      ████  ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██      ▓▓▓▓                              ▓▓▓▓      ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██          ▓▓▓▓                      ▓▓▓▓          ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██              ▓▓▒▒              ▓▓▓▓              ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██                  ▓▓▓▓      ▓▓▒▒                  ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██                      ██████                      ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██                        ▓▓                        ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██                        ▓▓                        ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██                        ▓▓                        ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██                        ▓▓                        ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██                        ▓▓                        ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██                      ▓▓▓▓▓▓                      ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██                  ▓▓▓▓  ▓▓  ▓▓▒▒                  ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██              ▓▓▒▒      ▓▓      ▓▓▓▓              ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██          ▓▓▓▓          ▓▓          ▓▓▓▓          ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██      ▒▒▒▒░░░░          ▓▓            ░░▒▒▒▒      ▓▓"
               << endl;
          cout << "\t\t"
               << "  ██  ▒▒▒▒░░░░              ▓▓              ░░░░▒▒▒▒  ▓▓"
               << endl;
          cout << "\t\t"
               << "  ████                      ▓▓                      ██▓▓"
               << endl;
          cout << "\t\t"
               << "      ████                  ▓▓                  ████    "
               << endl;
          cout << "\t\t"
               << "          ▓▓▓▓              ▓▓              ▓▓▓▓        "
               << endl;
          cout << "\t\t"
               << "              ▓▓▓▓          ▓▓          ▓▓▓▓            "
               << endl;
          cout << "\t\t"
               << "                  ▓▓▓▓      ▓▓      ▓▓▓▓                "
               << endl;
          cout << "\t\t"
               << "                      ▓▓▓▓  ▓▓  ▓▓▓▓                    "
               << endl;
          cout << "\t\t"
               << "                          ▓▓▓▓▓▓                        "
               << endl;
          cout << "\t\tThe cost of your square cupcake is $" << sq.getCost()
               << endl;
          sq.addDecorations();  // asks if frosting or toppings are needed
          cout << "\t\tThe cost of your cupcake is $" << sq.getCost() << endl;
          A.getOrder()->addCupcake(sq);  // Add cupcake to order
          break;
        }
        case 'T':
        case 't': {
          Cupcake t('t');
          t.getArea();
          cout << "\n\t\t"
               << "                                                     "
               << endl;
          cout << "\t\t"
               << "                              ▓▓                     "
               << endl;
          cout << "\t\t"
               << "                              ██                     "
               << endl;
          cout << "\t\t"
               << "                            ██████                   "
               << endl;
          cout << "\t\t"
               << "                          ▒▒██████▒▒                 "
               << endl;
          cout << "\t\t"
               << "                          ██████████                 "
               << endl;
          cout << "\t\t"
               << "                        ▓▓██████████▓▓               "
               << endl;
          cout << "\t\t"
               << "                        ██████████████               "
               << endl;
          cout << "\t\t"
               << "                      ██████████████████             "
               << endl;
          cout << "\t\t"
               << "                      ██████████████████             "
               << endl;
          cout << "\t\t"
               << "                    ██████████████████████           "
               << endl;
          cout << "\t\t"
               << "                  ▒▒██████████████████████▒▒         "
               << endl;
          cout << "\t\t"
               << "                  ██████████████████████████         "
               << endl;
          cout << "\t\t"
               << "                ▓▓██████████████████████████▓▓       "
               << endl;
          cout << "\t\t"
               << "                ██████████████████████████████       "
               << endl;
          cout << "\t\t"
               << "              ██████████████████████████████████     "
               << endl;
          cout << "\t\tThe cost of your triangle cupcake is $" << t.getCost()
               << endl;
          t.addDecorations();  // asks if frosting or toppings are needed
          cout << "\t\tThe cost of your cupcake is $" << t.getCost() << endl;
          A.getOrder()->addCupcake(t);
          break;
        }
        case 'C':
        case 'c': {
          Cupcake c('c');
          c.getArea();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          cout
              << "\n\t\t"
              << "                          ████████████                       "
              << endl;
          cout << "\t\t"
               << "                    ██████░░░░░░░░░░░░██████                "
                  "  "
               << endl;
          cout << "\t\t"
               << "                ████░░░░░░░░░░░░░░░░░░░░░░░░████            "
                  "  "
               << endl;
          cout << "\t\t"
               << "            ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██            "
                  "  "
               << endl;
          cout << "\t\t"
               << "          ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██       "
                  "  "
               << endl;
          cout << "\t\t"
               << "        ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░██      "
                  "  "
               << endl;
          cout << "\t\t"
               << "      ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░██    "
                  "  "
               << endl;
          cout << "\t\t"
               << "      ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░██    "
                  "  "
               << endl;
          cout << "\t\t"
               << "    "
                  "██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒░░██  "
               << endl;
          cout << "\t\t"
               << "    "
                  "██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒░░██  "
               << endl;
          cout << "\t\t"
               << "    "
                  "██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒░░██  "
               << endl;
          cout << "\t\t"
               << "  "
                  "██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒░░██"
               << endl;
          cout << "\t\t"
               << "░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒░░"
                  "██"
               << endl;
          cout << "\t\t"
               << "░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒░░"
                  "██"
               << endl;
          cout << "\t\t"
               << "░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒░░"
                  "██"
               << endl;
          cout << "\t\t"
               << "░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒░░"
                  "██"
               << endl;
          cout << "\t\t"
               << "░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒░░"
                  "██"
               << endl;
          cout << "\t\t"
               << "    "
                  "██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒░░██  "
               << endl;
          cout << "\t\t"
               << "    "
                  "██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░██  "
               << endl;
          cout << "\t\t"
               << "    "
                  "██░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░██  "
               << endl;
          cout << "\t\t"
               << "      ██░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░██  "
                  "  "
               << endl;
          cout << "\t\t"
               << "      ██░░▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░██  "
                  "  "
               << endl;
          cout << "\t\t"
               << "        ██░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░██    "
                  "  "
               << endl;
          cout << "\t\t"
               << "          ██░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░██      "
                  "  "
               << endl;
          cout << "\t\t"
               << "            ██░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░██        "
                  "  "
               << endl;
          cout << "\t\t"
               << "              ██░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░██          "
                  "  "
               << endl;
          cout << "\t\t"
               << "                ████░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░████            "
                  "  "
               << endl;
          cout << "\t\t"
               << "                    ██████░░░░░░░░░░░░██████                "
                  "  "
               << endl;
          cout << "\t\t"
               << "                          ████████████                      "
                  "  "
               << endl;
          cout << "\t\tThe cost of your circle cupcake is $" << c.getCost()
               << endl;
          c.addDecorations();  // asks if frosting or toppings are needed
          cout << "\t\tThe cost of your cupcake is $" << c.getCost() << endl;
          A.getOrder()->addCupcake(c);
          break;
        }
        default:
          break;
      }

      // Clear user input line, prepare for more user input
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\n\t\tDo you want to add another cupcake?\n\t\tYes [Enter "
              "any character other than 0]  No [Enter 0]:";
      cin >> type;  // Any value other than 0 will end loop
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    A.getOrder()->payment();  // Proceed to payment or cancel order
    cin.clear();  // Clear user input line, prepare for more user input
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n\t\tDo you want to order again?\n\t\tYes [Enter any character "
            "other than 0]  "
            "No "
            "[Enter 0]:";
    cin >> orderAgain;  // Any value other than 0 will end loop
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  cout << "\n\t\t"
       << ".▀█▀.█▄█.█▀█.█▄.█.█▄▀　█▄█.█▀█.█─█" << endl;
  cout << "\t\t"
       << "─.█.─█▀█.█▀█.█.▀█.█▀▄　─█.─█▄█.█▄█" << endl;
  cout << "\n\t\t"
       << "for using the Cupcake Designer Kiosk!\n";
}