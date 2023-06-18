#include <iostream>

using namespace std;

int main() {
    int a;
    while (cin >> a) {
        int ones = 0, tens = 0, hundreds = 0, temp = 0;
        hundreds = a / 100;
        tens = (a % 100) / 10;
        ones = a % 10;
        temp = (hundreds * hundreds * hundreds) + (tens * tens * tens) + (ones * ones * ones);
        if (temp == a) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
