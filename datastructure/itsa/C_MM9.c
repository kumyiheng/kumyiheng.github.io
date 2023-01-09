#include<stdio.h>

int main(){
    long long int a = 0;
    while(scanf("%lld",&a) != EOF){
        long long int b = 1;
        if(a > 31){
            printf("Value of more than 31\n");
        }
        else{
            for(int i = 0; i < a; i++){
                b = b * 2;
            }
            printf("%lld\n",b);
        }
    }
    return 0;
}

