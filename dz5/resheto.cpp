#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int x;
	int i = 0;
	cout << "¬ведите натуральное число" << "\n";
	if (!(cin >> x)) {
		cout << "¬ведена буква";
	}
	else {
		for (int i = 2; i <= x; i++) {
			int num_d = 2;
			for (int j = 2; j <= round(sqrt(x)); j++) {
				if (i % j == 0) {
					num_d = num_d + 1;
					if (num_d > 2) {
						break;
					}
				}
			}
			if (num_d == 2) {
				cout << i << " ";
			}
		}
	}
}