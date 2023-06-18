#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a = 0, b = 0;
    double ans = 0;
    while(cin >> a >> b){
        if(b == 1){
            ans = (a - 80) * 0.7;
        }
        else{
            ans = (a - 70) * 0.6;
        }
        cout << fixed;
        cout << setprecision(1);
        cout << ans << endl;
    }
}