#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(int argc, char **argv){

    //---------- Problem 1 ----------
    //---------- Create a dynamic array, reallocate, and output
    int size;
    printf("What size of dynamic array shall we create...?\n");
    //Enter code here (to get size and allocate memory using malloc)

   

    printf("Enter the values to put into the dynamic array...\n");
    //Enter code here to fill the memory

    printf("Dynamic array elements:\n");
    //Enter code here to output the memory contents

    size = size + 5;
    //Enter the code here to resize the memory using realloc

    printf("Enter the values to put into the new dynamic array...\n");
    //Enter the code here to fill

    printf("Dynamic array elements:\n");
    //Enter the code her to output the memory conents

    //---------- Problem 2 ----------
    //---------- Use 'calloc' instead of 'malloc' to see the difference in allocated memory
    //---------- Investigate how realloc works - does it initialise like calloc?

    return 0;
}