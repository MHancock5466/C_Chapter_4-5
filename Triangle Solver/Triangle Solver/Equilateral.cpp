#include <iostream>
#include <string>
#include <iomanip>
#include "Triangles.h"
using namespace std;

void equilateralTriangle() {
	double a;

	cout << endl;
	cout << "Please input a side value: ";
	cin >> a;
	cout << fixed << setprecision(2) << "Your perimeter is: " << perimeterCalc(a, a, a) << "." << endl;
	cout << fixed << setprecision(2) << "Your area is: " << areaIsoEqui(a, a) << "." << endl;
	cout << endl;
}