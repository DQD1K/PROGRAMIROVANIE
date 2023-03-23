#include "truncated_cone.h"
#include <iostream>
using namespace std;

truncated_cone::truncated_cone(double rad, double heigh, double rad_2) {
	radius = rad;
	trun_height = heigh;
	radius_2 = rad_2;
	l = sqrt((radius - radius_2) * (radius - radius_2) + trun_height*trun_height);
}

truncated_cone::truncated_cone() {
	radius = radius_2 = trun_height = 0;
}


void truncated_cone::set_rad(double rad) {
	radius = rad;
}

void truncated_cone::set_height(double heigh) {
	trun_height = heigh;
}

void truncated_cone::set_radius_2(double rad_2) {
	radius_2 = rad_2;
}



double truncated_cone::area() {
	return 3.14 * (radius + radius_2) * l;
}

double truncated_cone::volume() {
	return 3.14 * trun_height * (radius * radius + radius_2 * radius_2 + radius * radius_2) / 3;
}

ostream& operator<< (ostream& out, const truncated_cone& trun_cone) {
	out << "|1_Radius: " << trun_cone.radius << " |2_Radius: " << trun_cone.radius_2 << " |Visota: " << trun_cone.trun_height << endl;
	return out;
}

istream& operator>> (std::istream& in, truncated_cone& trun_cone) {
	in >> trun_cone.radius;
	in >> trun_cone.radius_2;
	in >> trun_cone.trun_height;

	return in;
}


bool truncated_cone::operator> (truncated_cone& x) {
	if (area() > x.area()) { return true; }
	else { return false; }
}