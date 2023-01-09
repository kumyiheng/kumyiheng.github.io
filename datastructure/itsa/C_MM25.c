#include<stdio.h>

int main(){
    int a = 0;
    while(scanf("%d",&a) != EOF){
        int ans = 0;
        for(int i = 1; i < a+1; i++){
            if((i%3) == 0){
                ans += i;
            }
        }
        printf("%d\n", ans);
    }
}
