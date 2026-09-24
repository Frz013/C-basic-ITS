#include <stdio.h>

int main(void){
    int t,n;
    long long hasil;
    scanf("%d %d", &t, &n);
    if(t == 1){
        hasil = (long long)n*n;
        printf("%lld", hasil);
    } else if(t == 2){
        hasil = (long long)n*(n+1);
        printf("%lld", hasil);
    } else if(t == 3){
        hasil =(((long long)n*(n+1)*(2*n+1))/6);
        printf("%lld", hasil);
    } else if(t == 4){
        long long s = (((long long)n*(n+1))/2);
        hasil = s*s;
        printf("%lld", hasil);
    } else{
        printf("MODE TIDAK VALID");
    }
}
