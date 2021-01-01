#include<stdio.h>

int main()
{
    int x=16;
    int result=x>>2;      // Here Right Shift Operator (i.e. '>>') is used. Here it will shift the bits of 'x' by 2 to the right hand side.
    printf("%d\n",result);     // It will print the value 4 (i.e 100) after doing 2 bits right shift operation on 16 (i.e. 10000).

    return 0;
}


/*

    Right shift operation:

                    16      =               1   0   0   0   0
                                                \    \    \    \	\
                                                 \    \    \    \
                                                  \    \    \    \
                                                   \    \    \    \
                                                    \    \    \    \
                                                     \    \    \
                                                      \    \    \
                                                       \    \    \
                                                        \    \    \
        ___________________________________________
        (2 bits right shift)                       1   0   0        =       4


*/
