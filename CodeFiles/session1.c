#include <stdio.h>
#include <stdlib.h>

//Use a preprocessor define for a 'function'
#define add(x, y) (x+y)


int main(int argc, char **argv)
{
	printf("%d", add(4, 5));
	return 0;
}