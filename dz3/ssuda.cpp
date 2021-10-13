#include <iostream>
#include <math.h>

using namespace std;
int main() {
	setlocale(0, "");
	double p, s, m, n, r, x;
	cout << "Введите s, m, n" << endl;
	if ((cin >> s >> m >> n) and s > 0 and m > 0 and n > 0) {
		p = 0;
		while (p < 100) {
			r = p / 100;
			if (pow((1 + r), n) > 1) {
				x = (s * r * pow((1 + r), n)) / (12 * (pow(1 + r, n) - 1));
				if (m - x > -1 and m - x < 1) {
					cout << p << endl;
					break;
				}
			}
			p = p + 0.00001;
		}
	}
	else {
		cout << "Неверный формат";
	}
}
