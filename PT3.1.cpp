#include "eq2.h"
#include<iostream>
using namespace std;

int main() {
	double aa, bb, cc, xx1;
	cout << "Vvedite a, b, c, xx1: ";
	cin >> aa >> bb >> cc >> xx1;
	eq2 K(aa, bb, cc);


	double aaa, bbb, ccc;
	cout << "Vvedite a, b, c: ";
	cin >> aaa >> bbb >> ccc;
	eq2 K1(aaa, bbb, ccc);




	K.find_x();
	cout << K.find_y(xx1) << endl;
	
	eq2 K3 = K + K1;
	K3.show();


}