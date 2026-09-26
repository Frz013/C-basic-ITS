#include <stdio.h>

int main(void){
    int F1,F2;
    char T1, T2;
    int dmg1 ,dmg2;

    scanf("%c %d %c %d", &T1, &F1, &T2, &F2);

    if(T1 == 'L'){
        dmg1 = 100;
    } else if(T1 == 'M'){
        dmg1 = 250;
    } else if(T1 == 'H'){
        dmg1 = 450;
    } else{
        return 0;
    }

    if(T2 == 'L'){
        dmg2 = 100;
    } else if(T2 == 'M'){
        dmg2 = 250;
    } else if(T2 == 'H'){
        dmg2 = 450;
    } else {
        return 0;
    }


    if((F1<1 && F1> 30)||(F2<1 && F2>30)){
        return 0;
    }

    if(F1<F2){
        if(F2-F1 >= 5) dmg1 = dmg1*1.5;
        printf("PLAYER 1 %d", dmg1);
    } else if(F1>F2){
        if(F1-F2 >= 5) dmg2 = dmg2*1.5;
        printf("PLAYER 2 %d", dmg2);
    } else{
        if(dmg1>dmg2){
            printf("PLAYER 1 %d", dmg1);
        } else if(dmg2>dmg1){
            printf("PLAYER 2 %d", dmg2);
        } else{
            printf("TRADE HIT %d", dmg1);
        }
    }
}
