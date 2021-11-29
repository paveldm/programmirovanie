#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string a, b;
	int min = 1000;
	int cnt = 0;
	string ph, min_ph = "";
	cout << "Поиск в тексте фразы минимальной длины (номер 7)" << "\n";
	cout << "Введите строку" << "\n";
	getline(cin, a);
	ofstream w("1.txt");
	w << a;
	w.close();

	ifstream r("1.txt");
	getline(r, b);
	r.close();

	for (int i = 1; i < b.length(); i++) {
		if (b[i] == ' ' && b[i - 1] == ' ') {
			b.erase(i, 1);
			i--;
		}
	}

	for (int i = 0; i < b.length(); i++) {
		if (b[i] != ' ') {
			cnt++;
			ph += b[i];
		}
		else {
			if (cnt <= min) {
				min = cnt;
				min_ph = ph;
			}
			cnt = 0;
			ph = "";
		}
	}
	if (cnt < min) {
		min = cnt;
		min_ph = ph;
	}
	cout << "Минимальная фраза: " << min_ph << "\n";
	cout << "Длина минимальной фразы: " << min;
}