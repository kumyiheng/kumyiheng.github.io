#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a = 0;

    while (cin >> a) {
        double ans = 0;

        if (a >= 1500) {
            ans = a * 0.9 * 0.79;
        } else if (a > 800) {
            ans = a * 0.9 * 0.9;
        } else {
            ans = a * 0.9;
        }

        cout << fixed;
        cout << setprecision(1);
        cout << ans << endl;
    }

    return 0;
}