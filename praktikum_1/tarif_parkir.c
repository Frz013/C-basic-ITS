#include <stdio.h>
#include <math.h>

int main(void){
    int M,V;
    int jam;
    int tarif;

    scanf("%d %d", &M, &V);

    jam = ceil(M/60.0);
    if(jam > 1){
        tarif = 3000 + 2000*(jam-1);
    } else{
        tarif = 3000;
    }

    if(jam > 11){
        tarif = 25000;
    }
    if(V > 0){
        tarif = tarif + 1000;
    }

    printf("%d", tarif);
}
