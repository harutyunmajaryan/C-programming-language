#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc != 2){
        return -1;
    }

    int number = atoi(argv[1]);
    int *pointer = &number;
    printf("Variable contains %d and is located @%p\n", *pointer, pointer);


    return 0;
}
