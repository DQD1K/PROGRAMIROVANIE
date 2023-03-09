#pragma once
class eq2
{
private:
	double a, b, c;
	double D;
	
public:
	eq2(double aa, double bb, double cc) {
		a = aa;
		b = bb;
		c = cc;
		D = b*b - 4* a * c;

	}

	void set(double a1, double b1, double c1);
	double find_x();
	double find_y(double x1);
	double get_a();
	double get_b();
	double get_c();
	void show();

	eq2 operator+(eq2&);

};
