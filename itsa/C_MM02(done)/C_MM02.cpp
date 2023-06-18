#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    float a = static_cast<float>(num1);
    float b = static_cast<float>(num2);
    float c = a * 0.5f * b;
    cout << fixed;
    cout << setprecision(1);
    cout << c << endl;

    return 0;
}