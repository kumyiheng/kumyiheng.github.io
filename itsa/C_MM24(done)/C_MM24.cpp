#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a = 0, b = 0;

    while (cin >> b >> a) {
        double ans = 0;

        if (b > 120) {
            b -= 60;
            ans += static_cast<double>(a) * 60;
            b -= 60;
            ans += static_cast<double>(a) * 60 * 1.33;
            ans += static_cast<double>(a) * b * 1.66;
        } else if (b > 60 && b <= 120) {
            b -= 60;
            ans += static_cast<double>(a) * 60;
            ans += static_cast<double>(a) * b * 1.33;
        } else {
            ans += static_cast<double>(a) * b;
        }

        cout << fixed;
        cout << setprecision(1);
        cout << ans << endl;
    }

    return 0;
}
