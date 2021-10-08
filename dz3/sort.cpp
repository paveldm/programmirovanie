#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(0, "");
	string a = "";
	getline(cin, a);
	int arr[26];
	for (int i = 0; i < 26; i++) {
		arr[i] = 0;
	}
	if (a.length() > 30) {
		cout << "Ёлементов больше 30";

	}
	else {
		for (int i = 0; i < a.length(); i++) {
			if (a[i] < 'A' or (a[i] > 'Z' and a[i] < 'a') or a[i] > 'z') {
				cout << "¬ведены неверные символы";
				return 0;
			}
		}

		for (int i = 0; i < a.length(); i++) {
			if (a[i] >= 'A' and a[i] <= 'Z') {
				arr[int(a[i]) - 65] += 1;
			}
		}
		for (int i = 0; i < a.length(); i++) {
			if (a[i] <= 'Z') {
				a[i] += 32;
			}
		}
		for (int i = 0; i < a.length() - 1; i++) {
			int min = i;
			for (int j = i + 1; j < a.length(); j++) {
				if (int(a[j]) < int(a[min])) {
					min = j;
				}
			}
			if (min != i) {
				swap(a[i], a[min]);
			}
		}
		for (int i = 0; i < a.length(); i++) {
			if (arr[a[i] - 'a'] > 0) {
				arr[a[i] - 'a']--;
				a[i] -= 32;
			}
		}
		cout << a;
	}
}