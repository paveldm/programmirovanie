#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int rectangle(double a, double b) {
	cout << "������� �������������� = " << a * b << "\n";
	return 0;
}

int triangle(double a, double b) {
	cout << "������� ������������ = " << (a * b) / 2 << "\n";
	return 0;
}

int circle(double a) {
	cout << "������� ���������� = " << a * a * M_PI << "\n";
	return 0;
}

int main() {
	setlocale(0, "");
	double a, b;
	cout << "������� ������� ��������������" << "\n";
	if (cin >> a >> b) {
		rectangle(a, b);
		cout << "������� ����� ��������� � ������ ������������" << "\n";
		if (cin >> a >> b) {
			triangle(a, b);
			cout << "������� ����� ������� ����������" << "\n";
			if (cin >> a) {
				circle(a);
			}
			else {
				cout << "������� �����";
			}
		}
		else {
			cout << "������� �����";
		}
	}	
	else {
		cout << "������� �����";
	}
}