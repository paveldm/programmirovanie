#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n, i = 0, m, cnt = 1, max_cnt = 0;
	int* a = new int[9];
	for (; i < 9; i++) {
		a[i] = 0;
	}

	cout << "Введите количество свободных мест" << "\n";
	if (!(cin >> n)) {
		cout << "Введена буква";
		return 0;
	}
	cout << "Введите номера свободных мест" << "\n";
	
	for (i = 0; i < n; i++) {
		if (!(cin >> m)) {
			cout << "Введена буква";
			return 0;
		}
		if (!(m >= 1 and m <= 54)) {
			cout << "Нет такого номера";
			return 0;
		}
		else if (m <= 36) {
			a[(m - 1) / 4] += 1;
		}
		else {
			a[8 - (m - 37) / 2] += 1;
		}
	}

	for (i = 0; i < 8; i++) {
		if (a[i] >= 6 and a[i + 1] >= 6) {
			cnt++;
		}
		else {
			cnt = 0;
		}
		if (cnt > max_cnt) {
			max_cnt = cnt;
		}
	}

	for (int i = 0; i < 9; i++) {
		cout << a[i] << " ";
	}
	cout << "\n" << max_cnt;
}