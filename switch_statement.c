// Write a program to print digits in words.

#include<stdio.h>

int main()
{
    int i=2;

    // Instead of using 'if'-'else', we can use one more feature called 'switch' in this case. 'switch' works best in this type of case. Switct case in 'C' supposes primitive data type, switch case oin 'Java' suppose objects.
    switch(i)    // In 'switch' we have to pass the variable we want to check.
    {
        case 0:  // We need to define some cases inside 'switch'.
            printf("Zero\n");     // If the case (or value of 'i') is 0, then it will print this statement.
            break;  // Whenever we use cases, after every case we need to mention 'break' so that it will break the switch and go to the next thing.
        case 1:
            printf("One\n");  // If the case (or value of 'i') is 1, then it will print this statement.
            break;
        case 2:
            printf("Two\n");  // If the case (or value of 'i') is 2, then it will print this statement.
            break;
        case 3:
            printf("Three\n");    // If the case (or value of 'i') is 3, then it will print this statement.
            break;
        case 4:
            printf("Four\n");     // If the case (or value of 'i') is 4, then it will print this statement.
            break;

        default:    // If the case of the input is not present in the cases. Otherwise it will not execute the switch block.
            printf("Please give the correct input.\n");

    }
    return 0;
}


/* If we use 'break' then it will not continue with the statement. Otherwise after finding match it will print all the remaining statements.
'break' is basically used to break the current block and go out of the switch statement. */

/*
'default' is same like 'else' in 'if'-'else'.
*/
