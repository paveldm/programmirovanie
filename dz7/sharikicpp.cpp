#include <iostream>
using namespace std;

int factorial(int n) {
	if (n < 0) {
		cout << "Введено отрицательное число";
		return 0;
	}
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int func(bool shariki[], int n, int poryadok = 0) {
	int cnt = 0;
	if (poryadok >= n) {
		cnt = 1;
	}
	else {
		for (int i = 0; i < n; i++) {
			if ((i != poryadok) and !shariki[i]) {
				shariki[i] = true;
				cnt += func(shariki, n, poryadok + 1);
				shariki[i] = false;
			}
		}
	}
	return cnt;
}

int main() {
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите количество шариков" << "\n";
	if (!(cin >> n)) {
		cout << "Введена буква или не целое число" << "\n";
		return 0;
	}
	if (n < 0) {
		cout << "Введено отрицательное число";
		return 0;
	}
	bool* shariki = new bool [n] {false};
	cout << "Количество ситуаций, когда номер хотя бы одного вынутого шарика совпадает с порядковым номером действия \"вынимания\": " << "\n";
	cout << factorial(n) - func(shariki, n);
}