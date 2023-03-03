#pragma once
class eq2
{
private:
	double a, b, c;
	double D;
	double x1;
public:
	eq2(double aa, double bb, double cc, double DD, double xx1) {
		a = aa;
		b = bb;
		c = cc;
		D = DD;
		x1 = xx1;
	}

	void set(double a1, double b1, double c1);
	double find_x();
	double find_y(double x1);
};

