#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(0, "");
	string a, b;
	int i;

	getline(cin, a);

	ofstream fout("2.txt");
	fout << a;
	
	for (i = 1; i <= a.size; i++) {
		if a[i] =
	}

	fout.close();

	cout << a;

}