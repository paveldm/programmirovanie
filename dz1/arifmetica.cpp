#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "������� ��� �����" << endl;
    if (cin >> a >> b) {
        if (b == 0) {
            cout << "�� ���� ������ ������";
        }
        else {
            cout << "����� " << a + b << " �������� " << a - b << " ������������ " << a * b << " ������� �� ������� " << a / b;
        }
    }
    else {
        cout << "������� �����";
    }
    return 0;
 }