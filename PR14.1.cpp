#include<iostream>
using namespace std;


double Delenie(double a, double b) {
	if (b == 0) {
		throw runtime_error("Math error: delenie na nyl\n");
	}
	else {
		return (a / b);
	}
}




int main() {
	double a, b, result;
	cout << "Vvedite chisla dlya deleniya: ";
	cin >> a >> b;
	cout << endl;
	try {
		result = Delenie(a, b);
		cout << "Resultat deleniya: " << result << endl;
	}
	catch(runtime_error& e){
		cout << "oshibka" << endl << e.what();
	}
}