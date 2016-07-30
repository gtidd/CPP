/*
Learning team C 
Greg Tidd, Adam Claycomb, Clinton Ewertz, Kenneth Bearden
2/22/16
Gohlam Ali Shaykhian
Theater app final
*/

#include <iostream>      //imports needed files
#include <iomanip>
#include "teamCtheaterapp.h" // makes program OOP by creating my own object through a header that contains the prototyped function from other files

void Show_Chart(); // would not work in the header file had to prototype normally
using namespace std;

const char FULL = '*';			//Seat taken
const char EMPTY = '#';	//Seat open
const int rows = 10;			   //Number of rows
const int columns = 10;		   //Number of seats per row
char map[rows][columns];		 //Array to hold seating chart
double price;
int total = 0;
int seat = 90;
int seat2 = 0;
int Quit = 1;
const int Num_Rows = 10;




int main()
{
	int price[Num_Rows];		//sets price array
	int row2, column2, cost;    // establishes local variable
	int answer;
	//Main Screen													 
	cout << "\t    Theater Seating Application" << endl;
	;
	cout << endl << endl;
	//Sets the row prices.
	for (int count = 0; count < rows; count++)
	{
		cout << "Please enter the price for row " << (count + 1) << ": ";
		cin >> price[count];
		

	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 1; j < columns; j++)
			map[i][j] = EMPTY;
	}
	int MenuChoice; // sets up the return value for the Show_Menu() function
	cin >> MenuChoice;
	int Choice;
	do
	{
		
		Choice = Show_Menu(MenuChoice);   // Shows the main menu function.
		switch (Choice)
		{
		case 1:
			cout << "View Seat Prices\n\n";

			for (int count = 0; count < rows; count++)
			{
				cout << "The price for row " << (count + 1) << ": ";
				cout << price[count] << endl;
			}
			break;
		case 2:
			cout << "Purchase a Ticket\n\n";
			do
			{
				cout << "Please select the row you would like to sit in: ";
				cin >> row2;
				cout << "Please select the seat you would like to sit in: ";
				cin >> column2;
				if (map[row2][column2] == '*')
				{
					cout << "Sorry that seat is sold-out, Please select a new seat.";
					cout << endl;
				}
				else
				{
					cost = price[row2] + 0;
					total = total + cost;
					cout << "That ticket costs: " << cost << endl;
					cout << "Confirm Purchase? Enter (1 = YES / 2 = NO)";
					cin >> answer;
					seat = seat - answer;
					seat2 += answer;

					if (answer == 1)
					{
						cout << "Your ticket purchase has been confirmed." << endl;
						map[row2][column2] = FULL;
					}
					else if (answer == 2)
					{
						cout << "Would you like to look at another seat? (1 = YES / 2 = NO)";
						cout << endl;
						cin >> Quit;
					}

					cout << "Would you like to look at another seat?(1 = YES / 2 = NO)";
					cin >> Quit;
				}
			} while (Quit == 1);

			break;
		case 3:
			cout << "View Available Seats\n\n";
			Show_Chart();
			break;
		case 4:
			cout << "View Seat Sales\n\n";
			Show_Chart();
			break;
		case 5:
			cout << "quit\n";
			break;
		default: cout << "Error Try Again\n";
		}
	} while (Choice != 5); // KEEPS IN  LOOP UNTIL USER QUITS
	return 0;
}
// *******************FUNCTION AREA **********************
void Show_Chart()
{
	//Array to hold seating chart
	cout << "\t\t\tSeats" << endl;
	cout << " \t1  2  3  4  5  6  7  8  9  10\n";
	for (int count = 0; count < 10; count++)
	{
		cout << endl << "Row " << (count + 1);
		for (int count2 = 0; count2 < 10; count2++)
		{
			cout << "  " << map[count][count2];
		}
	}
	cout << endl;
}
