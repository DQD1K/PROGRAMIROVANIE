#include"Header.h"
#include<iostream>
using namespace std;


int main() {
	double a[5];
	a[0] = 1; a[1] = 2; a[2] = 3; a[3] = 4; a[4] = 5;
	int s;
	cout << "Vvedite element v spiske shtobi vivesti ego(ot 1 do 5): ";
	cin >> s;
	cout << endl;
	try {
		cout << "Vash element: " << Prisiv(a, s) << endl;
	}
	catch (runtime_error& e) {
		cout << "Oshibka: " << e.what() << endl;
	}
}