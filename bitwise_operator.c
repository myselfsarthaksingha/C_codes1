#include<stdio.h>

int main()
{
    int a=25 | 15;  // Here Bitwise OR operator (i.e. '|') is used.
    printf("%d\n\n",a);   // It will print the result 31 (i.e. 11111) after doing bitwise OR operation between 25 (i.e. 11001) and 15 (i.e. 01111).


    int b=25 & 15;   // Here Bitwise AND operator (i.e. '&') is used.
    printf("%d\n\n",b);     // It will print the result 9 (i.e. 01001) after doing bitwise AND operation between 25 (i.e. 11001) and 15 (i.e. 01111).


    return 0;


}


/*  When we use double ampersand (i.e. '&&') it means AND operation. But if we use single ampersand (i.e. '&') it means Bitwise AND operation.
    When we use double pipe (i.e. '||') it means OR operation. But if we use single pipe (i.e. '|') it means Bitwise OR operation.
*/

/*
    Bitwise OR:

        25      =       1   1   0   0   1
        15      =       0   1   1   1   1
        _________________________________
                            1   1   1   1   1       =       31


    Bitwise AND:

        25      =       1   1   0   0   1
        15      =       0   1   1   1   1
        _________________________________
                            0   1   0   0   1       =       9


*/
