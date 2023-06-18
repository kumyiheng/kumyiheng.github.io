#include <iostream>

using namespace std;

int main() {
    int a;
    while (cin >> a) {
        int ans = 0;
        for (int i = 0; i < a; i++) {
            if (i % 2 == 0 && i % 3 == 0) {
                if (i % 12 == 0) {
                    continue;
                } else {
                    ans += i;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
