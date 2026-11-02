#include <stdio.h>
#include <stdlib.h>

void faktor_prima(int n);
void cetak_hasil(void);
void append_prima(int faktor);

int faktor_prima_len = 0;
int *arr_faktor_prima = NULL;


int main(void){
    int n;

    scanf("%d", &n);
    faktor_prima(n);
    cetak_hasil();
    free(arr_faktor_prima);

    return 0;
}

void faktor_prima(int n){
    if(n <= 1) return;

    while(n%2 == 0){
        append_prima(2);
        n /= 2;
    }

    for(int i = 3; i*i <= n; i += 2){
        while(n%i == 0){
            append_prima(i);
            n /= i;
        }
    }

    if(n > 2){
        append_prima(n);
    }
}

void append_prima(int faktor){
    faktor_prima_len++;
    arr_faktor_prima = (int*) realloc(arr_faktor_prima, faktor_prima_len * sizeof(int));
    arr_faktor_prima[faktor_prima_len - 1] = faktor;
}

void cetak_hasil(void){
    for(int i = 0; i<faktor_prima_len; i++){
        printf("%d ", arr_faktor_prima[i]);
    }
    printf("\n");
}
