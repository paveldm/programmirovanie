#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Нахождение НОД двух чисел делением" << "\n";
	cout << "Введите два целых числа через пробел" << "\n";
	if (!(cin >> a >> b)) {
		cout << "Введена буква";
	}
	else {
		while (a != 0 and b != 0){
			if (a > b) {
				a = a % b;
			}
			else {
				b = b % a;
			}
		}
		cout << "НОД = " << a + b;
	}
}