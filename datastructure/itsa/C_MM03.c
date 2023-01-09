#include<stdio.h>

int main(){
    int a = 0, b = 0;

    while(scanf("%d %d",&a,&b) != EOF){
        int c = 0;
        c = a + b;
        printf("%d\n", c);
    }
}
