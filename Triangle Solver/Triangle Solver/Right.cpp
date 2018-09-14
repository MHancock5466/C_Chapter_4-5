#include <iostream>
#include <string>
#include "Triangles.h"
using namespace std;

void rightTriangle() {
	int sideChoice;
	double a;
	double b;
	double c;
	double missingSide = 0;

	cout << endl;
	cout << "Which side are you solving for? 1 - A, 2 - B, 3 - C? ";
	cin >> sideChoice;

	if (sideChoice == 1) {
		cout << "Please input your B value (A=Base, B=Side, C=Hypotenuse): ";
		cin >> b;
		cout << "Please input your C value (A=Base, B=Side, C=Hypotenuse): ";
		cin >> c;
		missingSide = pythagoreanAB(b, c);
		a = missingSide;
	}
	else if (sideChoice == 2) {
		cout << "Please input your A value (A=Base, B=Side, C=Hypotenuse): ";
		cin >> a;
		cout << "Please input your C value (A=Base, B=Side, C=Hypotenuse): ";
		cin >> c;
		missingSide = pythagoreanAB(a, c);
		b = missingSide;
	}
	else if (sideChoice == 3) {
		cout << "Please input your A value (A=Base, B=Side, C=Hypotenuse): ";
		cin >> a;
		cout << "Please input your B value (A=Base, B=Side, C=Hypotenuse): ";
		cin >> b;
		missingSide = pythagoreanC(a, b);
		c = missingSide;
	}
	else {
		cout << "Could not read user input.";
	}

	cout << "Your missing side is: " << missingSide << "." << endl;
	cout << "Your perimeter is: " << perimeterCalc(a, b, c) << "." << endl;
	cout << "Your area is : " << areaRight(a, b) << "." << endl;
	cout << endl;
}