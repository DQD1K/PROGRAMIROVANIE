#include <iostream>
#include "circle.h";
using namespace std;

int main() {
	int a = 0, b = 0, c = 0;
	circle Krug[3];
	float radius;
	int x_coord, y_coord;
	for (int i = 0; i < 3; i++) {
		cout << "Vvod: Radius, x koordinata, y koordinata" << endl;
		cin >> radius >> x_coord >> y_coord;
		Krug[i].set_circle(radius, x_coord, y_coord);
	}
	
	cout << "Vvidite storoni treugolnika dlya cravneniya" << endl;
	cin >> a, b, c;
	float radius_2; // koordinati vtorogo kruga
	int x, y;
	cout << "Vvediti radius i koordinati kruga dlya sravneniya" << endl;
	cin >> radius_2 >> x >> y;

	for (int j = 0; j < 3; j++) {
		Krug[j].square();
		Krug[j].trin_around(a, b, c);
		Krug[j].trin_in(a, b, c);
		Krug[j].check_circle(radius_2, x, y);
		cout << "-------------------------" << endl;
	}
}