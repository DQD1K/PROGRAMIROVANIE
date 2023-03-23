#pragma once
#include "Cone.h"
class truncated_cone : Cone
{
private:
	double trun_height; double radius; double radius_2;
	double l;

public:
	truncated_cone();
	truncated_cone(double rad, double high, double rad_2);


	void set_rad(double rad);
	void set_height(double heigh);
	void set_radius_2(double rad_2);

	double area();
	double volume();

	friend ostream& operator<< (ostream& out, const truncated_cone &trun_cone);
	friend istream& operator>> (std::istream& in, truncated_cone &trun_cone);

	bool operator> (truncated_cone&);
};


