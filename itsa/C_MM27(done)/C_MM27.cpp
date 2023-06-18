#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;
    while (cin >> a >> b) {
        int ans = 0;
        if (a < b) {
            for (int i = a; i <= b; i++) {
                ans += i;
            }
        } else {
            for (int i = b; i <= a; i++) {
                ans += i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
