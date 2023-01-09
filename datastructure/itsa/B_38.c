#include<stdio.h>

int main(){
    int a = 0;
    double summer = 0, nonsummer = 0;
    scanf("%d",&a);
    if(a < 120 ){
        summer = 2.1 * a;
        nonsummer = 2.1 * a;
    }
    else if(121 <= a && a <= 330){
        summer = 2.1 * 120;
        nonsummer = 2.1 * 120;
        a -= 120;
        summer += 3.02 * a;
        nonsummer += 2.68 * a;
    }
    else if(331 <= a && a <= 500){
        summer = 2.1 * 120;
        nonsummer = 2.1 * 120;
        a -= 120;
        summer += 3.02 * 210;
        nonsummer += 2.68 * 210;
        a -= 210;
        summer += 4.39 * a;
        nonsummer += 3.61 * a;
    }
    else if(501 <= a && a <= 700){
        summer = 2.1 * 120;
        nonsummer = 2.1 * 120;
        a -= 120;
        summer += 3.02 * 210;
        nonsummer += 2.68 * 210;
        a -= 210;
        summer += 4.39 * 170;
        nonsummer += 3.61 * 170;
        a -= 170;
        summer += 4.97 * a;
        nonsummer += 4.01 * a;
    }
    else{
        summer = 2.1 * 120;
        nonsummer = 2.1 * 120;
        a -= 120;
        summer += 3.02 * 210;
        nonsummer += 2.68 * 210;
        a -= 210;
        summer += 4.39 * 170;
        nonsummer += 3.61 * 170;
        a -= 170;
        summer += 4.97 * 200;
        nonsummer += 4.01 * 200;
        a -= 200;
        summer += 5.63 * a;
        nonsummer += 4.5 * a;
    }
    printf("Summer months:%.2lf\n",summer);
    printf("Non-Summer months:%.2lf\n",nonsummer);
}
