#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	double x, y, b;
	cout << "������� x, y, b" << endl;
	if (cin >> x >> y >> b) {
		if (b <= y or b <= x) {
			cout << "�� ���������� �������������� ������������������� ��� ������������ ���������";
		}
		else {
			cout << log(b - y) * sqrt(b - x);
		}
	}
	else {
		cout << "������� �����";
	}
	return 0;
}