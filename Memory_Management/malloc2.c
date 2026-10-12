#include <stdio.h>                        //standard library
#include <stdlib.h>                       //library used for getting command-line argumnets like I/O


int **array;                              //declaration of 2D array

int main(int argc, char **argv){          //main functon which takes argc = number of arguments on command-line, argv is the pointer

    if(argc !=3 ){                        //number of arguments must be equal to 3
        return -1;
    }

    int row = atoi(argv[1]);              //int row = the first argument so if 3 5, then row = 3
    int column = atoi(argv[2]);           //int column = the second argument so if 3 5, then column = 5

    
    if(row <= 0 || column <= 0){
        printf("The number of rows or columns must be postiive integer");
        return -1;
    }

    array = malloc(row * (sizeof(int*)));       //memory allocation for rows only
    for(int i = 0; i <= row - 1; i++){
        array[i] = malloc(column * sizeof(int));   //for each row allocate memory in columns too
        if (array == NULL){
            return -1;
        }
    }

    int count = 0;                                //int count = 1; declaration
    for(int i = 0; i <= row - 1;i++){            //here starts our 2D array or grid from index 0
        for(int j = 0;j <= column - 1;j++){       //columns
            array[i][j] = count;                  //it will go one by one and assign 1 first then incremenet until the end
            printf("%d ", count);                 //ofc prints the positive inegers one by one
            count++;                              //increment
        }
        printf("\n");                              //print newline
    }


    //free the space in memory

    for (int i = 0; i < row; i++) { 
        free(array[i]);
    }
    free(array); 

    return 0;

}

    
