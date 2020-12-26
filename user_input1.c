#include<stdio.h>

int main()
{
    int i,j,k;  // Variable declaration.

    printf("Enter a number: ");  // This will prompt user to enter a value as input.
    scanf("%d",&i);  // 'scanf()' function in C is used to accept inputs from user. Here 'i' means the input given by user will be stored in variable 'i'.

    printf("Enter another number: ");   // This will prompt user to enter another value as input.
    scanf("%d",&j);     // Here the type of the input value will be integer, so '%d' is used.

    k=i+j;

    printf("The addition of %d and %d is %d \n",i,j,k);   // '\n' is used to go to the new line. Or it will move the cursor to a new line.

    return 0;

}

/*
'scanf()' function always asks for where to store the input given by user. It also asks for the location of the variable, where the
input will be stored. To specify the location '&' (Ampersand) is used. Ampersand gives us the location of a variable.
We need to define the type of the input also in 'scanf()'.
*/
