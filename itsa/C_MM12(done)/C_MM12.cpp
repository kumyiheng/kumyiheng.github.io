#include <iostream>

using namespace std;

int main() {
    int a = 0;
    float t1 = 0;

    while (cin >> a) {
        t1 = a / 0.238;
        int t2 = static_cast<int>(t1);
        cout << t2 + 1 << endl;
    }

    return 0;
}
