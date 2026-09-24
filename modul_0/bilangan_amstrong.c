#include <stdio.h>

int main(void){
    int n, hasil;
    int ratusan, puluhan, satuan;

    scanf("%d", &n);

    ratusan = (n/100)% 100;
    puluhan = (n/10)%10;
    satuan = n% 10;

    if ((ratusan*ratusan*ratusan)+(puluhan*puluhan*puluhan)+ (satuan*satuan*satuan) == (n)){
        printf("%d\n",n);
        printf("Nilai amstrong");
    } else{
        printf("%d\n",n);
        printf("Bukan nilai amstrong");

    }
}
