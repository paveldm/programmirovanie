#include <iostream>
using namespace std;

int main() {
	double x;
	for (x = -4; x <= 4; x = x + 0.5) {
		if (x == 1) {
			cout << "������ �� 0 ������";
		}
		else {
			cout << (x * x - 2 * x + 2) / (x - 1) << endl;
		}
	}
	return 0;
}