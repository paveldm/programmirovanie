#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	setlocale(0, "");
	string a, b;
	
	getline(cin, a);

	ofstream fout("1.txt");
	fout << a;
	fout.close();

	ifstream fin("1.txt");
	getline(fin, b);
	fin.close();

	cout << "Содержание файла: " << b << endl;
}