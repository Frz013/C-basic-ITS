#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);

    int cur = 0;
    int best = 0;

    while(N > 0){
        if(N & 1){
            cur++;
            if(cur > best) best = cur;
        } else {
            cur = 0;
        }
        N >>= 1;
    }

    printf("%d\n", best);
    return 0;
}
