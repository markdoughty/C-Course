#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "shapes.h"



int main(int argc, char **argv){
    //---------- Problem 1 ------------
    //---------- Create a 'Point' struct variable, allocate the variables in the struct, and output them
    Point p;
    p.x = 3.142;
    p.y = 4.567;

    printf("x: %.2f  y: %.2f\n", p.x, p.y);

    //---------- Problem 2 ----------
    //---------- Create a new struct called 'Triangle' which contains three 'Point's
    Triangle t1;
    t1.p1.x = 1;
    t1.p1.y = 1;
    t1.p2.x = 4;
    t1.p2.y = 4;
    t1.p3.x = 5;
    t1.p3.y = 3;

    printf("Area of the triangle is: %.3f", triArea(t1));

    return 0;
}