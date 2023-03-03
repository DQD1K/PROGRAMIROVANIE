#include "eq2.h"
#include <iostream>
using namespace std;


void eq2::set(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
}

double eq2::find_x() {
	D = b * b - 4 * a * c;
	if (D < 0) { cout << "Net korney" << endl; }
	else (cout << "Korni: " << ((-1 * b + sqrt(D)) / (2*a)) << " " << ((-1 * b - sqrt(D)) / (2*a)) << endl);
	return 0;
}


double eq2::find_y(double xx1) {
	x1 = xx1;
	cout << "Y: ";
	return (a * x1 * x1 + b * x1 + c);
}
