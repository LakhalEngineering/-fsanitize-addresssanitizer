/*By using this command you can see memory :
clang -wall -g -fsanitize=adress main.c -o file */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUMLETTERS 26

int main(){

    char somechars[NUMLETTERS];
    for(int i = 0; i <  NUMLETTERS; i++){
        somechars[i] = 'a'+i;
    }

    int idx= 50;
    printf("An element : %c\n", somechars[idx]);

    return 0;
}