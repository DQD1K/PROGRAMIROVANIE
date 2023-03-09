#include "rational.h"
#include <iostream>
using namespace std;


rational::rational() {
	a = 0; b = 0;
}

rational::rational(int a1, int b1){
	if (b1 == 0) { T = false; }
	if (a1 > b1) { a1 = a1 % b1; }
	for (int i = 1; i < 100; i++) {
		if ((a1 % i == 0) && (b1 % i == 0)) {
			a1 = a1 / i; b1 = b1 / i;
		}
	}
	if (T) { a = a1; b = b1; }
	else { a = 0; b = 0; }
}

void rational::set(int a1, int b1) {
	if (b1 == 0) { T = false; }
	if (a1 > b1) { a1 = a1 % b1; }
	for (int i = 1; i < 100; i++) {
		if ((a1 % i == 0) && (b1 % i == 0)) {
			a1 = a1 / i; b1 = b1 / i;
		}
	}
	if (T) { a = a1; b = b1; }
	else { a = 0; b = 0; }
}
void rational::show() {
	cout << a << "/" << b << endl;
}

int rational::get_a() {
	return a;
}

int rational::get_b() {
	return b;
}

rational rational::operator+(rational& x) {
	return rational(a * x.b + x.a * b, b * x.b);
}


rational operator-(rational& x, rational& y) {
	return rational(x.a * y.b - y.a * x.b, x.b * y.b);
}

bool rational::operator== (rational & x) {
	if ((a == x.a) && (b == x.b)) { return true; }
	else { return false; }
}

bool rational::operator> (rational& x) {
	if (a * x.b > x.a * b) { return true; }
	else { return false; }
}

rational rational::operator= (rational& x) {
	this->set(x.a, x.b);
	return rational(0, 0);
}

rational rational::operator++ (int) {
	return rational(a + 1, b);
}

rational rational::operator++() {
	return rational(a + 1, b);
}