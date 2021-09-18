#include <iostream>
#include <math.h>

using namespace std;
int main() {
    double s, m, n, r;
    r = 0;
    if (cin >> s >> m >> n and s > 0 and m > 0 and n > 0) {
        while ((s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) <= m) {
            r = r + 0.05;
        }    
        cout << r * 100;
    }
    else {
        cout << "Неверный формат";
    }
    return 0;
 }

for (r = 0; r <= 1; r = r + 0.05) {
    if ((s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) >= m) {
        cout << r * 100;
        break;
    }
}