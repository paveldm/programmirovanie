#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string a = "";
	int i = 0;
	int b = 0;
	int cnt = 0;
	double z = 0;
	double y = 0;
	cout << "Номер 1 из задания \"Ряды\"" << "\n";
	cout << "Введите целое число n" << "\n";
	cin >> a;
	while (a.length() >= i) {
		if ((int)a[i] > 47 and (int)a[i] < 58) {
			cnt++;
		}
		i++;
	}
	b = stoi(a);

	if (cnt == a.length()) {
		if (b == 0) {
			cout << "Введен 0";
		}
		else {
			for (i = 1; i <= b; i++) {
				z += sin(i);
				y += i / z;
			}
			cout << y;
		}
	}
	else {
		cout << "Неверный формат";
	}
}