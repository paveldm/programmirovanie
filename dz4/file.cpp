#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string str, new_str;
	double sum = 0;
	int i = 0;
	int	j = 0;
	int num_m = 0, num_d = 0;
	ofstream fout("1.txt");
	cout << "¬ведите 10 чисел, перед дробной частью точка (перед первым числом не должно быть пробела): " << "\n";
	getline(cin, str);
	if (str[0] == ' ') {
		cout << "¬ведена буква";
	}
	while (i < str.length()) {
		if (!(isdigit(str[i]) or str[i] == ' ' or str[i] == '.' or str[i] == '-')) {
			cout << "¬ведена буква";
			return 0;
		}
		if (num_m > 1 or num_d > 1) {
			cout << "¬ведена буква";
			return 0;
		}
		if (str[i] == ' ') {
			num_m = 0;
			num_d = 0;
		}
		if (str[i] == '-') {
			num_m++;
		}
		if (str[i] == '.') {
			num_d++;
		}
		i++;
	}
	fout << str;
	fout.close();
	ifstream fin("1.txt");
	getline(fin, str);
	while (j < str.length()) {
		new_str += str[j];
		if (str[j] == '-') {
			new_str = '-';
		}
		if (str[j] == ' ') {
			sum = stold(new_str) + sum;
			new_str = ' ';
		}
		j++;
	}
	sum = stold(new_str) + sum;
	cout << "—умма чисел = " << sum;
}