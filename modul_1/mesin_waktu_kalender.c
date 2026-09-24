#include <stdio.h>

int main(void){
    int H,B,T;

    scanf("%d %d %d", &H, &B, &T);

    if((B >= 1 && B <= 100) && (H >= 1 && H <= 100)&& (T >= 1 && H <= 10000)){
        if((B == 1 || B == 3 || B == 5 || B == 7 || B == 8 || B == 10 || B ==12) && (H >= 1 && H <= 31)){
            printf("VALID");
        } else if((B == 4 || B == 6 || B == 9 || B == 11) && (H >= 1 && H<= 30)){
            printf("VALID");
        } else if((B == 2 && (T%400 == 0 || (T%4 == 0 && T%100 != 0))) && (H >= 1 && H <= 29)){
            printf("VALID");
        } else if(B == 2 && (H >= 1 && H <= 28)){
            printf("VALID");
        } else{
            printf("TIDAK VALID");
        }
    } else{
        return 0;
    }
}
