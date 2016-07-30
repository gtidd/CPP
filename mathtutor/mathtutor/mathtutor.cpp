/*
Gregory Tidd
1/25/16
PRG/410
Instructor GHOLAM ALI SHAYKHIAN
*/


#include <iostream>
using namespace std;

int main()
{
	//assign variables global scope, Char and double use for letter input and decimal point input
	int userInput;
	char anyKey;
	
	double numInput1, numInput2;
	double total;

	// Intro to program 
	cout << "Math Helper" << endl;

	 //Asks user for input in relation to math problem
	cout << "What would you like help with today? (Please type 1. for sum, 2. for difference, 3. for product, or 4. for quotient)" << endl;
	
	// Accepts input and saves it to a variable
	cin >> userInput;
	
	//Assigns a user input value to the first part of the math problem
	cout << "Please enter first number of the problem: ";
	cin >> numInput1;
	
	//Assigns a user input value to the second part of the math problem
	cout << "Please enter second number of the problem: ";
	cin >> numInput2;
	
	if (userInput == 1)
	{
		cout << " " << numInput1 << endl;//Addition
		cout << "+" << numInput2 << endl;
		cout << "--------" << endl;
		total = numInput1 + numInput2;
		cout << "Press any key to check your answer" << endl;//delays the answer until the user is ready
		cin >> anyKey;
		cout << " " << numInput1 << endl;
		cout << "+" << numInput2 << endl;
		cout << "--------" << endl;
		cout << " " << total << endl;

	}
	else if (userInput == 2)
	{
		cout << " " << numInput1 << endl;//Subtraction
		cout << "-" << numInput2 << endl;
		cout << "--------" << endl;
		total = numInput1 - numInput2;
		cout << "Press any key to check your answer" << endl;
		cin >> anyKey;
		cout << " " << numInput1 << endl;
		cout << "-" << numInput2 << endl;
		cout << "--------" << endl;
		cout << " " << total << endl;

	}
	else if (userInput == 3)
	{
		cout << " " << numInput1 << endl;//Multiplication
		cout << "*" << numInput2 << endl;
		cout << "--------" << endl;
		total = numInput1 * numInput2;
		cout << "Press any key to check your answer" << endl;
		cin >> anyKey;
		cout << " " << numInput1 << endl;
		cout << "*" << numInput2 << endl;
		cout << "--------" << endl;
		cout << " " << total << endl;

	}
	else if (userInput == 4)
	{
		cout << " " << numInput1 << endl;//Division
		cout << "/" << numInput2 << endl;
		cout << "--------" << endl;
		total = numInput1 / numInput2;
		cout << "Press any key to check your answer" << endl;
		cin >> anyKey;
		cout << " " << numInput1 << endl;
		cout << "/" << numInput2 << endl;
		cout << "--------" << endl;
		cout << " " << total << endl;
		
	}
	else
	{
		cout << "That was invalid please try again.";
	}

	return 0;
}