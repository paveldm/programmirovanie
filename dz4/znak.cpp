#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	float x;
	cout << "¬ведите число" << "\n";
	if (cin >> x) {
		if (x > 0) {
			cout << 1;
		}
		else if (x == 0) {
			cout << 0;
		}
		else {
			cout << -1;
		}
	}
	else {
		cout << "¬ведена буква";
	}
}