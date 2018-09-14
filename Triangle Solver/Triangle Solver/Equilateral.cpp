#include <iostream>
#include <string>
#include "Triangles.h"
using namespace std;

void equilateralTriangle() {
	double a;

	cout << endl;
	cout << "Please input a side value: ";
	cin >> a;
	cout << "Your perimeter is: " << perimeterCalc(a, a, a) << "." << endl;
	cout << "Your area is: " << areaIsoEqui(a, a) << "." << endl;
	cout << endl;
}