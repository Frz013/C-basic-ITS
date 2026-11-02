#include <stdio.h>
#define TRUE 1
#define FALSE 0
#include <math.h>

int main(void){
    int bilangan, pembagi;
    int prima;
    int hitung;
    int akar_bilangan = 1;
    long long total_prima = 0;
    long long digit1, digit2, digit3,digit5,digit7;
    digit1 = digit2 = digit3 = digit5 = digit7 = 0;
    digit2 = 1;
    bilangan = 3;


    for(bilangan = 3; bilangan <= 1000000; bilangan += 2){
        prima = TRUE;

        while(akar_bilangan * akar_bilangan <= bilangan){
            akar_bilangan++;
        }

        for(pembagi = 3; pembagi <= akar_bilangan; pembagi += 2){
            if(bilangan % pembagi == 0){
                prima = FALSE;
                break;

            }
        }
        if(prima){
            //printf("%d\n",bilangan);
            if(bilangan % 10 == 1){
                digit1 ++;
            } else if(bilangan % 10 == 3){
                digit3 ++;
            } else if(bilangan % 10 == 5){
                digit5 ++;
            } else if(bilangan % 10 ==7){
                digit7 ++;
            }
            //total_prima += bilangan;

        }

    }
    //printf("%lld", total_prima);
    printf("total digit 1: %lld\n", digit1);
    printf("total digit 2: %lld\n", digit2);
    printf("total digit 3: %lld\n", digit3);
    printf("total digit 5: %lld\n", digit5);
    printf("total digit 7: %lld\n", digit7);


}
