#include<stdio.h>

int main(){
    int a = 0;

    while(scanf("%d", &a) != EOF){
        int ans = 0;
        for(int i = 0; i < a; i++){
            if((i%2) == 0 && (i%3) == 0){
                if((i%12) == 0){
                    continue;
                }
                else{
                    ans += i;
                }
            }
        }
        printf("%d\n", ans);
    }
}
