#include <iostream>
#include <windows.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	cout << "Былая слава 1912 года" << "\n";
	for (int i = 0; i < 13; ++i)
	{
		if (i < 6) {
			cout << "*";
			for (int j = 0; j < 7; ++j) {
				cout << " *";
			}
			cout << " " << setw(39) << setfill('/');
			cout << '\n';
		}
	}

	for (int i = 0; i < 7; ++i) {
		cout << setw(55) << setfill('/') << '\n';
	}

	return 0;
}