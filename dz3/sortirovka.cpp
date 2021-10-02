#include <iostream>
using namespace std;

int main() {
	string a, b;
	a = "alrtjgnJWMflapIRNtkquWPQAwertb";
	b = "                              ";
	for (int i = 0; i < a.size() - 1; i++) {
		int min = i;
		char ch1 = a[min];
		for (int j = i + 1; j < a.size(); j++) {
			char ch2 = a[j];
			if ((int)ch2 < (int)ch1) {
				min = j;
			}
		}
		if (min != i) {
			swap(a[i], a[min]);
		}
	}
	cout << a;
}