#include "figure.h"
#include <iostream>
using namespace std;


void figure::show() {
	st1 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	st2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	st3 = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4));
	st4 = sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
	P = st1 + st2 + st3 + st4;
	S = sqrt((P / 2 - st1) * (P / 2 - st2) * (P / 2 - st3) * (P / 2 - st4));
	cout << "------ �������������� ------------" << endl;
	cout << "���������� ������: " << "(" << x1 << ";" << y1 << ")" << "(" << x2 << ";" << y2 << ")" << "(" << x3 << ";" << y3 << ")" << "(" << x4 << ";" << y4 << ")" << endl;
	cout << "�������: " << S << endl;
	cout << "��������: " << P << endl;
}



bool figure::is_prug() {
	//���� �������������
	if (sqrt(st1 * st1 + st2 * st2) == sqrt(st2 * st2 + st3 * st3)) {
		cout << "�������������: True" << endl;
	}
	else { cout << "�������������: False" << endl; }
	return true;
}

bool figure::is_square() {
	//���� �������
	if ((sqrt(st1 * st1 + st2 * st2) == sqrt(st2 * st2 + st4 * st4)) && (st1 == st2) && (st2 == st3) && (st3 == st4) && (st4 == st1)) {
		cout << "�������: True" << endl;
	}
	else { cout << "�������: False" << endl; }
	return true;
}

bool figure::is_romb() {
	//���� ����
	if (((st1 == st2) && (st2 == st3) && (st3 == st4) && (st4 == st1)) && (sqrt(st1 * st1 + st2 * st2) != sqrt(st2 * st2 + st4 * st4))) {
		cout << "����: True" << endl;
	}
	else {cout << "����: False" << endl; }
	return true;
}

bool figure::is_in_circle() {
	if (st1 + st3 == st2 + st4) { cout << "����� ������� � ����: True" << endl; }
	else { cout << "����� ������� � ����: False" << endl; }
	return true;
}

bool figure::is_out_circle() {
	//������� ��������
	if (sqrt(st1 * st1 + st2 * st2) * sqrt(st2 * st2 + st3 * st3) <= st1 * st3 + st2 * st4) { cout << "����� ������� ����: True" << endl; }
	else { cout << "����� ������� ����: False" << endl; }
	return true;
}