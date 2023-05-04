#include "type5.h"
#include <iostream>
using namespace std;

type5::type5(double b1, double c1) {
	B = b1; C = c1;
}

void type5::Get_answer() {
	cout << "Koren: " << (-1) * (C / B) << endl;
}

void type5::Show() {
	cout << "Yravnenie " << B << "*x + " << C << "=0" << endl;
}

type6::type6(double a1, double b1, double c1) {
	A = a1; B = b1; C = c1;
}

void type6::Get_answer() {
	double D = B * B - 4 * A * C;
	if (D < 0) {
		cout << "Net korney" << endl;
	}
	else {
		if (D == 0) {
			double x = ((-1) * B - sqrt(D)) / (2 * A);
			cout << "Koren: " << x << endl;
		}
		else {
			double x1 = ((-1) * B - sqrt(D)) / (2 * A);
			double x2 = ((-1) * B + sqrt(D)) / (2 * A);
			cout << "Korni uravneniya: " << endl;
			cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
		}
	}
}

void type6::Show() {
	cout << "Yravnenie " << A << "*x^2 + " << B << "*x + " << C << endl;
}