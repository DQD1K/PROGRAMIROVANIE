#include "type7.h"
#include<iostream>
using namespace std;


type7::type7(double b1) {
	B = b1;
}

void type7::Get_answer() {
	cout << "Koren x = 0" << endl;
}

void type7::Show() {
	cout << "Yravnenie: " << B << "*x = 0" << endl;
}

type8::type8(double a1, double b1) {
	A = a1; B = b1;
}

void type8::Get_answer() {
	double x = ((-1) * B) / A;
	cout << "Корни уравнения: " << endl;
	cout << "X1 = 0" << endl << "X2 = " << x << endl;
}

void type8::Show() {
	cout << "Yravnenie: " << A << "*x^2 + " << B << "*x" << endl;
}
