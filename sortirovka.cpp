#include <iostream>
using namespace std;

int main() {
	const int size = 10; // ������ �������
	int a[size]{ 3, 6, 4, 7, 9, 5, 2, 8, 1, 0 };
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < size - 1; i++) {
		int min = i; // ������ ������������ ��������
		for (int j = i + 1; j < size; j++) {
			if (a[j] < a[min]) {
				min = j; // ���� ����������� ������� � ������� ���������, ��� � i
			}
		}
		if (min != i) {
			swap(a[i], a[min]); // ������ ������� i-�� ������� ������� � ��������� min
		}
	}
	for (int i = 0; i < size; i++) { // ����� ���������������� �������
		cout << a[i] << " ";
	}
	return 0;
}