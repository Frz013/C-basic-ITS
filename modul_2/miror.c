#include <stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M];
    int temp;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf(" %d", &A[i][j]);
        }
    }

    for(int k=0; k<N; k++){
        for(int l=0; l < M/2; l++){
            temp = A[k][l];
            A[k][l] = A[k][M-1-l];
            A[k][M-1-l] = temp;
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
