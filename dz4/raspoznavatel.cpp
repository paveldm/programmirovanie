#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string str = "";
	int x = 0;
	int a = 10000;
	int sum = 0;
	cout << "������� ����� �������� �������� �������: " << "\n";
	if (!(cin >> str)) {
		cout << "�������� ������";
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
			cout << "�������� ������";
			return 0;
		}
		if (a < x) {
			if (a * 10 != x and a + 4 != x and a + 40 != x and a and 400 != x) {
				cout << "������� �� �����";
				return 0;
			}
			sum += x - a * 2;
		}
		else {
			sum += x;
		}
		a = x;
	}
	cout << "����� � ���������� �������: " << sum;
}