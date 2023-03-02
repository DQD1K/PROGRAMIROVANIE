#include "circle.h"
#include <iostream>
using namespace std;

void circle::set_circle(float rad, int x_c, int y_c) {
	radius = rad;
	x_coord = x_c;
	y_coord = y_c;
	return ;
}

float circle::square() {
	cout << "Ploshad: " << 2 * 3.14 * radius * radius << endl;
	return 0;
}

bool circle::trin_around(float a, float b, float c) {
	float p = (a + b + c)/2;
	float plosh = sqrt(p * (p - a) * (p - b) * (p - c));
	if (radius == plosh / p) {
		cout << "Treugolnik opisan" << endl;
	}
	else {
		cout << "Treugolnik ne opisan" << endl;
	}
	return 0;
}

bool circle::trin_in(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float plosh = sqrt(p * (p - a) * (p - b) * (p - c));
	if (radius == (a * b * c) / 4 * plosh) {
		cout << "Treugolnik vpisan" << endl;
	}
	else {
		cout << "Treugolnik ne vpisan" << endl;
	}
	return 0;
}


bool circle::check_circle(float r, int x, int y) {
	//Найдем расстояние между центрами
	float rast = sqrt(abs((x_coord - x) * (x_coord - x) + (y_coord - y) * (y_coord - y)));
	//Проверим, сумма радиусов > расстояние между центрами
	if (radius + r >= rast) {
		cout << "Peresekautsya" << endl;
	}
	else {
		cout << "Ne peresekautsya" << endl;
	}
	return 0;
}