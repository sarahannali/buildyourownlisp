#include <stdio.h>
#include <stdlib.h>

// if using Windows, adding fake functions

#ifdef _WIN32
#include <string.h>

static char buffer[2048];

char* readline(char* prompt){
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer)+1);
    strcpy(cpy,buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
}

void add_history(char* unused) {}

// if using Mac and Linux, use built-in functions

#else
#include <editline/readline.h>
#include <editline/history.h>
#endif

int main(int argc, char** argv){
    puts("Lispy Version 0.0.0.0.1 :)");
    puts("Press Ctrl+C to Exit \n");

    while(1){
        char* input = readline("Sarah's Lisp> ");
        add_history(input);

        printf("You typed '%s'\n", input);
        free(input);
    }
    return 0;
}