#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    string ns = "";
    int sum = 0;
    int i = 0;
    int cnt = 0;
    int n = 0;
    cout << "����� 28 �� ������� \"����\"" << "\n";
    cout << "������� ����� �����" << "\n";
    cin >> ns;
    while (ns.length() >= i) {
        if ((int)ns[i] > 47 and (int)ns[i] < 58) {
            cnt++;
        }
        i++;
    }
    n = stoi(ns);

    if (cnt == ns.length()) {
        while (n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        cout << "����� ���� ����� " << ns << " �����: " << sum << endl;
    }
    else {
        cout << "������� �����";
    }
}