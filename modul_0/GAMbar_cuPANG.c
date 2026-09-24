#include <stdio.h>

int main(void){
    int m,b;
    int beda = 0;
    int sama = 0;
    scanf("%d %d", &m, &b);

    if(m<b){
        beda = m;
        sama = (b-m)/2;
    } else {
        beda = b;
        sama = (m-b)/2;
    }
    printf("%d %d", beda, sama);
}
