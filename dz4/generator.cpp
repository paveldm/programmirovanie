#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int m, i, c, a, k;
	int s0 = 0;
	cout << "������� �������� 1 ��� 2" << "\n";
	if (!(cin >> a) or (a != 1 and a != 2)) {
		cout << "�������� ����";
		return 0;
	}
	else {
		if (a == 1) {
			m = 37;
			i = 3;
			c = 64;
		}
		if (a == 2) {
			m = 25173;
			i = 13849;
			c = 65537;
		}
	}
	cout << "������� ���������� ������ ��������������� �����" << "\n";
	if (!(cin >> k) or k <= 0) {
		cout << "�������� ����" << "\n";
	}
	else {
		while (k > 0) {
			s0 = (m * s0 + i) % c;
			cout << s0 << "\n";
			k--;
		}
	}
 }