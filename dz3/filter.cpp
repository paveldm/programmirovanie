#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(0, "");

	string a, b, c;
	char pred;
	pred = ' ';

	ofstream file_in("1.txt");

	getline(cin, a);
	file_in << a;
	file_in.close();
	ifstream file_read("1.txt");

	for (int i = 0; i < a.length(); i++) {
		int t = 0;
		b = ' ';
		bool flag = true;
		if (isdigit(a[i]) and (pred == ' ' or pred == '-')) {
			if (pred == ' ') {
				b = ' ';
			}
			else {
				b = " -";
			}
			while (a[i] != ' ' and i < a.length()) {
				if (!(isdigit(a[i])) and a[i] != '.') {
					flag = false;
				}
				if (a[i] == '.') {
					t++;
				}
				b += a[i];
				i++;
			}
			if (t > 1) {
				flag = false;
			}
			if (flag) {
				cout << b; 
			}
			t = 0;
		}
		pred = a[i];
	}
}