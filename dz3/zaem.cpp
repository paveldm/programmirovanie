#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	float s, p, n;
	cout << "¬ведите S, p, n" << endl;
	if ((cin >> s >> p >> n) and s > 0 and p > 0 and n > 0) {
		float r = p / 100;
		cout << (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
	}
	else {
		cout << "¬ведена буква";
	}
	return 0;
}




