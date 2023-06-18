#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool isPrime = true;
    for (int c = 2; c <= n - 1; c++) {
        if (n % c == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
