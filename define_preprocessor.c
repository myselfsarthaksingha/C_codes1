#include<stdio.h>
#define x 5     // Here 'x' is a token. So whenever we need 5, we can use 'x' in this code.

int main()
{
    int a=x;    // Here 'x' has become a constant.
    printf("%d",a);     // It will print the value of 'a' which is the value of 'x'.

    return 0;
}


/*
'#define' is called as preprocessor which is used to create constant or macros.
*/
