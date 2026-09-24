
#include <stdio.h>
#include <math.h>

int main(void) {
    int x1, y1, x2, y2;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    float hasil = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("%.2f", hasil);

}
