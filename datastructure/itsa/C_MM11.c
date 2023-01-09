#include<stdio.h>

int main(){
    int a = 0;
    int NT10 = 0,NT5 = 0;
    scanf("%d",&a);
    while(a >= 10){
        a -= 10;
        NT10 += 1;
    }
    while(a >= 5){
        a -= 5;
        NT5 += 1;
    }
    printf("NT10=%d\n",NT10);
    printf("NT5=%d\n",NT5);
    printf("NT1=%d\n",a);
    return 0;
}
