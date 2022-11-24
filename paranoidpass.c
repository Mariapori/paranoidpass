#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        printf("Please enter password length!");
        return 0;
    }else if(argc > 2){
        printf("Too many arguments!");
        return 0;
    }
    char characters[54] = "ABCDEFGHJIKLMNOPQWRSabcdefghijklmnopqrstuv123498765#!";
    int passLenght = atoi(argv[1]);
    char generatedPass[passLenght];
    for(int i = 0; i < passLenght; i++){
        srand(time(NULL));
        int r = rand();   
        while((r = rand()) >= 54);
        generatedPass[i] = characters[r];
    }
    printf("Generated password: %s\n", generatedPass);
    return 1;
}
