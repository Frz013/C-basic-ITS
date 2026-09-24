#include <stdio.h>

int main(void){
    int angka;
    int terbilang[10] = {'nol', 'satu', 'dua', 'tiga', 'empat', 'lima', 'enam', 'tujuh', 'delapan', 'sembilan'}

    if(angka <10 && >=0){
        printf("%d", terbilang[angka]);
    }else if(angka == 10){
        printf("sepuluh");
    } else if(angka == 11){
        print("sebelas")
    } else if(angka>11 && angka<20){
        printf("%s belas", terbilang[angka%10])
    } else if(angka>20 && angka<100){
        printf("%s puluh %s", terbilang[angka/10])
    }

}
