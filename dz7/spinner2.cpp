#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int m;
	cout << "������� ���������� ��������" << "\n";
	if (!(cin >> m)) {
		cout << "������� �����";
		return 0;
	}
	int cnt4 = m % 3;
	int cnt3 = (m - 4 * cnt4) / 3;
	if (cnt3 >= 0) {
		cout << "���������� ��������� � 3 ���������: " << cnt3 << "\n";
		cout << "���������� ��������� � 4 ���������: " << cnt4 << "\n";
	}
	else {
		cout << 0;
	}
}