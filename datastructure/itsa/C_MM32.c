#include<stdio.h>

int main(){
    int a = 0;
    while(scanf("%d", &a) != EOF){
        int ones = 0, tens = 0, hundreds = 0, temp = 0;
        hundreds = a/100;
        tens = (a%100)/10;
        ones = a%10;
        temp = (hundreds * hundreds * hundreds) + (tens * tens * tens) + (ones * ones * ones);
        if(temp == a){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}
