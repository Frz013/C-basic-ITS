#include <stdio.h>

int pola(int n);

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d",pola(n));
    return 0;
}

int pola(int n){
    if(n<=1) return 1;

    return pola(n-1) + n*n;
}

//1, 5, 14, 30
// 4, 9, 16
// 5,7
// 2

// 1, 1+2.2, 5+3.3, 14+4.4
