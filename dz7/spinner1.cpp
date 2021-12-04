#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c, n = 0;

	cout << "¬ведите стоимость основани€ спиннера, стоимость одной лопасти и максимальную стоимость всего спиннера" << "\n";

	if (!(cin >> a >> b >> c)) {
		cout << "¬ведена буква";
		return 0;
	}
	else if (a < 0 or b < 0 or c < 0) {
		cout << "¬ведено отрицательное число";
		return 0;
	}
	else if (a > 2000000000 or b > 2000000000 or c > 2000000000) {
		cout << "„исло превышает 2*10^9";
		return 0;
	}
	else if (a > c) {
		cout << "—тоимость основани€ спиннера превышает стоимость всего спиннера";
		return 0;
	}
	while (a + b * n <= c) {
		n += 1;
	}
	cout << "Ќаибольшее число лопастей спиннера: " << n - 1;
}