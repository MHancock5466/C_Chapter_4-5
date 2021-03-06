//Solving for Triangles
//Author: Mason Hancock
//Date: 09/13/2018
#include <iostream>
#include <string>
#include "Triangles.h"
using namespace std;

int main() {
	double triangleChoice;

	cout << "Welcome to the triangle calculator." << endl;
	
	do {
		cout << "What type of triangle are you solving for?\n1 - Right\n2 - Isoceles\n3 - Equilateral\n4 - Exit\nYour Choice: ";
		cin >> triangleChoice;

		if (triangleChoice == 1)
			rightTriangle();
		else if (triangleChoice == 2)
			isocelesTriangle();
		else if (triangleChoice == 3)
			equilateralTriangle();
		else if (triangleChoice == 4)
			cout << "Goodbye user." << endl;
		else {
			cout << "User did not input a valid number" << endl;
			cout << endl;
		}
	} while (triangleChoice != 4);

	system("pause");
	return 0;
}