#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "���������� ��� ���� ����� ����������" << "\n";
	cout << "������� ��� ����� ����� ����� ������" << "\n";
	if (!(cin >> a >> b)) {
		cout << "������� �����";
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
		cout << "��� = " << a;
	}
}