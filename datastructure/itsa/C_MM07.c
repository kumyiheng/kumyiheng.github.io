#include<stdio.h>

int main(){
    int a = 0;
    while(scanf("%d",&a) != EOF){
        int b = a * a;
        int c = a * a * a;
        printf("%d %d %d\n", a,b,c);
    }
    return 0;
}

