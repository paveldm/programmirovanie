#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	bool time, lamp, shtor;
	cout <<"Ночь - 0, день - 1" << endl;
	cout << "Лампа выключена - 0, включена - 1" << endl;
	cout << "Шторы задернуты - 0, раздвинуты - 1" << endl;
	if (cin >> time >> lamp >> shtor) {
		if ((time == 1) and ((shtor == 1) or (lamp == 1))) {
			cout << "В комнате светло";
		}
		else if (time == 0 and lamp == 1) {
			cout << "В комнате светло";
		}
		else {
			cout << "В комнате темно";
		}
	}
	else {
		cout << "Неверный формат";
	}
	return 0;
}