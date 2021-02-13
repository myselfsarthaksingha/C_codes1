/* Array */

// Array is a collection of similar type of elements. But in an array we cannot store different types of values.
#include<stdio.h>
int main()
{
    // int a=1,b=2,c=3,d=4;
    int z[4]; // If we add square brackets (i.e. '[ ]') after a variable, then this variable can have multiple values. (Here 'z' is an array of 4 elements.)
    int i;

    z[0]=1; // Here the value (i.e. 1) will be assigned at 0th index of the array 'z'.
    z[1]=2;
    z[2]=3;
    z[3]=4;

    printf("%d \n\n",z[0]);  // At one time we can print only one value of the array.

    for(i=0;i<=3;i++)   // By this way we can print all elements of the array at one time.
    {
        printf("%d \t",z[i]);
    }

    return 0;
}

/*
We cannot print the complete array like 'printf("%d",z);'
*/
