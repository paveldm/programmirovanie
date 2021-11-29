#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string a = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	string num, new_num, fraction, res;
	int sys1, sys2;
	bool d = false;
	int sum = 0;
	cout << "Введите число для перевода: ";
	if (!(cin >> num)) {
		cout << "Ошибка ввода";
		return 0;
	}
	cout << "Из системы счисления: ";
	if (!(cin >> sys1)) {
		cout << "Ошибка ввода";
		return 0;
	}
	cout << "В систему счисления: ";
	if (!(cin >> sys2)) {
		cout << "Ошибка ввода";
		return 0;
	}
	if (sys2 < 2 or sys2 > 16 or sys1 < 2 or sys1 > 16) {
		cout << "Неверно введена система счисления";
		return 0;
	}
	for (char n: num) {
		if (n == '.' or n == ',' and d == false) {
			d = true;
		}
		for (char check: a) {
			if (a.find(n) >= sys1 and n != '.' and n != ',') {
				cout << "Число введено неправильно" << a.find(n);
				return 0;
			}
			if (n == check and d == false) {
				new_num += a.find(check);
			}
			if (n == check and d == true) {
				fraction += a.find(check);
			}
		}
	}

	int k = 1;
	for (char n: new_num) {
		sum += int(n) * pow(sys1, new_num.length() - k);
		k++;
	}
	while (sum > 0) {
		res += a[(sum % sys2)];
		sum /= sys2;
	}

	reverse(res.begin(), res.end());

	if (d == true) {
		res += ',';
		float sum = 0;
		k = -1;
		for (char n: fraction) {
			sum += int(n) * pow(sys1, k);
			k--;
		}
		k = 0;
		while (k < 10 and sum > 0) {
			res += a[int((sum * sys2) / 1)];
			sum = fmod(sum * sys2, 1);
			k++;
		}
	}
	cout << "Число в новой системе счисления " << sys2 << ": " << res;
}