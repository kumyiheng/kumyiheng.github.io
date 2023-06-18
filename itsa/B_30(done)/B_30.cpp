#include<iostream>

using namespace std;

int main(){
    int x = 0, y = 0;
    while(cin >> x >> y){
        if((x == 1 && y >= 21) || (x == 2 && y <= 18)){
            cout << "Aquarius" << endl;
        }
        else if((x == 2 && y >= 19) || (x == 3 && y <= 20)){
            cout << "Pisces" << endl;
        }
        else if((x == 3 && y >= 21) || (x == 4 && y <= 20)){
            cout << "Aries" << endl;
        }
        else if((x == 4 && y >= 21) || (x == 5 && y <= 21)){
            cout << "Gemini" << endl;
        }
        else if((x == 6 && y >= 22) || (x == 7 && y <= 22)){
            cout << "Cancer" << endl;
        }
        else if((x == 7 && y >= 23) || (x == 8 && y <= 23)){
            cout << "Leo" << endl;
        }
        else if((x == 8 && y >= 24) || (x == 9 && y <= 23)){
            cout << "Virgo" << endl;
        }
        else if((x == 9 && y >= 24) || (x == 10 && y <= 23)){
            cout << "Libra" << endl;
        }
        else if((x == 10 && y >= 24) || (x == 11 && y <= 22)){
            cout << "Scorpio" << endl;
        }
        else if((x == 11 && y >= 23) || (x == 12 && y <= 21)){
            cout << "Sagittarius" << endl;
        }
        else if((x == 12 && y >= 22) || (x == 1 && y <= 20)){
            cout << "Capricorn" << endl;
        }
    }
}