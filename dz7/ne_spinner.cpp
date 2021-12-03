#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n, m, x = 0, y = 0;
	cout << "Введите длину и ширину листа" << "\n";
	if (!(cin >> n >> m)) {
		cout << "Введена буква";
		return 0;
	}
	for (int x1 = 0; x1 < n; x1++) {
		for (int x2 = x1; x2 < n; x2++) {
			x++;
		}
	}
	for (int y1 = 0; y1 < m; y1++) {
		for (int y2 = y1; y2 < m; y2++) {
			y++;
		}
	}
	cout << "Количество прямоугольников, которые можно вырезать из данного листа бумаги: " << x * y;
}