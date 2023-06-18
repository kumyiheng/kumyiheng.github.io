#include <iostream>

using namespace std;

int main() {
    long long int a = 0;
    while (cin >> a) {
        long long int b = 1;
        if (a > 31) {
            cout << "Value of more than 31" << endl;
        }
        else {
            for (int i = 0; i < a; i++) {
                b = b * 2;
            }
            cout << b << endl;
        }
    }
    return 0;
}