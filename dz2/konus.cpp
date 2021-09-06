#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	double r1, r2, h;
	cout << "¬ведите R, r и h" << endl;
	if (cin >> r1 >> r2 >> h) {
		double l = sqrt(h * h + r1 * r1);
		cout << "V = " << (M_PI * h * (r1 * r1 + r1 * r2 + r2 * r2)) / 3 << endl;
		cout << "S = " << M_PI * (r1 * r1 + (r1 + r2) * (l - sqrt((r2 / r1) * l)) + r2 * r2);
	}
	else {
		cout << "¬ведена буква";
	}
	return 0;
}