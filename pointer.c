#include <stdio.h>
#include <stdlib.h>

int add(int *a, int *b) {
    int result = *a + *b;
    return result;
}

int main(int argc, char **argv) {
    if(argc == 3) {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);

        int *pointer_a = &a;
        int *pointer_b = &b;

        printf("%d + %d = %d\n", *pointer_a, *pointer_b, add(pointer_a, pointer_b));
    }
    return 0;
}
