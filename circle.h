#pragma once
#include <iostream>
using namespace std;


class circle
{
private:
	float Radius, x_centre, y_centre;

public:
	circle(float r, float x, float y) {
		Radius = r;
		x_centre = x;
		y_centre = y;
	}

	float square();
	bool trin_around(float a, float b, float c);
	bool trin_in(float a, float b, float c);
	bool check_circle(float r, float x_centr, float y_centre);
};

