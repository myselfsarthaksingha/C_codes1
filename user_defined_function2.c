#include<stdio.h>

void show() // function definition. In case of user defined function we have to declare return type of the function. Here the return type is 'void'.
{
    printf("Hello world");
}
int main()
{
    show(); // function calling. Here we have to just give the function name and a semicolon.
    return 0;
}


/*
To use user defined function we have to follow three steps:
1. Declaration
2. Definition
3. Calling

A function cannot start with special characters.

In function definition curly braces (i.e. '{ }') are used but in function declaration semicolon (i.e. ';') is used.
In function call, we don't have to mention the return type.

If we don't give the function declaration correctly, then when main reaches to 'show()' it cannot able to find where the function is present.
But when we put the function before 'main()', then declaration becomes optional.

*/

