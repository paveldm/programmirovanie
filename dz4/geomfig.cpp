#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int rectangle(double a, double b) {
	cout << "ѕлощадь пр€моугольника = " << a * b << "\n";
	return 0;
}

int triangle(double a, double b) {
	cout << "ѕлощадь треугольника = " << (a * b) / 2 << "\n";
	return 0;
}

int circle(double a) {
	cout << "ѕлощадь окружности = " << a * a * M_PI << "\n";
	return 0;
}

int main() {
	setlocale(0, "");
	double a, b;
	cout << "¬ведите стороны пр€моугольника" << "\n";
	if (cin >> a >> b) {
		rectangle(a, b);
		cout << "¬ведите длину основани€ и высоты треугольника" << "\n";
		if (cin >> a >> b) {
			triangle(a, b);
			cout << "¬ведите длину радиуса окружности" << "\n";
			if (cin >> a) {
				circle(a);
			}
			else {
				cout << "¬ведена буква";
			}
		}
		else {
			cout << "¬ведена буква";
		}
	}	
	else {
		cout << "¬ведена буква";
	}
}