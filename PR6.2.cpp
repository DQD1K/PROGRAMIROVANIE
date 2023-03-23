#include "Cone.h"
#include "truncated_cone.h"
#include <iostream>
using namespace std;

int main() {
	//truncated_cone tr_cone(5, 4, 3); //произвольный усеченный конус
	//cout << tr_cone.area() << endl;
	//cout << tr_cone.volume() << endl;

	//truncated_cone T(0, 0, 0);
	//cin >> T;
	//cout << T;

	//if (tr_cone > T) { cout << "True" << endl; }
	//else { cout << "False" << endl; }


	cout << "Vvedite kolichestvo elementov: ";
	int x;
	cin >> x;
	truncated_cone* array = new truncated_cone[x];
	for (int i = 0; i < x; i++)
	{
		int a = 0; int b = 0; int c = 0;
		cout << "Vvedite 2 Radiusa i visotu usechenogo konusa: ";
		cin >> a >> b >> c;
		truncated_cone tt = truncated_cone(a, b, c);
		array[i] = tt;
	}

	for (int i = 0; i < x; i++) {
		cout << array[i];
		cout << array[i].area() << endl;
		cout << array[i].volume() << endl;
		cout << "--------------------------" << endl;
	}

	cout << "Eslu 1 konys > 2 konysa: ";
	if (array[0] > array[1]) { cout << "True" << endl; }
	else { cout << "False" << endl; }


}