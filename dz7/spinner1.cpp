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
	else if (a > c) {
		cout << "��������� ��������� �������� ��������� ��������� ����� ��������";
		return 0;
	}
	while (a + b * n <= c) {
		n += 1;
	}
	cout << "���������� ����� �������� ��������: " << n - 1;
}