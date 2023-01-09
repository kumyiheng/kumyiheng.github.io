#include<stdio.h>

int main(){
    int a = 0;
    while(scanf("%d",&a) != EOF){
        if(3 <=a && a <= 5){
            printf("Spring\n");
        }
        else if(6 <=a && a <= 8){
            printf("Summer\n");
        }
        else if(9 <=a && a <= 11){
            printf("Autumn\n");
        }
        else{
            printf("Winter\n");
        }
    }
}
