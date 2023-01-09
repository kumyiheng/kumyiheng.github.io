#include<stdio.h>

int main(){
    int a = 0;
    while(scanf("%d",&a) != EOF){
        double ans = 0;
        if(a >= 1500){
            ans = a * 0.9 * 0.79;
        }

        else if(a > 800){
            ans = a * 0.9 * 0.9;
        }
        else{
            ans = a * 0.9;
        }
        printf("%.1lf\n",ans);
    }
}
