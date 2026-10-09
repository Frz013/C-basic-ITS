#include <stdio.h>

int main(void){
    int A, B;
    if(scanf("%d %d", &A, &B) == 2){
        int xor = A ^ B;
        int hitung = 0;

        while(xor > 0){
            hitung += (xor & 1);
            xor >>= 1;
        }

        printf("%d", hitung);
    }
}
