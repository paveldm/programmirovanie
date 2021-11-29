#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string a, b, num, res, fraction, new_num, file_var = "";
	int sum = 0, k = 1, sys;
	bool d = false;
	string m = { '0','1','2','3','4','5','6','7','8','9' };
	cout << "Все данные записываются через пробел" << "\n";
	cout << "Дробную часть числа отделять точкой от целой" << "\n" << "\n";
	cout << "Введите нужную систему счисление от 2 до 9" << "\n";

	cin >> sys;

	ofstream w("1.txt");
	getline(cin, a);
	w << a;
	w.close();

	ifstream r("1.txt");
	getline(r, b);
	r.close();
	b += " ";

	int i = 0;
	while (i < b.length()) {
		num += b[i];
		if (b[i] == ' ') {
			for (char n : num) {
				if (n == '.' or n == ',' and d == false) {
					d = true;
				}
				for (char check : m) {
					if (n == check and d == false) {
						new_num += m.find(check);
					}
					if (n == check and d == true) {
						fraction += m.find(check);
					}
				}
			}
			int k = 1;
			for (char n : new_num) {
				sum += int(n) * pow(10, new_num.length() - k);
				k++;
			}
			while (sum > 0) {
				res += m[(sum % sys)];
				sum /= sys;
			}

			reverse(res.begin(), res.end());

			if (d == true) {
				res += ',';
				float sum = 0;
				k = -1;
				for (char n : fraction) {
					sum += int(n) * pow(10, k);
					k--;
				}
				k = 0;
				while (k < 10 and sum > 0) {
					res += m[int((sum * sys) / 1)];
					sum = fmod(sum * sys, 1);
					k++;
				}
			}

			cout << res << " ";
			file_var += res + " ";
			res = "";
			num = ' ';
			new_num = "";
			fraction = "";
			sum = 0;
			d = false;
		}
		i++;
	}
	ofstream file_res("result.txt");
	file_res << file_var;
	file_res.close();
}