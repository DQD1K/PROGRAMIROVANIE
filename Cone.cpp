#include "Cone.h"
#include <iostream>

using namespace std;

Cone::Cone() {
	x_coord = y_coord = z_coord = radius = height = 0;
}

Cone::Cone(double r, double h) {
	x_coord = y_coord = z_coord = 0;
	radius = r;
	height = h;
}

Cone::Cone(double x, double y, double z, double r, double h) {
	x_coord = x;
	y_coord = y;
	z_coord = z;
	radius = r;
	height = h;
}


void Cone::set_coord(double x, double y, double z) {
	x_coord = x;
	y_coord = y;
	z_coord = z;
}

void Cone::set_rad(double r) {
	radius = r;
}

void Cone::set_height(double h) {
	height = h;
}

double Cone::get_rad() {
	return radius;
}

double Cone::get_height() {
	return height;
}

double Cone::area() {
	double l = sqrt(radius * radius + height * height);
	return 3.14 * radius * (radius + l);
}

double Cone::volume() {
	return 3.14 * radius * radius * height / 3;
}

void Cone::show() {
	cout << "Coords: " << x_coord << " " << y_coord << " " << z_coord << endl;
	cout << "Radius: " << radius << endl;
	cout << "Height: " << height << endl;
	cout << "----------------------" << endl;
}