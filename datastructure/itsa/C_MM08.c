#include<stdio.h>

int main(){
    int a = 0, b = 0;
    while(scanf("%d %d",&a,&b) != EOF){
        int c =  a + b;
        printf("%d\n",(c * c));
    }
    return 0;
}
