#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	double x, y, b;
	cout << "Введите x, y, b" << endl;
	if (cin >> x >> y >> b) {
		cout << log(b - y) * sqrt(b - x);
	}
	else if (b <= y or b <= x) {
		cout << "Не существует отрицательного подлогарифмического или подкоренного выражения";
	}
	else {
		cout << "Введена буква";
	}
	return 0;
}