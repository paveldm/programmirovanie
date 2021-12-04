#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n, k;
	cout << "Введите количество мест в ряду и количество школьников" << "\n";
	if (!(cin >> n >> k)) {
		cout << "Введена буква";
		return 0;
	}
	else if (n < 1 or k < 1) {
		cout << "Введено отрицательное число";
		return 0;
	}
	else if (k > n) {
		cout << "Количество мест меньше школьников";
		return 0;
	}
	while (k != 1) {
		n = (n - k % 2) / 2;
		k /= 2;
	}
	cout << "С одной стороны " << (n - 1) / 2 << " мест, с другой - " << n / 2;
}