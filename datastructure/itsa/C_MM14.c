#include<stdio.h>

int main(){
    long long int a = 0;
    int days = 0, hours = 0, mins = 0;
    scanf("%lld",&a);
    while(a >= 86400){
        a -= 86400;
        days += 1;
    }
    while(a >= 3600){
        a -= 3600;
        hours += 1;
    }
    while(a >= 60){
        a -= 60;
        mins += 1;
    }
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",days,hours,mins,a);
}
