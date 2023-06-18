#include <iostream>

using namespace std;

int main() {
    int a = 0;
    while (cin >> a) {
        if (3 <= a && a <= 5) {
            cout << "Spring" << endl;
        } else if (6 <= a && a <= 8) {
            cout << "Summer" << endl;
        } else if (9 <= a && a <= 11) {
            cout << "Autumn" << endl;
        } else {
            cout << "Winter" << endl;
        }
    }
    return 0;
}
