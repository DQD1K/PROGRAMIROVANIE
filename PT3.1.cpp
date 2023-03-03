#include "eq2.h"
#include<iostream>
using namespace std;

int main() {
	double aa, bb, cc, xx1;
	cout << "Vvedite a, b, c, x1: ";
	cin >> aa >> bb >> cc >> xx1;;
	eq2 K(0, 0, 0, 0, 0);

	


	K.set(aa, bb, cc);
	K.find_x();
	cout << K.find_y(xx1);


}
