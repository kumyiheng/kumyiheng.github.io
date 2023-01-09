#include<stdio.h>

int main(){
    int a = 0, b = 0;
    while(scanf("%d %d",&b, &a) != EOF){
        double ans = 0;
        if(b > 120){
            b -= 60;
            ans += (double) a * 60;
            b -= 60;
            ans += (double) a * 60 * 1.33;
            ans += (double) a * b * 1.66;
        }
        else if(b > 60 && b <= 120){
            b -= 60;
            ans += (double) a * 60;
            ans += (double) a * b * 1.33;
        }
        else{
            ans += (double) a * b;
        }
        printf("%.1lf\n",ans);
    }
}
