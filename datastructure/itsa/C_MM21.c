#include<stdio.h>

int main(){
    int a = 0;
    while(scanf("%d",&a) != EOF){
        long long int ans = 1;
        for(int i = 1; i < a+1; i++){
            ans = ans * i;
        }
        printf("%lld\n", ans);
    }
}
