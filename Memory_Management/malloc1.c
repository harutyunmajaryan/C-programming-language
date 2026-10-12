#include <stdio.h>
#include <stdlib.h>


int *array;


int main(int argc, char **argv){

    int size = argc - 1;
    array = malloc(size * sizeof(int));

    for(int i = 0; i < size; i++){

        array[i] = atoi(argv[i + 1]);
    }

    
    int temp;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size;j++)
        {
            if(array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < size;i++){
        printf("%d ",array[i]);

    }


    free(array);
    return 0;
}
