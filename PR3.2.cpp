#include <iostream>
#include"rational.h"
using namespace std;


int main() {
	cout << "Vvedite kolichestvo elementov: ";
	int x;
	cin >> x;
	rational* array = new rational[x];
	for (int i = 0; i < x; i++)
	{
		int a = 0; int b = 0;
		cout << "Vvedite drob: ";
		cin >> a >> b;
		rational tt = rational(a, b);
		array[i] = tt;
	}

	for (int i = 0; i < x; i++) {
		array[i].show();
	}

	rational K1(1, 2);
	rational K2(2, 3);


	cout << (K1 == K2) << endl; //сравнение
	cout << (K1 > K2) << endl;  // 

	

	K1 = K2; //присвоивание
	K1.show();

	rational K3(2, 5);    //инкремент
	rational K4 = ++K3;
	K4.show();
	
	
}