#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string a;
	getline(cin, a);
	ofstream fout("1.txt");
	fout << a;
	fout.close();

	int cnt = 0;

	for (int i = 0; i < a.size(); i++) {
		char ch = a[i];
		if (ch != ' ') {
			cnt++;
		}
	}
	cout << cnt;
}