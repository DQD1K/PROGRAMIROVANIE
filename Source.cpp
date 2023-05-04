#include"My_class.h"
#include<iostream>
using namespace std;

template <class T>
void Swap(T &x,T &y) {
	T z = x;
	x = y;
	y = z;
}

template <class T>
void OutXY(T &x, T &y) {
	cout << x << " " << y << endl;
}

int main() {
	int x = 1;
	int y = 2;
	OutXY(x, y);
	Swap(x, y);
	OutXY(x, y);

	My_class t1(1, 1.5), t2(2, 9.9);
	t1.Out();
	t2.Out();
	Swap(t1, t2);
	t1.Out();
	t2.Out();
}