#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cout << "Введите числа a, b, c" << endl;
	if (cin >> a >> b >> c) {
		float d = b * b - 4 * a * c;
		if (a != 0) {
			if (d > 0) {
				cout << (-b + sqrt(d)) / (2 * a) << " " << (-b - sqrt(d)) / (2 * a);
			}
			else if (d == 0) {
				cout << (-b + sqrt(d)) / (2 * a);
			}
		}
		else if (a == 0) {
			cout << -c / b;
		}
		else {
			cout << "Нет решений";
			return 0;
		}
	}
	else {
		cout << "Введена буква";
	}
	return 0;
}