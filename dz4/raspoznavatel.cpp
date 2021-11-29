#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string str = "";
	int x = 0;
	int a = 10000;
	int sum = 0;
	cout << "Введите число большими римскими числами: " << "\n";
	if (!(cin >> str)) {
		cout << "Неверный формат";
		return 0;
	}
	for (char i: str) {
		switch (i) {
		case 'I':
			x = 1;
			break;
		case 'V':
			x = 5;
			break;
		case 'X':
			x = 10;
			break;
		case 'L':
			x = 50;
			break;
		case 'C':
			x = 100;
			break;
		case 'D':
			x = 500;
			break;
		case 'M':
			x = 1000;
			break;
		default:
			cout << "Неверный формат";
			return 0;
		}
		if (a < x) {
			if (a * 10 != x and a + 4 != x and a + 40 != x and a and 400 != x) {
				cout << "Введено не число";
				return 0;
			}
			sum += x - a * 2;
		}
		else {
			sum += x;
		}
		a = x;
	}
	cout << "Число в десятичной системе: " << sum;
}