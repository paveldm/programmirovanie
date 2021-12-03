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