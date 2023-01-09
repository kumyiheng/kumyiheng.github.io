#include<stdio.h>
#include<math.h>

int main(){
    long long int num1 = 0, num2 = 0;
    long long int a = 0,  b = 0;
    scanf("%lld %lld",&num1, &num2);
    printf("%lld+%lld=%lld\n",num1,num2,(num1 + num2));
    printf("%lld*%lld=%lld\n",num1,num2,(num1 * num2));
    printf("%lld-%lld=%lld\n",num1,num2,(num1 - num2));
    a = num1 / num2;
    b = num1 % num2;
    if(b < 0){
        if(a < 0){
            a -= 1;
        }
        else{
            a += 1;
        }
        b = abs(b);
    }
    printf("%lld/%lld=%lld...%lld\n",num1,num2,a,b);
    return 0;
}
