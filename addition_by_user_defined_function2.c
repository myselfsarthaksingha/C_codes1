#include<stdio.h>

int add();
int main()
{

    int result=add();
    printf("The result is %d\n",result);    // Here 'main()' function will print the value instead of 'add()' function.

    return 0;
}

int add()
{
    int a=5,b=6,c;
    c=a+b;

    return c;	// We are returning the value of 'c', we are not printing it here.
}
