#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	bool time, lamp, shtor;
	cout <<"���� - 0, ���� - 1" << endl;
	cout << "����� ��������� - 0, �������� - 1" << endl;
	cout << "����� ��������� - 0, ���������� - 1" << endl;
	if (cin >> time >> lamp >> shtor) {
		if ((time == 1) and ((shtor == 1) or (lamp == 1))) {
			cout << "� ������� ������";
		}
		else if (time == 0 and lamp == 1) {
			cout << "� ������� ������";
		}
		else {
			cout << "� ������� �����";
		}
	}
	else {
		cout << "�������� ������";
	}
	return 0;
}