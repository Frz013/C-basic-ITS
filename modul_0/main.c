#include <stdio.h>

int hitung(a,b) {
    return a % b;
}

int main() {
    int a,b;

    printf("Masukan Jumlah Pizza: ");
    scanf("%d", &a);
    printf("Masukan Jumlah Teman: ");
    scanf("%d", &b);

    int teman = a/b;
    int ghifari = a%b;

    printf("Teman mendapat: ");
    printf("%d", teman);
    printf("\nGhifari mendapat: ");
    printf("%d", ghifari);
    return 0;
}
