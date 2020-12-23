/*
In C code if we make any syntactical mistake, then we will get error. But if we make any mistake that is not exactly a problem
for execution, but it is not the right way to do it, then we will get warning.

Every function returns something. Function does a task and returns something.
'main()' always returns something. If we want to don't return anything,  we have to mention it as 'void'.
But in C programming, the code executes in compiler or CPU. CPU says that instead of returning 'void', give an 'int' value.
If the program succeed to return or succeed to perform, then you return '1' or any integer value otherwise return any error code.
'return' is a keyword, using which we can return the value back.
*/


#include<stdio.h>

int main() // Here 'int' is a datatype, but it is specifically called as return type. ('void' is also a return type.)
{
    int i; // Here 'int' is called datatype.
    int j;
    i=2;
    j=3;
    int k=i+j;

    printf("The addition result of %d & %d is %d",i,j,k);

    return 1;

}
