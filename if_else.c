/* flow control. */

// Write a program to check a given number greater than 10 or not.

#include<stdio.h>
int main()
{
    int i=16;


    if(i>10)    // That is the case. If this case is true, then only the following block (within curly braces) will be executed.
    {
        printf("Yes. The number is greater than 10.\n");
    }

    else    // If the previous case is false, then only the following block (within curly braces) will be executed.
    {
        printf("The number smaller than 10.\n");
    }


    return 0;
}


/*
There are 2 types of flow control:
                                1. Branching statement.
                                2. Loops.

We can use branching with the help of 'if'-'else'.


*/
