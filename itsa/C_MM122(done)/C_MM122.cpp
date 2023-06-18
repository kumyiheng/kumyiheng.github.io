#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    cin >> a;

    if (a <= 1500) {
        cout << "70" << endl;
    } else {
        a -= 1500;
        b = 70;
        c = a % 500;

        while (a >= 500) {
            a -= 500;
            b += 5;
        }

        if (c != 0) {
            b += 5;
        }

        cout << b << endl;
    }

    return 0;
}
