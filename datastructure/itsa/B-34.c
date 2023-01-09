#include<stdio.h>

int main(){
    int a = 0, b = 0;
    double ans = 0;
    while(scanf("%d %d", &a, &b) != EOF){
        if(b == 1){
            ans = (a - 80) * 0.7;
        }
        else{
            ans = (a - 70) * 0.6;
        }
        printf("%.1lf\n",ans);
    }
}
