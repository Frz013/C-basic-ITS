#include <stdio.h>

int permutasi(int n){

    if(n == 1){
        return 1;
    }

    n = n + permutasi(n-1);
    printf("%d", n);
    return n;
}

int main(void){
    int n;
    scanf("%d", &n);
    permutasi(n);
}

//dan membuat willbert kuhf
//permutasi
//kombinasi
