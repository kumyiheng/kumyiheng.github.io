#include <iostream>

using namespace std;

int main() {
    int year;
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << "Bissextile Year" << endl;
            else
                cout << "Common Year" << endl;
        } else {
            cout << "Bissextile Year" << endl;
        }
    } else {
        cout << "Common Year" << endl;
    }

    return 0;
}
