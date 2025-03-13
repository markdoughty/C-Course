#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(int argc, char **argv){

    //---------- Problem 1 ----------
    //---------- Create a dynamic array
    int size;
    printf("What size of dynamic array shall we create...?\n");
    scanf("%d", &size);

    int *dArray = (int *)calloc(size, sizeof(int));

    printf("Enter the values to put into the dynamic array...\n");
    for(int i=0;i<size;i++){
        scanf("%d", &dArray[i]);
    }

    printf("Dynamic array elements:\n");
    for(int i=0;i<size;i++){
        printf("%d ", dArray[i]);
    }
    printf("\n");

    size = size + 2;
    int *dArray2 = (int *)realloc(dArray, sizeof(int)*size);

    printf("Enter the values to put into the dynamic array...\n");
    for(int i=0;i<size-2;i++){
        scanf("%d", &dArray2[i]);
    }

    printf("Dynamic array elements:\n");
    for(int i=0;i<size;i++){
        printf("%d ", dArray2[i]);
    }

    //free(dArray);
    free(dArray2);

    return 0;
}