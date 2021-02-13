#include<stdio.h>
int main()
{
    int i=5;    // 'int' data type takes 2 bytes of memory.
    float f=6.7;    // 'float' data type takes 4 bytes of memory. In CPU when we want to store a decimal value, it is represented by floating point representation.
    char c='A'; // 'char' data type takes 1 byte of memory. to represent a character we have to use single quotes (i.e ' ')

    int a=4.3;  // In this case only 4 will be taken, the other part will be rejected.
    float b=4;  // In this case some zeroes will be added after point.
    char d=65;  // In this case the ASCII (American Standard Code for Information Interchange) value will be printed.

    printf("%d \n",i);
    printf("%f \n",f);  // For float we cannot use '%d', we have to use '%f'. Here we will get the output like '6.70000'. Because it tries to occupy all the memory allocated for it.
    printf("%c \n\n",c);  // For char we have to use '%c'.

    printf("%d \n",a);
    printf("%f \n",b);
    printf("%c",d);


    return 0;
}

/*
For collection of characters (i.e. String) we have to use double quotes (i.e. " ") and for a single character we have to use single quotes (i.e. ' ').

*/
