#include <iostream>
#include "circle.h";
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float r, x, y;
	float a, b, c;
	float r1, x1, y1; //����� � ���������� ���������� ��� ���������

	cout << "������� ������� ������������: ";
	cin >> a >> b >> c;
	cout << "������� ����� � ���������� ���������� ��� ���������: ";
	cin >> r1 >> x1 >> y1;


	for (int i = 0; i < 3; i++) {
		cout << "������� ����� � ���������� ������ ����������: ";
		cin >> r >> x >> y;

		circle C(r, x, y);
		
		cout << C.square() << endl;
		C.trin_around(a, b, c);
		C.trin_in(a, b, c);
		C.check_circle(r1, x1, y1);
		cout << "-----------------------------------------" << endl;
	}



}