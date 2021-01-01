#include<stdio.h>

int main()
{
    int x=16;
    int result=x<<2;      // Here Left Shift Operator (i.e. '<<') is used. Here it will shift the bits of 'x' by 2 to the left hand side.
    printf("%d\n",result);     // It will print the value 64 (i.e 1000000) after doing 2 bits left shift operation on 16 (i.e. 10000).

    return 0;
}


/*

    Left shift operation:

                        16      =                 1   0   0   0   0
                                                     /    /    /    /   /
                                                    /    /    /    /   /
                                                   /    /    /    /   /
                                                  /    /    /    /   /
                                                 /    /    /    /   /
                                                /    /    /    /   /
                                               /    /    /    /   /
                                              /    /    /    /   /
                                             /    /    /    /   /
        ____________________________________________
        (2 bits left shift)          1   0   0   0   0   0   0       =       64



*/
