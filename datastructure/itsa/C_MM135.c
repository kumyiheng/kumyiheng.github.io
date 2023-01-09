#include<stdio.h>

int main(){
    int a = 0, b = 0, c = 0;
    scanf("%d", &a);
    if( a <= 1500){
        printf("70\n");
    }
    else{
        a -= 1500;
        b = 70;
        c = a%500;
        while(a >= 500){
            a -= 500;
            b += 5;
        }
        if(c != 0){
            b += 5;
        }
        printf("%d\n",b);
    }
}
