#include<stdio.h>

int main(){
    int a = 0;
    float t1 = 0;
    while(scanf("%d",&a) != EOF){
        t1 = a / 0.238;
        int t2 = t1;
        printf("%d\n",t2+1);
    }
}
