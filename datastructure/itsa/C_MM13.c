#include<stdio.h>

int main(){
    int a = 0, b = 0, c = 0, d = 0;
    float t1 = 0;
    while(scanf("%d %d\n%d %d",&a,&b,&c,&d) != EOF){
        int ans = 0, hour = 0, min = 0;
        hour = c - a;
        min  = d - b;
        if(hour > 4){
            if(d < b && d != 0){
                min += 60;
                hour -= 1;
            }
            hour -= 4;
            ans += 4 * 30;
            ans += 4 * 40;
            while(hour >=1){
                min += 60;
                hour -= 1;
            }
            while(min >= 30){
                ans += 60;
                min -= 30;
            }
        }
        else if(4 >= hour && hour >2){
            if(d < b && d != 0){
                min += 60;
                hour -= 1;
            }
            hour -= 2;
            ans += 4 * 30;
            while(hour >= 1){
                min += 60;
                hour -= 1;
            }
             while(min >= 30){
                ans += 40;
                min -= 30;
            }
        }
        else{
            if(d < b && d != 0){
                min += 60;
                hour -= 1;
            }
            while(hour >= 1){
                min += 60;
                hour -= 1;
            }
            while(min >= 30){
                ans += 30;
                min -= 30;
            }
        }
        printf("%d\n",ans);
    }
}
