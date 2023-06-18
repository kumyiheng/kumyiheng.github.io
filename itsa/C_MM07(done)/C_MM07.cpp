#include <iostream>

using namespace std;

int main() {
    int a = 0;
    while (cin >> a) {
        int b = a * a;
        int c = a * a * a;
        std:cout << a << " " << b << " " << c << std::endl;
    }
    return 0;
}