#include <stdio.h>

int main(void){
    int n;
    long long hasil = 0;
    scanf("%d", &n);
    for(int i = 1; i<n+1;i++){
        if(i%3 == 0 || i%5 == 0){
            hasil += i;
        }
    }
    printf("%lld", hasil);
}
