#include <stdio.h>
#include <limits.h>

int find_min(int *b, int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(min >= b[i]){
            min = b[i];
        }
    }
    return min;
}

int find_max(int *b, int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max <= b[i]){
            max = b[i];
        }
    }
    return max;
}

int main(void){
    int a[] = {5, 4, 5, 7, -1};

    for(int i=0; i<5;i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("elemen terkecil: %d\n", find_min(a, 5));
    printf("elemen terbesar: %d\n", find_max(a, 5));
}
