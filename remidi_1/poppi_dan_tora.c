#include <stdio.h>

int main(void){
    int N,A,B,C;
    int x,y;

    scanf("%d %d %d %d",&N, &A, &B, &C);

    if((N<1 && N>1000)||(A<1 && A>1000)||(B<1 && B>1000)||(C<1 && C>1000)){
        return 0;
    } else{
        x = (N%A) - B;
        y = (N/C) - B;



        if(x>0 && y>0){
            printf("Poppi di Hutan");
        } else if(x<0 && y>0){
            printf("Poppi di Sungai");
        } else if(x<0 && y<0){
            printf("Poppi di Tambang");
        } else if(x>0 && y<0){
            printf("Poppi di Kebun Sawit");
        } else if(x==0 && y==0){
            printf("bersama Masterpon");
        } else if(x==0 || y==0){
            printf("Perbatasan");
        }
        return 0;
    }


}
