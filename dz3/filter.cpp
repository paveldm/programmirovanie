#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string a, b;
	getline(cin, a);
	ofstream abc("1.txt");
	abc << a;
	abc.close();


	for (int i = 1; i < a.size(); i++) {
		char ch = a[i];
		char m = a[i - 1];

		if (47 < (int)ch and (int)ch < 58) {
			if ((int)m == 45) {
				b = b + a[i - 1] + a[i];
			}
			else {
				b = b + a[i];
			}
		}
		else if ((int)ch < 48 or (int)ch > 57) {
			b = b + " ";
		}
	}
	cout << b << "\n";
}