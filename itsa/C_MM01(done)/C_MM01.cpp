#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    double area = 0;

    cin >> a >> b >> c;

    area = 0.5 * (a + b) * c;

    cout << fixed;
    cout << setprecision(1);
    cout << "Trapezoid area:" << area << endl;

    return 0;
}