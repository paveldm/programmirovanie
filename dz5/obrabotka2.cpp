#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "������� ����� ��������� �������� � ��������� ���� (����� 39)" << "\n";
	cout << "������� ������" << "\n";
	string a, b;
	getline(cin, a);
	ofstream fout("1.txt");
	fout << a;
	fout.close();

	ifstream r("1.txt");
	getline(r, b);
	r.close();

	int cnt = 0;

	for (int i = 0; i < b.size(); i++) {
		cnt++;
	}
	cout << "���������� ��������� ��������, ������� �������: " << cnt;
}