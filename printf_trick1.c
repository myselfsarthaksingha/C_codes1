/* A 'printf()' function trick. */
/* Printing without semicolon (i.e. ';') using preprocessor. */

#include<stdio.h>
#define x printf("Hello World\n")

int main()
{
    x;
}
