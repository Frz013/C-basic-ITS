#include <stdio.h>
#include <stdlib.h>
void check(int *a, int n);

int main(void){
    int n;
    scanf("%d", &n);
    int a[n];
    int input;

    for(int i=0; i < n; i++){
        scanf("%d", &input);
        a[i] = input;
    }

    check(a, n);
}

void check(int *a, int n){
    int max = 0;
    int min = INT_MAX;

    for(int i = 0; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }
        if(min > a[i]){
            min = a[i];
        }
    }

    printf("MAX: %d\n", max);
    printf("MIN: %d\n", min);
}


