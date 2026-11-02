#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>


void random_angka(int *arr,int n){
    int random;

    for(int i = 0; i < n; i++){
        random = rand() % 10;
        arr[i] = random;
    }

}

void cetak(int *arr, int n){

    for(int i = 0; i < n; i++){
        system("cls");
        printf("%d", arr[i]);
        Sleep(1000);
    }
    printf("\n");
}

void game(int *arr, int n){
    int input;
    int mati = 0;
    int skor = 0;

    fflush(stdin);
    

    for(int i = 0; i < n; i++){
        input = getch() - '0';

        if(input == arr[i] && mati == 0){
            skor++;
            printf("*");
        } else{
            mati = 1;
            printf("\nKalah dengan skor: %d", skor);
            break;
        }
    }

    if(!mati){
        printf("\nMenang dengan skor: %d", skor);
    }
}

int main(void){
    srand(time(NULL));
    int a[100] = {0};
    int n;
    scanf("%d", &n);

    random_angka(a, n);
    cetak(a, n);
    game(a, n);

}