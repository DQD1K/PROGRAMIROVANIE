#include "eq2.h"
#include <iostream>
using namespace std;


void eq2::set(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
}

double eq2::find_x() {
	if (D < 0) { cout << "Net korney" << endl; }
	else (cout << "Korni: " << ((-1 * b + sqrt(D)) / (2 * a)) << " " << ((-1 * b - sqrt(D)) / (2 * a)) << endl);
	return 0;
}


double eq2::find_y(double x1) {
	cout << "Y: ";
	return (a * x1 * x1 + b * x1 + c);
}


double eq2::get_a() { return a; }
double eq2::get_b() { return b; }
double eq2::get_c() { return c; }



eq2 eq2::operator+(eq2& x) {
	return eq2(a + x.get_a(), b + x.get_b(), c + x.get_c());
}


void eq2::show() {
	cout << a << " " << b << " " << c << endl;
}