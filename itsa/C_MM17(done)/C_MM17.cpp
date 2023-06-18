#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, hcf = 1;
    cin >> a >> b;
    
    for (int i = 1; i <= a || i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    
    cout << hcf << endl;
    
    return 0;
}