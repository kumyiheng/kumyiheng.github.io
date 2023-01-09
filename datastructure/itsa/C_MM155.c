#include <stdio.h>

int main(){
    int a = 0, key = 0;
    scanf("%d", &a);

    if (a == 0 || a == 1){
        key = 1;
    }
    for (int i = 2; i <= a / 2; ++i) {
        if (a % i == 0) {
            key = 1;
            break;
        }
    }
    if (key == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}
