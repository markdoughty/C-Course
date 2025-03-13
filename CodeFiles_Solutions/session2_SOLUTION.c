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
    char character = value;

    //Can't use a 'switch' because of these logical comparisons
    if(value>=48 && value<=57){
        printf("%d: A number (%c)", value, character);
    }else if(value>=65 && value <=90){
        printf("%d: An uppercase letter (%c)\n", value, character);
    }else if(value>=97 && value <=122){
        printf("%d: A lowercase letter (%c)\n", value, character);
    }else if(value==32){
        printf("%d: A space\n", value);
    }else{
        printf("Character not recognised here.\n");
    }



	/*------------------------------
	---------- Problem 2 -----------
	------------------------------*/
    int p2Value = 5;
    int multiplier = 9;
    int result = 0;
    int count = 0;
    //5 * 3
    //(value << 2) is multiply by 4 (2^2)
    //(value << 1) is multiply by 2 (2^1)
    //(value << 0) is multiply by 1 (2^0)
    //x << k == x multiplied by 2 to the power of k
    //x >> k == x divided by 2 to the power of k

    //double p2Value
    printf("%d\n", p2Value<<1);

    //multiply p2Value by 8 (2^3)
    printf("%d\n", p2Value<<3);

    //multiply p2Value by 'multiplier' using bitshifts
    while(multiplier){
        if((multiplier % 2 == 1))
            result += (p2Value << count);

        count++;
        multiplier /= 2;
    }
    printf("%d\n", result);

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
    int decimalToConvert = 21;

    // counter for binary array 
    int i = 0; 
    while (decimalToConvert > 0) { 
  
        // storing remainder in binary array 
        binaryResult[i] = decimalToConvert % 2; 
        decimalToConvert /= 2; 
        i++; 
    } 

    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        printf("%d", binaryResult[j]);

    return 0;
}
