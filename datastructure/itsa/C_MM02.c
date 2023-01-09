#include<stdio.h>

int main(){
    int num1 = 0, num2 = 0;
    scanf("%d %d",&num1, &num2);
    float a =(float) num1;
    float b =(float) num2;
    float c = a * (0.5) * b;
    printf("%.1f\n",c);

    return 0;
}
