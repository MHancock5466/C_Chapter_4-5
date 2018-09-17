//Door Prize
//Author: Mason Hancock
//Date: 09/11/2018
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "Testing.h"
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
	
	cout << "******************************************" << endl;
	cout << "** Welcome to the 'Random Number' game! **" << endl;
	cout << "******************************************" << endl;

	do {
		srand(time(NULL));
		secretNum = rand() % 10 + 1;

		cout << "Pick a number between 1 and 10. You will win if you can match the randomly selected number.\nYour Choice: ";
		cin >> numChoice;
		cout << "The randomly generated number was " << secretNum << "." << endl;

		if (numChoice == secretNum) {
			cout << "Well done. You have won." << endl;
		}
		else {
			cout << "Nice try. You lost." << endl;
		}
	} while (numChoice != secretNum);
	return 0;
}

int randomGame2() {
	int numChoice = 0;
	int secretNum = 0;

	cout << "******************************************" << endl;
	cout << "** Welcome to the 'Random Number' game! **" << endl;
	cout << "******************************************" << endl;

	do {
		srand(time(NULL));
		secretNum = rand() % 100 + 1;

		cout << "Pick a number between 1 and 10. You will win if you can match the randomly selected number.\nYour Choice: ";
		cin >> numChoice;
		cout << "The randomly generated number was " << secretNum << "." << endl;

		if (numChoice == secretNum) {
			cout << "Well done. You have won." << endl;
		}
		else {
			cout << "Nice try. You lost." << endl;
		}
	} while (numChoice != secretNum);
	return 0;
}

int main() {
	int gameChoice = 0;

	do {
		cout << "Would you like to play the door prize game, or one of the two random games?\nRandom 1 = 1, Random 2 = 2, Door = 3, To Quit Playing = 3\nYour Choice: ";
		cin >> gameChoice;
	
		if (gameChoice == 1) {
			randomGame();
		}
		else if (gameChoice == 2) {
			randomGame2();
		}
		else if (gameChoice == 3) {
			doorGame();
		}
		else if (gameChoice == 4) {
			cout << "Ciao." << endl;
		}
		else {
			cout << "That was not an option. Good day." << endl;
			gameChoice = 3;
		} 
	} while (gameChoice != 4);

	system("pause");
	return 0;
}