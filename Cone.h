#pragma once
#include <iostream>

using namespace std;
class Cone
{
private:
	double x_coord, y_coord, z_coord, radius, height;

public:
	Cone();
	Cone(double r, double h);
	Cone(double x, double y, double z, double r, double h);

	void set_coord(double x, double y, double z);
	void set_rad(double r);
	void set_height(double h);
	double get_rad();
	double get_height();


	double area();
	double volume();

	void show();
};

