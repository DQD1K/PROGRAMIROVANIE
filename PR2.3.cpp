#include <iostream>
#include "figure.h"
using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");
	float x1_c, x2_c, x3_c, x4_c, y1_c, y2_c, y3_c, y4_c;
	cout << "Введите координаты вершин в виде (x, y) 4 раза BTW воводите с левого нижнего угла и далее по часовой: " << endl;
	cin >> x1_c >> y1_c >> x2_c >> y2_c >> x3_c >> y3_c >> x4_c >> y4_c;
	//Проверки на дурака нет(
	figure F(x1_c, x2_c, x3_c, x4_c, y1_c, y2_c, y3_c, y4_c, 0, 0, 0, 0, 0, 0);

	F.show();
	F.is_prug();
	F.is_square();
	F.is_romb();
	F.is_in_circle();
	F.is_out_circle();
}