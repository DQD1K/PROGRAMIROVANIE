#include<iostream>
#include"Header1.h"
using namespace std;


int main() {
	double a[100];
	int s;
	cout << "Vvedite element k kotoromy obratitsya: ";
	cin >> s;

	for (int i = 0; i < 100; i++) {
		a[i] = 0;
	}


	try {
		cout << "Vash element: " << Obrashenie(a, s) << endl;
	}
	catch (runtime_error& e) {
		cout << "Oshibka: " << e.what() << endl;
	}
}