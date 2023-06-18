#include <iostream>

using namespace std;

int main() {
    int s = 0, k = 0, m = 0, d = 0;
    while (cin >> s >> k >> m >> d) {
        int ans = 0;
        int temp = 0;
        ans += s;
        if (d <= m) {
            ans += d * k;
        } else {
            temp = d - m;
            ans += m * k;
            ans += temp * (k + 5);
        }
        cout << ans << endl;
    }
    return 0;
}
