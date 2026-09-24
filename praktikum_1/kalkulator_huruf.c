#include <stdio.h>
#include <math.h>

int main(void){
    char n,m;
    char op;
    int hasil;
    scanf("%c %c %c", &n, &op, &m);

    if(m >= 'a' && m <= 'z'){
        m = m - 'a' + 1;
    } else{
        m = m - 'A' + 27;
    }

    if(n >= 'a' && n <= 'z'){
        n = n - 'a' + 1;
    } else{
        n = n - 'A' + 27;
    }



    switch(op){
        case '+':
            hasil = n + m;
            break;

        case '-':
            hasil = n - m;
            break;

        case '*':
            hasil = n * m;
            break;
        case '/':
            hasil = n / m;
            break;
        case '%':
            hasil = n % m;
            break;
    }

    hasil = hasil % 52;
    if(hasil <= 0) hasil = hasil + 52;

    if(hasil <= 26){
        printf("%c",'a' + hasil - 1);
    } else{
        printf("%c", 'A' + hasil - 27);
    }

}
