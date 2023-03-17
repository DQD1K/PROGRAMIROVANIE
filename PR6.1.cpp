#include "Cone.h"
#include <iostream>
using namespace std;

int main() {
	Cone c1(3, 7); //Conus s centrom v nachale coordinat
	Cone c2(1, 2, 3, 5, 10); //Proizvolniu conus

	c1.show();
	c2.show();

	cout << "Area: " << c1.area() << endl;
	cout << "Volume: " << c1.volume() << endl;
	cout << "---------------------" << endl;
	cout << "Area: " << c2.area() << endl;
	cout << "Volume: " << c2.volume() << endl;
	cout << "---------------------" << endl;


	Cone* array = new Cone[3];
	for (int i = 0; i < 3; i++) {
		int r = 0; int h = 0;
		cout << "Vvedite radius i height: ";
		cin >> r >> h;
		Cone tt = Cone(r, h);
		array[i] = tt;
		cout << "----------------------" << endl;
	}

	for (int i = 0; i < 3; i++) {
		array[i].show();
	}
}