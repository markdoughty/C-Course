#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	/*-----------------------------
	---------- Problem 1 ----------
	-----------------------------*/
    int value = 0;
    printf("Enter a character - it can be either uc, lc, a number or whitespace:\n");

    value = getchar();

    if(value>=48 && value<=57){
        printf("%d: A number\n", value);
    }
    
    if(value>=65 && value <=90){
        printf("%d: An uppercase letter\n", value);
    }

    if(value>=97 && value <=122){
        printf("%d: A lowercase letter\n", value);
    }

    if(value==32){
        printf("%d: A space\n", value);
    }

	/*------------------------------
	---------- Problem 2 -----------
	------------------------------*/
    int value = 5;
    int multiplier = 22;
    int result = 0;
    int count = 0;
    //5 * 3
    //(value << 2) is multiply by 2 (2^2)
    //(value << 1) is multiply by 2 (2^1)
    //(value << 0) is multiply by 1 (2^0)
    //x << k == x multiplied by 2 to the power of k
    //x >> k == x divided by 2 to the power of k

    while(multiplier){
        //Code goes here
    }
    
    printf("%d", result);

    /*------------------------------
	---------- Problem 3 -----------
	------------------------------*/
    //Algorithm:
    //1. Take the modulus of the given number with 2.
    //2. Store the remainder as a binary digit in an array.
    //3. Update the number by dividing it by 2.
    //4. Repeat while the number is greater then zero.
    //Don't forget! The binary number will be reversed in the array...

    //Array for binary number result - can accomodate upto 10 digits.
    int binaryResult[10];
    int decimalToConvert = 18;

    // Counter for binary array 
    int i = 0; 
    while (decimalToConvert > 0) { 
  
        // Storing remainder in binary array 
        //Code goes here
    } 

    // Printing binary array in reverse order 
    //Code goes here

    return 0;
}
