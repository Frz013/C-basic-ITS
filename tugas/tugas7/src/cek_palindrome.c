#include <stdio.h>
#include <string.h>

void palindrome(char *input){
    int input_len = strlen(input);
    int idx_depan = 0;
    int is_palindrome = 1;
    
    if(input_len > 0 && input[input_len-1] == '\n'){
        input[input_len-1] = '\0';
        input_len--;
    }

    int idx_belakang = input_len - 1;
    
    while(idx_depan < idx_belakang){
        if(input[idx_depan] != input[idx_belakang]){
            is_palindrome = 0;
            break;
        }
        idx_depan++;
        idx_belakang--;
    }

    if(is_palindrome){
        printf("kata ini palindrome\n");
    } else{
        printf("kata ini bukan palindrome\n");
    }
}
int main(void){

    char input[100];
    fgets(input, sizeof(input), stdin);

    palindrome(input);

}