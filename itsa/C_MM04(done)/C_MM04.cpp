#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int num1 = 0, num2 = 0;
    long long int a = 0, b = 0;
    cin >> num1 >> num2;
    
    cout << num1 << "+" << num2 << "=" << (num1 + num2) << endl;
    cout << num1 << "*" << num2 << "=" << (num1 * num2) << endl;
    cout << num1 << "-" << num2 << "=" << (num1 - num2) << endl;
    
    a = num1 / num2;
    b = num1 % num2;
    if (b < 0) {
        if (a < 0) {
            a -= 1;
        }
        else {
            a += 1;
        }
        b = abs(b);
    }
    cout << num1 << "/" << num2 << "=" << a << "..." << b << endl;

    return 0;
}