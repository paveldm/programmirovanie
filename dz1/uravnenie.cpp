#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float b, c;
	cout << "Введите числа b и c" << endl;
	if(cin >> b >> c){
		if (b == 0) {
			cout << "Невозможно решить уравнение для b=0";
		}
		else {
			cout << -c / b;
		}
	}
	else {
		cout << "Введена буква";
	}
	return 0;
}