#include <iostream>
#include <string>
#include <iomanip>
#include "Triangles.h"
using namespace std;

void rightTriangle() {
	string sideChoice;
	double a;
	double b;
	double c;
	double missingSide;

	do {
		cout << endl;
		cout << "Which side are you solving for?\nA\nB\nC\nYour Choice: ";
		cin >> sideChoice;

		if (sideChoice == "A" || sideChoice == "a") {
			cout << "Please input your B value (A=Base, B=Side, C=Hypotenuse): ";
			cin >> b;
			cout << "Please input your C value (A=Base, B=Side, C=Hypotenuse): ";
			cin >> c;
			missingSide = pythagoreanAB(b, c);
			a = missingSide;
		}
		else if (sideChoice == "B" || sideChoice == "b") {
			cout << "Please input your A value (A=Base, B=Side, C=Hypotenuse): ";
			cin >> a;
			cout << "Please input your C value (A=Base, B=Side, C=Hypotenuse): ";
			cin >> c;
			missingSide = pythagoreanAB(a, c);
			b = missingSide;
		}
		else if (sideChoice == "C" || sideChoice == "c") {
			cout << "Please input your A value (A=Base, B=Side, C=Hypotenuse): ";
			cin >> a;
			cout << "Please input your B value (A=Base, B=Side, C=Hypotenuse): ";
			cin >> b;
			missingSide = pythagoreanC(a, b);
			c = missingSide;
		}
		else {
			cout << "Could not read user input.";
			cout << endl;
		}
	} while (sideChoice != "A" && sideChoice != "a" && sideChoice != "B" && sideChoice != "b" && sideChoice != "C" && sideChoice != "c");

	cout << fixed << setprecision(2) << "Your missing side is: " << missingSide << endl;
	cout << fixed << setprecision(2) << "Your perimeter is: " << perimeterCalc(a, b, c) << endl;
	cout << fixed << setprecision(2) << "Your area is : " << areaRight(a, b) << endl;
	cout << endl;
}