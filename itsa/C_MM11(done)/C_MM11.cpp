#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int NT10 = 0, NT5 = 0;

    cin >> a;

    while (a >= 10) {
        a -= 10;
        NT10 += 1;
    }

    while (a >= 5) {
        a -= 5;
        NT5 += 1;
    }

    cout << "NT10=" << NT10 << endl;
    cout << "NT5=" << NT5 << endl;
    cout << "NT1=" << a << endl;

    return 0;
}