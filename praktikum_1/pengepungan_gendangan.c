#include <stdio.h>
#include <math.h>

int main(void){
    int a,b,R,m,c;
    long long d2;

    scanf("%d %d %d\n", &a, &b, &R);
    scanf(" %d %d", &m, &c);

    d2 = (m*a - b+c)*(m*a - b+c)/(m*m + 1);

    if(d2 < R){
        printf("We're cooked.");
    } else if(d2 == R){
        printf("Kegores dikit ga ngaruh.");
    } else if(d2 > R){
        printf("We're so back.");
    }
}

