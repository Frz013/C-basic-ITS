#include <stdio.h>

int main(void){

    int N,M;
    int x,y;

    scanf("%d %d", &N, &M);
    if(N < 2 && N > 100) return 0;
    if(M < 2 && M > 100) return 0;

    char A[N][M];

    for(int i=0; i < N; i++){
        for(int j=0; j< M; j++){
            scanf(" %c", &A[i][j]);
        }
    }

    scanf("%d %d", &x, &y);
    if(x < 1 && x > N) return 0;
    if(y < 1 && y > M) return 0;

    x = x-1;
    y = y-1;

    int kx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int ky[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    int is_all_x = 1;
    for(int k =0; k <8; k++){
        int cek_x = x + kx[k];
        int cek_y = y + ky[k];


        if(cek_x >= 0 && cek_x < N && cek_y >= 0 && cek_y < M){
            if(A[cek_x][cek_y] != 'x'){
            is_all_x = 0;
            break;
            }
        }

    }

    if(is_all_x){
        printf("yes");
    } else{
        printf("no");
    }

}
