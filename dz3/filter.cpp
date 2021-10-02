#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// вход данные 		12 -12 3.5 -3344.5 .8 12qwerty
int main() {
	string a, b;
	getline(cin, a);
	ofstream abc("1.txt");
	abc << a;
	abc.close();


	for (int i = 1; i < a.size(); i++) {
		char ch = a[i];
		char m = a[i - 1];

		if ('0' < ch and (int)ch < '9') {
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