#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int x, y, res, k;

    cout << "Нахождение k-го числа Фибоначчи" << "\n";
    cout << "Введите номер числа k" << "\n";
    if (!(cin >> k)) {
        cout << "Введена буква";
        return 0;
    }

    cout << "Введите два первых числа в последовательности" << "\n";
    if (!(cin >> x >> y)) {
        cout << "Введена буква";
        return 0;
    }

    if (k == 0) {
        cout << x;
    }
    if (k == 1) {
        cout << y;
    }
    for (int i = 2; i <= k; i++)
    {
        res = x + y;
        x = y;
        y = res;
    }
    cout << "Число k = " << res;
}