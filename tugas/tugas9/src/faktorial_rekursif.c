#include <stdio.h>

int faktorial(int n);

int main(void){
    int n;
    scanf("%d", &n);
    int hasil = faktorial(n);

    printf("%d", hasil);
}

int faktorial(int n){
    if(n == 1) return 1;
    return n = n*faktorial(n-1);
}
