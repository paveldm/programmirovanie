#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int x, y, res, k;

    cout << "���������� k-�� ����� ���������" << "\n";
    cout << "������� ����� ����� k" << "\n";
    if (!(cin >> k)) {
        cout << "������� �����";
        return 0;
    }

    cout << "������� ��� ������ ����� � ������������������" << "\n";
    if (!(cin >> x >> y)) {
        cout << "������� �����";
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
    cout << "����� k = " << res;
}