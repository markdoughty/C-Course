#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define arraySize 5

int main(int argc, char **argv){

    //---------- Problem 1 ----------
    //---------- Fill an aray
    int numbers[arraySize];
    printf("Enter 5 integers to go in your array...");

    //Put your code here...


    //---------- Problem 2 ----------
    //---------- Calculate average of the array values
    //
    //Use a loop to:
    //*Go to each element of the array
    //*Add them to a total
    //*determine the average from the total and the number of array elements

    float average;

    //Put your code here...


    //Output the average to one decimal place
    printf("The average of the array elements is: %.1f\n", average);

    //---------- Problem 3 ----------
    //---------- Determine the maximum and minimum values in the array

    int maximumValue;
    int minimumValue;
    int range;

    //Find the maximum value
    //Use a loop to:
    //*Set the maximumValue variable to the first element in the array.
    //*Compare the array value with the current maximumValue.
    //*If it is larger, then swap, if not, don't do anything.

    //Put your code here...

    //Find the minimum value

    //Put your code here...

    //find the range and output it along with the max and min values

    //Put your code here...

    printf("The max value is %d\n", maximumValue);
    printf("The min value is %d\n", minimumValue);
    printf("The range is %d\n", range);


    return 0;
}