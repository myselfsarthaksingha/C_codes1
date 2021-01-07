// Swap two numbers without using third variable.

#include<stdio.h>
int main()
{
    int a=8;
    int b=5;

    printf("Initial value of a is %d\n",a);     // Before swapping.
    printf("Initial value of b is %d\n\n",b);   // Before swapping.

    a=a*b;  // If we use the formula or these three operations then we can swap two numbers without using third variable.
    b=a/b;
    a=a/b;

    printf("Latest value of a is %d\n",a);     // After swapping.
    printf("Latest value of b is %d\n\n",b);   // After swapping.

    return 0;
}

/*
In C programming each variables of 'int' datatypes takes 2 bytes of memory.
So to swap using third variable, we are wasting total 6 bytes of memory for those 3 variables.
So if we don't use third variable, then we can save 2 bytes (or 16 bits) of memory.

If we use the following operations then we can swap two numbers without using third variable:
'a=a*b;
b=a/b;
a=a/b;'

*/
