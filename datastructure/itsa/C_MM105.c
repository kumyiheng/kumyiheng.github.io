#include <stdio.h>

int main(){
    int a = 0, b = 0, ans = 0;
    scanf("%d %d",&a,&b);

    ans = a;

    for(int i = 0; i < b -1; i++){
        ans *= a;
    }
    printf("%d\n",ans);
}

