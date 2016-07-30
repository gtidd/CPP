/*
Learning team C
Greg Tidd, Adam Claycomb, Clinton Ewertz, Kenneth Bearden
2/22/16
Gohlam Ali Shaykhian
Theater app final
*/

// Show Menu Function
#include <iostream>
#include "teamCtheaterapp.h"

using namespace std;
// CREATES THE MENU LIKE AN OBJECT
int Show_Menu(int Choice)
{

cout << endl << endl;
cout << " \tMAIN MENU\n";
cout << " 1. View Seat Prices.\n";
cout << " 2. Purchase a Ticket.\n";
cout << " 3. View Available Seats.\n";
cout << " 4. View Ticket Sales.\n";
cout << " 5. Quit the program.\n";
cout << "_____________________\n\n";
cout << "Please enter your choice: ";
cin >> Choice;
cout << endl << endl;
return Choice;
}