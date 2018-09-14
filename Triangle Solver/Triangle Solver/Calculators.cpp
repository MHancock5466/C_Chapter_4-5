#include <iostream>
#include <string>
#include <math.h>
#include "Triangles.h"
using namespace std;

double pythagoreanAB(double b, double c) {
	double aCalc = pow(pow(c, 2) - pow(b, 2), 0.5);
	return aCalc;
}

double pythagoreanC(double a, double b) {
	double cCalc = pow(pow(a, 2) + pow(b, 2), 0.5);
	return cCalc;
}

double perimeterCalc(double a, double b, double c) {
	double perimeter = a + b + c;
	return perimeter;
}

double areaRight(double a, double b) {
	double areaRight = a * b * 0.5;
	return areaRight;
}

double areaIsoEqui(double a, double c) {
	double height = pythagoreanAB(0.5 * a, c);
	double areaIsoEqui = areaRight(height, a);
	return areaIsoEqui;
}