/*
Gregory Tidd
2/8/16
PRG/410
Instructor: Gholam Ali Shaykhian
Random number generator 3.0
*/

#include <iostream>
#include <cstdlib> // for srand() and rand() functions
#include <ctime>  // used to make number truly random

using namespace std;



int playerAnswer(int, int); //prototypes function

int main()
{
	int userInput = 0, randomNumber, playAgain; //establish variables
	

	do //allows replayability
	{
		srand(time(NULL)); // seeds random number to actual time so it is truly random
		randomNumber = rand() % 10 + 1; //generates random number between 1-10 
		const int MAXCHOICE = 15; //build array with max attempts of 15
		int choice[MAXCHOICE];
		int attempts = 0;
		int attemptsMax = 15;


		while ((userInput != randomNumber) && (attempts <= 15))
		{
			cout << "Random Number Guessing Game" << endl;
			cout << "Guess a number betweeen 1-10 try to find the random number you have " << attemptsMax << " left: " << endl;
			cout << "Please enter your guess : ";

			attemptsMax--;
			
			cin >> userInput;  // User to enter a guess between 1 and 10
			choice[attempts] = userInput;
			attempts++;


			for (int i = 0; i < attempts; i++)
			{
				cout << "Attempt: " << choice[i] << endl;

			}

			int returnValue; // assigns returnValue to switch case statments otherwise it would not work with userInput
			playerAnswer; //calls function

			returnValue = playerAnswer(randomNumber, userInput); // assigns return value to returnValue for switch case

			switch (returnValue)
			{
			case 0:
				cout << " Congratulations, you are CORRECT with your guess of " << userInput << " !" << endl << endl;
				break;
			case 1:
				cout << "Your guess of " << userInput << " is too high.  Please guess a LOWER number." << endl << endl;
				break;
			case -1:
				cout << "Your guess of " << userInput << " is too low.  Please guess a HIGHER number." << endl << endl;
				break;
			case -2:
				cout << "ERROR!! Please enter a NUMBER between 1 and 10." << endl << endl;
				break;
			default:
				cout << "Your guess is not within the guidelines of this game.  Please enter a NUMBER between 1 and 10." << endl << endl;
			}
		}
	if ((attempts = 15) && (userInput != randomNumber))
		{
			cout << "Game over please try again" << endl << endl;
		}
				
			cout << "Do you want to try again? Any key for yes. 2 to quit" << endl;
		cin >> playAgain;
	} while (playAgain != 2);
    return 0;
}


int playerAnswer(int randomNumber, int userInput)
{
	if (cin.fail()) 
	{
		cin.clear();
		cin.ignore(100, '\n'); // eliminate infinite loop created should user enter Char.
		return -2;
	}
	else if (randomNumber == userInput) // establishes number to guess comparables
	{
		return 0;
	}
	else if (randomNumber < userInput)
	{
		return 1;
	}
	else if (randomNumber > userInput)
	{
		return -1;
	}
	else if (userInput < 1 || userInput > 10)
	{
		return -2;
	}
	else
	{
		return -2;
	}

}
