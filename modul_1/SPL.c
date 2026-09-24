#include <stdio.h>

int main(void){
    int a,b,c,p,q,r;
    float x,y;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &p, &q, &r);



    int sejajar = (a*q == b*p);
    int menyatu = (a*r == c*p);

    if(sejajar && menyatu){
        printf("BANYAK SOLUSI");
    } else if(sejajar && !menyatu){
        printf("TIDAK ADA SOLUSI");
    } else{

        float det = (float)(a*q - p*b);
        float detx = (float)(c*q - r*b);
        float dety = (float)(a*r - c*p);

        x = detx/det;
        y = dety/det;

        if (x == 0) x = 0;
        if (y == 0) y = 0;
        printf("SATU SOLUSI\n%.2f %.2f", x, y);
    }
}
