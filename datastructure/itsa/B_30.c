#include<stdio.h>

int main(){
    int x = 0, y = 0;
    while(scanf("%d %d",&x,&y) != EOF){
        if((x == 1 && y >= 21) || (x == 2 && y <= 18)){
            printf("Aquarius\n");
        }
        else if((x == 2 && y >= 19) || (x == 3 && y <= 20)){
            printf("Pisces\n");
        }
        else if((x == 3 && y >= 21) || (x == 4 && y <= 20)){
            printf("Aries\n");
        }
        else if((x == 4 && y >= 21) || (x == 5 && y <= 21)){
            printf("Gemini\n");
        }
        else if((x == 6 && y >= 22) || (x == 7 && y <= 22)){
            printf("Cancer\n");
        }
        else if((x == 7 && y >= 23) || (x == 8 && y <= 23)){
            printf("Leo\n");
        }
        else if((x == 8 && y >= 24) || (x == 9 && y <= 23)){
            printf("Virgo\n");
        }
        else if((x == 9 && y >= 24) || (x == 10 && y <= 23)){
            printf("Libra\n");
        }
        else if((x == 10 && y >= 24) || (x == 11 && y <= 22)){
            printf("Scorpio\n");
        }
        else if((x == 11 && y >= 23) || (x == 12 && y <= 21)){
            printf("Sagittarius\n");
        }
        else if((x == 12 && y >= 22) || (x == 1 && y <= 20)){
            printf("Capricorn\n");
        }

    }
}
