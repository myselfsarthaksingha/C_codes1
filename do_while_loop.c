// Write a program in C to print 'Hello' 5 times using  do while loop.

#include<stdio.h>
int main()
{
    int i=1;    // Initialization.
    do
    {
        printf("Hello\n");
        i++;    // Increment or decrement.
    }
    while(i<=5);    // Condition.
    return 0;
}


/*
Use of loop is execute some task multiple times.
In case of do while loop after initialization, it executes the block and then performs increment or decrement and at last it checks for the condition.
So do while loop executes the block at least once.
*/
