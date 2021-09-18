#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, i;
	cout << "¬ведите число" << endl;
	if(cin >> x){
		if (x < 0) {
			cout << "0 1 2 3 4 5 6 7 8 9";
		}
		else {
			cout << x << " ";
			for (i = 1; i <= 9; i++) {
				cout << x + i << " ";
			}
		}
	}
	else {
		cout << "¬ведена буква";
	}
}