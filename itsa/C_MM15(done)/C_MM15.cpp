#include <iostream>

using namespace std;

int main() {
    long long int a = 0, b = 0;

    while (cin >> a >> b) {
        if (0 <= a && a <= 100) {
            if (0 <= b && b <= 100) {
                cout << "inside" << endl;
            } else {
                cout << "outside" << endl;
            }
        } else {
            cout << "outside" << endl;
        }
    }
}