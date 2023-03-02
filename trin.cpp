#include "trin.h"
#include <iostream>
using namespace std;


	bool trin::exis_tr() {
		return ((a + b > c) && (a + c > b) && (b + c > a));
	}
	void trin::set_tr(double a1, double b1, double c1) {
		a = a1;
		b = b1;
		c = c1;
	}
	void trin::show_tr_storoni() {
		cout << "1 storona " << a << endl;
		cout << "2 storona " << b << endl;
		cout << "3 storona " << c << endl;
	}
	void trin::perimetr_tr() {
		cout << "perimetr tr " << a + b + c << endl;
	}
	void trin::ploshad_tr() {
		double p = (a + b + c) / 2;
		double plosh = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "plosh tr " << plosh << endl;
	}
	