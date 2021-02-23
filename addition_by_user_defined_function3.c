#include<stdio.h>

int add(int, int);  // In the declaration, we need to mention the data types of variables in add(). But there is no need to mention variable name.
int main()
{

    int result=add(5,6);   // Here we are passing the values from 'main()' function. To pass those values from 'main()', we have to pass those values (i.e. 5,6) in 'add()'.
    printf("The result is %d\n",result);    // Here 'main()' function will print the value instead of 'add()' function.

    return 0;
}

int add(int a, int b)   // We have to accept those values which we have passed from the 'main()'. The values will be accepted in variables respectively.
{
    // int a=5,b=6;
    int c=a+b;

    return c;
}

/*
We can pass values inside a function in the round brackets (i.e. '( )'). Those values which we pass in functions are called parameters.
*/
