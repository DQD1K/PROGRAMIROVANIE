#pragma once
#include <iostream>
using namespace std;
class rational
{
	friend rational operator-(rational& x, rational& y);


private:
	int a, b;
	bool T = true;
public:
	rational();
	
	
	rational(int a1, int b1);
	void set(int a1, int b1);
	void show();

	rational operator+(rational&);
	bool operator== (rational&);
	bool operator> (rational&);
	rational operator= (rational&);
	rational operator++();
	rational operator++(int);

	int get_a();
	int get_b();
};

