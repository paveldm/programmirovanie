#include <iostream>
using namespace std;

int sign(double x){
	if (x > 0) {
		return 1;
	}
	else if (x == 0) {
		return 0;
	}
	else {
		return -1;
	}
}

int main() {
	setlocale(0, "");
	double x;
	cout << "������� �����" << "\n";
	if (cin >> x) {
		cout << sign(x);
	}
	else {
		cout << "������� �����";
	}
	return 0;
}