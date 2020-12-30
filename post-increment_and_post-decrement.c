/* Post Increment */

#include<stdio.h>

int main()
{
    int i=8;

    printf(" The initial value of i is %d\n",i);   // Printing the initial value of 'i'.


    printf(" The latest value of i is %d\n",i++);     // Post increment. (Here first it will fetch the value of 'i', and then increment.)

    printf(" The latest value of i is %d\n",i--);     // Post decrement.

    return 0;
}
