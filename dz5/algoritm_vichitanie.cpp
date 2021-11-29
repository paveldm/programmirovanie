#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Нахождение НОД двух чисел вычитанием" << "\n";
	cout << "Введите два целых числа через пробел" << "\n";
	if (!(cin >> a >> b)) {
		cout << "Введена буква";
	}
	else {
		while (a != b) {
			if (a > b) {
				a = a - b;
			}
			else {
				b = b - a;
			}
		}
		cout << "НОД = " << a;
	}
}