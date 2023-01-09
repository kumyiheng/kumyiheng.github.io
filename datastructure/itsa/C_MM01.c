#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0;
    double area = 0;

    scanf("%d %d %d",&a, &b, &c);

    area = 0.5 * ( a + b) * c;

    printf("Trapezoid area:%.1lf\n",area);
}
