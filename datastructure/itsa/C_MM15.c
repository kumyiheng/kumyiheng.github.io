#include<stdio.h>

int main(){
    long long int a = 0, b = 0;
    while(scanf("%lld %lld",&a, &b) != EOF){
        long long int c = 0;
        if(0 <= a && a <= 100){
            if(0 <= b && b <= 100){
                printf("inside\n");
            }
            else{
            printf("outside\n");
            }
        }
        else{
            printf("outside\n");
        }
    }
}
