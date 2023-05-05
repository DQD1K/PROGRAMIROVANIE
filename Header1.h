#pragma once
#include<iostream>
using namespace std;


double Obrashenie(double a[], int s) {
	bool T = false;
	for (int i = 0; i < 100; i++) {
		if (a[i] == 0) {
			T = true;
		}
		else { T = false; }
	}

	if (T) {
		throw runtime_error("Massiv pustoy, obratitsa nevozmochno\n");
	}
	else {
		return a[s];
	}
}
