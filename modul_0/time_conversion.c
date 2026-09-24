#include <stdio.h>

int main(void){
    int s,jam,menit,detik;
    scanf("%d", &s);
        jam = s/3600;
        menit = (s%3600)/60;
        detik = s - (jam*3600) - (menit*60);
    printf("%d jam %d menit %d detik", jam, menit, detik);
}
