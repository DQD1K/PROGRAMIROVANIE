#pragma once
#include<iostream>
using namespace std;



double Prisiv(double a[], int s) {
	if ((s < 0) || (s > 5)) {
		throw runtime_error("Neverniy element massiva\n");
	}
	else { return (a[s-1]); }
}