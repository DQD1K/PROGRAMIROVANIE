#include <iostream>
#include "trin.h"
using namespace std;

//class trin {
//private:
//	double a, b, c;
//
//public:
//	bool exis_tr() {
//		return ((a + b > c) && (a + c > b) && (b + c > a));
//	}
//	void set_tr(double a1, double b1, double c1) {
//		a = a1;
//		b = b1;
//		c = c1;
//	}
//	void show_tr_storoni() {
//		cout << "1 storona " << a << endl;
//		cout << "2 storona " << b << endl;
//		cout << "3 storona " << c << endl;
//	}
//	void perimetr_tr() {
//		cout << "perimetr tr " << a + b + c << endl;
//	}
//	void ploshad_tr() {
//		double p = (a + b + c) / 2;
//		double plosh = sqrt(p * (p - a) * (p - b) * (p - c));
//		cout << "plosh tr " << plosh << endl;
//	}
//};


int main() {
	trin m[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		cout << "Vvod storoni" << endl;
		cin >> a >> b >> c;
		m[i].set_tr(a, b, c);
		if ((m[i].exis_tr()) == false) {
			cout << "Neverno" << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		m[i].show_tr_storoni();
		m[i].perimetr_tr();
		m[i].ploshad_tr();
		cout << "------------------" << endl;
	}
}