#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(0, "");
    string a, b, line;
    ofstream w("1.txt");
    getline(cin, a, 'q');
    w << a;
    ifstream r("1.txt");

    while (!r.eof()) {
        getline(r, line);
        a += line;
        if (!r.eof()) {
            a += "\n";
        }
    }

    r.close();
    cout << a;
}