/* Array */

// Array is a collection of similar type of elements. But in an array we cannot store different types of values.
#include<stdio.h>
int main()
{
    int z[4]={1,2,3,4}; // We can insert elements in an array by using curly braces (i.e. '{ }'). Within the curly braces we have to enter the values respectively.
    int i;

    for(i=0;i<=3;i++)   // By this way we can print all elements of the array at one time.
    {
        printf("%d \t",z[i]);
    }

    return 0;
}

/*
We cannot print the complete array like 'printf("%d",z);'
*/
