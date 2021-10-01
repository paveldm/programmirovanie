#include <iostream>
using namespace std;

int main() {
	const int size = 10; // размер массива
	int a[size]{ 3, 6, 4, 7, 9, 5, 2, 8, 1, 0 };
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < size - 1; i++) {
		int min = i; // индекс минимального элемента
		for (int j = i + 1; j < size; j++) {
			if (a[j] < a[min]) {
				min = j; // если встречается элемент с меньшим значением, чем у i
			}
		}
		if (min != i) {
			swap(a[i], a[min]); // меняем местами i-ый элемент массива с элементом min
		}
	}
	for (int i = 0; i < size; i++) { // вывод отсортированного массива
		cout << a[i] << " ";
	}
	return 0;
}