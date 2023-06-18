#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0, ans = 0;
    cin >> a >> b;

    ans = a;

    for (int i = 0; i < b - 1; i++) {
        ans *= a;
    }

    cout << ans << endl;

    return 0;
}