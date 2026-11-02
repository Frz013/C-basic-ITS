#include <stdio.h>

void faktor_prima(int n);
int main(void){
    int n;

    scanf("%d", &n);

    faktor_prima(n);

}

void faktor_prima(int n){

    while(n%2 == 0){
        printf("2 ");
        n /= 2;
    }

    for(int i = 3; i <= n; i += 2){
        while(n%i == 0){
            printf("%d ", i);
            n /= i;
        }
    }

    if(n > 2){
        printf("%d ", n);
    }
}

