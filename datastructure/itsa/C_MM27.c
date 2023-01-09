#include<stdio.h>

int main(){
    int a = 0, b = 0;
    while(scanf("%d %d",&a, &b) != EOF){
        int ans = 0;
        if(a < b){
            for(int i = a; i < b + 1; i++){
                ans += i;
            }
        }
        else{
            for(int i = b; i < a + 1; i++){
                ans += i;
            }
        }
        printf("%d\n",ans);
    }
}
