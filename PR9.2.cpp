#include <iostream>
#include <time.h>
#include <string>
using namespace std;

template <class T1, class T2> void t_sort(T1*& m, T2 n) {
	T1 c;
	int i = 0;
	while (i <= (n - 2)) {
		if (m[i] > m[i + 1]) {
			c = m[i];
			m[i] = m[i + 1];
			m[i + 1] = c;
			i = 0;
			continue;
		}
		i++;
	}
}

int main()
{
	srand(time(NULL));
	int n;
	cout << "Vvedite kolichestvo elementov: ";
	cin >> n;
	int* m = new int[n];
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 100;
	}
	cout << "Spisok do sortirovki: ";
	for (int i = 0; i < n; i++) {
		cout << m[i] << " ";
	}
	cout << endl;
	t_sort(m, n);
	cout << "Spisok posle sortirovki: ";
	for (int i = 0; i < n; i++) {
		cout << m[i] << " ";
	}
	delete[] m;
	cout << endl << "Vvedite kolichestvo elementov: ";
	cin >> n;
	cout << "Vvedite " << n << " strok" << endl;
	string* s = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	t_sort(s, n);
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
	delete[] s;
}