#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите два числа" << endl;
    if (cin >> a >> b) {
        if (b == 0) {
            cout << "На ноль делить нельзя";
        }
        else {
            cout << "Сумма " << a + b << " Разность " << a - b << " Произведение " << a * b << " Частное от деления " << a / b;
        }
    }
    else {
        cout << "Введена буква";
    }
    return 0;
 }