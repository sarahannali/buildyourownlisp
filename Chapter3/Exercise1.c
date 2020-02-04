#include <stdio.h>

int main(int argc, char** argv){
    int c;
    printf("How many times would you like the sentence to repeat? (1-9) :");
    c = getchar();
    int x = c - '0';
    int i;
    for(i = 0; i < x; i++){
        puts("For Loop: Hello, World!");
    }
    while (x > 0){
        puts("While Loop: Hello World!");
        x = x - 1;
    }
    return 0;
}