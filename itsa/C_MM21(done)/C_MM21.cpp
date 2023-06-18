#include <iostream>

using namespace std;

int main() {
    int a = 0;

    while (cin >> a) {
        long long int ans = 1;

        for (int i = 1; i <= a; i++) {
            ans = ans * i;
        }

        cout << ans << endl;
    }

    return 0;
}
