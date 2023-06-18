#include <iostream>

using namespace std;

int main() {
    int x = 0, y = 0;
    while (cin >> x >> y) {
        if (x == 0 && y == 0) {
            cout << "Origin" << endl;
        } else if (x > 0 && y > 0) {
            cout << "1st Quadrant" << endl;
        } else if (x < 0 && y > 0) {
            cout << "2nd Quadrant" << endl;
        } else if (x < 0 && y < 0) {
            cout << "3rd Quadrant" << endl;
        } else if (x > 0 && y < 0) {
            cout << "4th Quadrant" << endl;
        } else if (x == 0) {
            cout << "y-axis" << endl;
        } else if (y == 0) {
            cout << "x-axis" << endl;
        }
    }
    return 0;
}