#include <stdio.h>
#include <string.h>

void reverse(char *input, char *output){
    int i = strlen(input) - 1;
    int output_idx = 0;

    while(i >= 0){
        if(i > 0 && ((((input[i] == 'g' || input[i] == 'G') && (input[i-1] == 'n' || input[i-1] == 'N')) ||
            ((input[i] == 'y' || input[i] == 'Y') && (input[i-1] == 'n' || input[i-1] == 'N'))||
            ((input[i] == 'b' || input[i] == 'B') && (input[i-1] == 'm' || input[i-1] == 'M'))||
            ((input[i] == 'p' || input[i] == 'P') && (input[i-1] == 'm' || input[i-1] == 'M'))))){
            output[output_idx++] = input[i-1];
            output[output_idx++] = input[i];

            i -= 2;
        } else{
            output[output_idx++] = input[i];
            i--;
        }
    }
    output[output_idx] = '\0';
}
int main(void){

    char input[255];
    char output[255];

    fgets(input, sizeof(input), stdin);

    reverse(input, output);

    for(int i = 0; output[i] != '\0'; i++){
        printf("%c", output[i]);
    }

}
