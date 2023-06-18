#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a = 0;
    while (cin >> a) {
        float b = a * 9 / 5 + 32;
        cout << fixed;
        cout << setprecision(1);
        cout << b << endl;
    }
    return 0;
}
