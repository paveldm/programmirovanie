#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float b, c;
	cout << "������� ����� b � c" << endl;
	if(cin >> b >> c){
		if (b == 0) {
			cout << "���������� ������ ��������� ��� b=0";
		}
		else {
			cout << -c / b;
		}
	}
	else {
		cout << "������� �����";
	}
	return 0;
}