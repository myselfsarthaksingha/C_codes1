// Write a program in C to print 'Hello' 5 times using while loop.

#include<stdio.h>
int main()
{
    int i=1;    // Initialization.
    while(i<=5) // Condition (Inside the braces we have to write the condition).
    {
        printf("Hello\n");
        i++;    // Increment or decrement. (Here 'i++' will increase the value of 'i'  by 1 after every 'Hello'). If we don't use this part, then the loop will run for infinite times. 
    }
    return 0;
}


/*
Use of loop is execute some task multiple times.
*/
