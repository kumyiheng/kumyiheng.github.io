#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a = 0;
    while (cin >> a) {
        double b = static_cast<double>(a);
        b = b * 1.6;
        cout << fixed;
        cout << setprecision(1);
        cout << b << endl;
    }
    return 0;
}
