/* The all operations performed here are done using pre increment and pre decrement. */

#include<stdio.h>

int main()
{
    int i=3;

    printf(" The initial value of i is %d\n",i);   // Printing the initial value of 'i'.


    i=i+1;  // Incrementing the value of 'i' by 1.
    printf(" The latest value of i is %d\n",i);     // Printing the value of 'i' after incrementing it by 1.

    i+=1;  // Incrementing the value of 'i' by 1 using short hand operator.
    printf(" The latest value of i is %d\n",i);     // Printing the value of 'i' after incrementing it by 1.


    i++;    // It will increment the value of 'i' by 1.
    printf(" The latest value of i is %d\n",i);     // Printing the value of 'i' after pre increment.

    i--;    // It will decrement the value of 'i' by 1.
    printf(" The latest value of i is %d\n",i);     // Printing the value of 'i' after pre decrement.

    return 0;
}
