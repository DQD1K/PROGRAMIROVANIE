#include <iostream>
#include "figure.h"
using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");
	float x1_c, x2_c, x3_c, x4_c, y1_c, y2_c, y3_c, y4_c;
	cout << "������� ���������� ������ � ���� (x, y) 4 ���� BTW �������� � ������ ������� ���� � ����� �� �������: " << endl;
	cin >> x1_c >> y1_c >> x2_c >> y2_c >> x3_c >> y3_c >> x4_c >> y4_c;
	//�������� �� ������ ���(
	figure F(x1_c, x2_c, x3_c, x4_c, y1_c, y2_c, y3_c, y4_c, 0, 0, 0, 0, 0, 0);

	F.show();
	F.is_prug();
	F.is_square();
	F.is_romb();
	F.is_in_circle();
	F.is_out_circle();
}