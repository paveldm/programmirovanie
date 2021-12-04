#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c, n = 0;

	cout << "������� ��������� ��������� ��������, ��������� ����� ������� � ������������ ��������� ����� ��������" << "\n";

	if (!(cin >> a >> b >> c)) {
		cout << "������� �����";
		return 0;
	}
	else if (a < 0 or b < 0 or c < 0) {
		cout << "������� ������������� �����";
		return 0;
	}
	else if (a > 2000000000 or b > 2000000000 or c > 2000000000) {
		cout << "����� ��������� 2*10^9";
		return 0;
	}
	else if (a > c) {
		cout << "��������� ��������� �������� ��������� ��������� ����� ��������";
		return 0;
	}
	while (a + b * n <= c) {
		n += 1;
	}
	cout << "���������� ����� �������� ��������: " << n - 1;
}