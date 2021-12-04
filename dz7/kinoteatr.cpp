#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n, k;
	cout << "������� ���������� ���� � ���� � ���������� ����������" << "\n";
	if (!(cin >> n >> k)) {
		cout << "������� �����";
		return 0;
	}
	else if (n < 1 or k < 1) {
		cout << "������� ������������� �����";
		return 0;
	}
	else if (k > n) {
		cout << "���������� ���� ������ ����������";
		return 0;
	}
	while (k != 1) {
		n = (n - k % 2) / 2;
		k /= 2;
	}
	cout << "� ����� ������� " << (n - 1) / 2 << " ����, � ������ - " << n / 2;
}