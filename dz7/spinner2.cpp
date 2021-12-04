#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int m;
	cout << "Введите количество лопастей" << "\n";
	if (!(cin >> m)) {
		cout << "Введена буква";
		return 0;
	}
	else if (m < 0) {
		cout << "Введено отрицательное число";
		return 0;
	}
	else if (m > 2000000000) {
		cout << "Число превышает 2*10^9";
		return 0;
	}
	int cnt4 = m % 3;
	int cnt3 = (m - 4 * cnt4) / 3;
	if (cnt3 >= 0) {
		cout << "Количество спиннеров с 3 лопастями: " << cnt3 << "\n";
		cout << "Количество спиннеров с 4 лопастями: " << cnt4 << "\n";
	}
	else {
		cout << 0;
	}
}