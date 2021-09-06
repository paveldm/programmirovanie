#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, i;
	cout << "¬ведите число" << endl;
	if(cin >> x){
		cout << x << " ";
		for (i = 1; i <= 9; i++) {
			cout << x + i << " ";
		}
	}
	else {
		cout << "¬ведена буква";
	}
}