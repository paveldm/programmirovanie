#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(0, "");

	string a, b;
	char pred;
	pred = ' ';

	ofstream file_in("1.txt");

	getline(cin, a);
	file_in << a;
	file_in.close();
	ifstream file_read("1.txt");

	for (int i = 0; i < a.length(); i++) {
		b = ' ';
		bool flag = true;
		if (isdigit(a[i]) and (pred == ' ' or pred == '-')) {
			if (pred == ' ') {
				b = ' ';
			}
			else {
				b = ' -';
			}
			while (a[i] != ' ' and i < a.length()) {
				if (!(isdigit(a[i])) and a[i] != '.') {
					flag = false;
				}
				b += a[i];
				i++;
			}
			if (flag) {
				cout << b; 
			}
		}
		pred = a[i];
	}
}