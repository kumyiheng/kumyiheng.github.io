
#include <stdio.h>

int main()
{
    int a = 0, b = 0, hcf = 1;
    scanf("%d %d",&a,&b);
    for(int i = 1; i <= a || i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            hcf = i;
    }
    
    printf("%d\n", hcf);
    
    return 0;
}