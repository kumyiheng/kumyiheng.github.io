#include<stdio.h>

int main(){
    int a = 0;
    while(scanf("%d",&a) != EOF){
        double b = (double) a;
        b = b * 1.6;
        printf("%.1f\n",b);
    }
    return 0;
}

