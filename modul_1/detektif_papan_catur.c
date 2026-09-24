#include <stdio.h>

int main(void){
    char x1, x2;
    int y1, y2;
    int selisih_x;
    int selisih_y;

    scanf(" %c%d %c%d", &x1, &y1, &x2, &y2);

    if(x1 == x2 && y1 == y2){
        printf("TIDAK ADA");
        return 0;
    }

    selisih_x = (x2 >= x1) ? (x2-x1) : (x1-x2);
    selisih_y = (y2 >= y1) ? (y2-y1) : (y1-y2);

    int is_print = 0;

    if((selisih_x == 1 && selisih_y == 2) || (selisih_x == 2 && selisih_y == 1)){
        if(is_print) printf(" ");
        printf("KUDA");
        is_print = 1;
    }

    if(x1 == x2 || y1 == y2){
        if(is_print) printf(" ");
        printf("BENTENG");
        is_print = 1;
    }

    if(selisih_x == selisih_y){
        if(is_print) printf(" ");
        printf("GAJAH");
        is_print = 1;
    }

    if((x1 == x2 || y1 == y2) || (selisih_x == selisih_y)){
        if(is_print) printf(" ");
        printf("RATU");
        is_print = 1;
    }

    if(!is_print) printf("TIDAK ADA");

    return 0;
}
