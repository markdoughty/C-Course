#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define STR_MAX_LEN 20

//char (*name[10])[STR_MAX_LEN+1];
char name[10][STR_MAX_LEN+1];
int age=0;

void processInput(){
    //---------- Problem 1 ----------
    // Enter code here
    //printf("Enter a name and an age:\n");
    //scanf("%s %d", &name, &age);
    //scanf("%d", &age);

    //---------- Problem 2 ----------
    //---------- Add 'guards' to protect 'name' and 'age

    for(int i=0;i<10;i++){
        printf("Enter a name:\n");
        scanf("%s", &name[i] );

    }

}


int main(int argc, char **argv){
    //---------- Problem 1 ----------
    //---------- Complete  'processInput()' so that it prompts the input of 'name' and 'age'
    //---------- Call it here, and output the values of 'name' and 'age'
    // Enter code here
    processInput();
    //printf("%s : %d", name, age);
    for(int i=0; i<10; i++){
        printf("%s", name[i]);
    }

    //------------ Problem 2 ----------
    //------------ Check whether 'TRUE' or 'FALSE' is returned from processInput()

    //------------ Problem 3 ----------
    //------------ Loop the call to the processData() function

    return 0;
}