#include <iostream>

using namespace std;

int main() {
    int a = 0;
    cin >> a;
    
    for (int i = 1; i <= a; i++) {
        cout << i << "*" << i << "=" << i * i << endl;
    }
    
    return 0;
}
