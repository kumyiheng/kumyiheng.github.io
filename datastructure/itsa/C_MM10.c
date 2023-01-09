#include<stdio.h>

int main(){
    float a = 0;
    while(scanf("%f",&a) != EOF){
        float b = 0;
        b = a * 9 / 5 +32;
        printf("%.1f\n",b);
    }
    return 0;
}
