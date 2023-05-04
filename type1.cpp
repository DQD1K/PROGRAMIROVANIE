#include "type1.h"
#include <iostream>
using namespace std;

void type1::Get_answer() {
	cout << "X-luboe" << endl;
}

void type1::show() {
	cout << "Yravnenie 0 = 0" << endl;
}

type2::type2(double a1) {
	A = a1;
}

void type2::Get_answer() {
	cout << "Otvet: 0" << endl;
}

void type2::show() {
	cout << "Yravnenie " << A << "*x^2 = 0" << endl;
}
