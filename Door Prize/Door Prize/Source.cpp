//Door Prize
//Author: Mason Hancock
//Date: 09/11/2018
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int doorGame() {
	int doorChoice;
	
	cout << "***************************************" << endl;
	cout << "** Welcome to the 'Door Prize' game! **" << endl;
	cout << "***************************************" << endl;

	cout << "Pick between one of the three doors. Each has a unique prize.\nDoor 1	Door 2	Door 3\nYour Choice: ";
	cin >> doorChoice;

	if (doorChoice == 1) {
		cout << "Congratulations on your new toaster. Complete with a single loaf of free bread." << endl;
	}
	else if (doorChoice == 2) {
		cout << "Enjoy your coupon for unlimited breadsticks at Olive Garden!" << endl;
	}
	else if (doorChoice == 3) {
		cout << "Have fun at an all expense paid trip to your local motel 6." << endl;
	}
	else {
		cout << "You're dumb." << endl;
	}
	return 0;
}

int randomGame() {
	int numChoice = 0;
	int secretNum = 0;
	int attempts = 0;
	
	cout << "******************************************" << endl;
	cout << "** Welcome to the 'Random Number' game! **" << endl;
	cout << "******************************************" << endl;

	do {
		srand(time(NULL));
		secretNum = rand() % 10 + 1;

		cout << "Pick a number between 1 and 10. You will win if you can match the randomly selected number.\nYour Choice: ";
		cin >> numChoice;
		cout << "The randomly generated number was " << secretNum << "." << endl;
		attempts++;

		if (numChoice == secretNum) {
			cout << "Well done. You have won in " << attempts << " attempts." << endl;
		}
		else {
			cout << "Nice try. You lost. Your Attempts: " << attempts << endl;
		}
	} while (numChoice != secretNum);
	return 0;
}

int randomGame2() {
	int numChoice = 0;
	int secretNum = 0;
	int attempts = 0;

	cout << "******************************************" << endl;
	cout << "** Welcome to the 'Random Number' game! **" << endl;
	cout << "******************************************" << endl;
	cout << endl;

	do {
		srand(time(NULL));
		secretNum = rand() % 100 + 1;

		cout << "Pick a number between 1 and 100. You will win if you can match the randomly selected number.\nYour Choice: ";
		cin >> numChoice;
		cout << endl;
		cout << "The randomly generated number was " << secretNum << "." << endl;

		if (numChoice == secretNum) {
			cout << "Well done. You have won in " << attempts << " attempts." << endl;
		}
		else {
			cout << "Nice try. You lost. Your attempts: " << attempts << endl;
		}
	} while (numChoice != secretNum);
	return 0;
}

int main() {
	int gameChoice = 0;

	do {
		cout << "Would you like to play the door prize game, or one of the two random games?\n1 - Random 1\n2 - Random 2\n3 - Door\n4 - To Quit\nYour Choice: ";
		cin >> gameChoice;

		switch (gameChoice) {
		case 1:
			randomGame();
			break;
		case 2:
			randomGame2();
			break;
		case 3:
			doorGame();
			break;
		case 4:
			cout << "Ciao." << endl;
			break;
		default:
			cout << "Invalid Response." << endl;
		}
	} while (gameChoice != 4);

	system("pause");
	return 0;
}