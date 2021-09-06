#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	double x, a;
	cout << "Введите x и a" << endl;
	if (cin >> x >> a) {
		if ((x * x) < a) {
			if (abs(x) < 1) {
				cout << a * log(abs(x));
			}
			else if (abs(x) >= 1) {
				cout << sqrt(a - x * x);
			}
		}
		else if (x * x >= a) {
			cout << "Недопустимые значения";
		}
	}
	else {
		cout << "Введена буква";
	}
	return 0;
}