#include <iostream>
#include <string>
#include <math.h>
#include "Triangles.h"
using namespace std;

double pythagoreanA(double b, double c) {
	double a = pow(pow(c, 2) - pow(b, 2), 0.5);
	return a;
}

double pythagoreanC(double a, double b) {
	double c = pow(pow(a, 2) + pow(b, 2), 0.5);
	return c;
}

double perimeterCalc(double a, double b, double c) {
	double perimeter = a + b + c;
	return perimeter;
}

