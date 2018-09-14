#include <iostream>
#include <string>
#include "Triangles.h"
using namespace std;

void isocelesTriangle() {
	double a;
	double b;

	cout << endl;
	cout << "Please input your A value (Base): ";
	cin >> a;
	cout << "Please input your B/C value (Side): ";
	cin >> b;
	cout << "Your perimeter is " << perimeterCalc(a, b, b) << "." << endl;
	cout << "Your area is " << areaIsoEqui(a, b) << "." << endl;
	cout << endl;
}