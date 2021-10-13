#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string a, b;
	float sum = 0;
	getline(cin, a);

	for (int i = 0; i < a.length(); i++) {
		if (a[i] < 48 or a[i] > 57) {
			cout << "¬ведены буквы";
			break;
		}
	}

	ofstream in("1.txt");
	in << a;
	in.close();

	ifstream out("1.txt");
	getline(out, b);
	for (int i = 0; i < b.length(); i++) {
		while (b[i] != ' ') {
			
		}
	}
}