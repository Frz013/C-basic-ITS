#include <stdio.h>

int main(void){
    int M,N,T;
    int posisi = M+1;
    int mobil_lewat;
    int sisa_mobil;

    scanf("%d %d %d", &M, &N, &T);
    int total_mobil = M+1+N;

    if(M<0 && M>1000){
        return 0;
    } else if(N<0 && N>1000){
        return 0;
    } else if(T<1 && T>1000){
        return 0;
    }

    if(T<=20){
        mobil_lewat = 0;
    } else if(T>20){
        mobil_lewat = ((T-(20*(T/60+1)))/4)*(T/60);
        sisa_mobil = total_mobil - mobil_lewat;
    }

    if(mobil_lewat - posisi < 0){
        printf("YES %d", sisa_mobil);
    } else if(mobil_lewat - posisi >= 0){
        printf("NO %d", sisa_mobil);
    }



}
