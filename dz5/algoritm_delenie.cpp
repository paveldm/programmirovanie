#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "���������� ��� ���� ����� ��������" << "\n";
	cout << "������� ��� ����� ����� ����� ������" << "\n";
	if (!(cin >> a >> b)) {
		cout << "������� �����";
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
		cout << "��� = " << a + b;
	}
}