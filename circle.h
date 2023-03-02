#pragma once
#include <iostream>
using namespace std;


class circle
{
private:
	float radius;
	int x_coord, y_coord;
public:
	void set_circle(float rad, int x_c, int y_c);
	float square();
	bool trin_around(float a, float b, float c);
	bool trin_in(float a, float b, float c);
	bool check_circle(float r, int x1, int y1);
};

