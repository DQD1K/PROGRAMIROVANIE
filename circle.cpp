#include "circle.h"
#include <iostream>
using namespace std;

float circle::square() {
	return (2 * 3.14 * Radius * Radius);
}

bool circle::trin_around(float a, float b, float c) {
	if (Radius == sqrt(((a + b + c) / 2) * ((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c)) / ((a + b + c) / 2)) { cout << "Окружность можно вписать в треугольник: True" << endl; }
	else { cout << "Окружность можно вписать в треугольник: False" << endl; }
	return true;
}

bool circle::trin_in(float a, float b, float c) {
	if (Radius == (a * b * c) / 4 * (sqrt(((a + b + c) / 2) * ((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c)))) { cout << "Окружность можно описать вокруг треугольника: True" << endl; }
	else { cout << "Окружность можно описать вокруг треугольника: False" << endl; }
	return true;
}

bool circle::check_circle(float r, float x, float y) {
	if (Radius + r >= sqrt((x_centre-x)*(x_centre - x) + (y_centre - y)*(y_centre - y))) { cout << "Соприкасаются: True" << endl; }
	else { cout << "Соприкасаются: False" << endl; }
	return true;
}