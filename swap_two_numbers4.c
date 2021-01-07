// Swap two numbers without using third variable.

#include<stdio.h>
int main()
{
    int a=5;    // Binary form of 5 is 101
    int b=6;    // Binary form of 6 is 110

    printf("Initial value of a is %d\n",a);     // Before swapping.
    printf("Initial value of b is %d\n\n",b);   // Before swapping.

    a=a^b;  // To represent XOR operation, caret (i.e '^') symbol is used. (At this stage, the value of 'a' becomes 011 i.e. 3)
    b=a^b;  //  (At this stage, the value of 'b' becomes 101 i.e. 5)
    a=a^b;  // (At this stage, the value of 'a' becomes 110 i.e 6)

    printf("Latest value of a is %d\n",a);     // After swapping.
    printf("Latest value of b is %d\n\n",b);   // After swapping.

    return 0;
}


/*
In case of swapping we can save 2 bytes (i.e 16 bits) of memory by not using any third variable.
But not using any third variable and using formulas is still wasting 1 bits.

Because, here the value of 'a' is 5 (i.e. 101) and value of 'b' is 6 (i.e. 110).
So if we apply 'a=a+b' here, then 5+6=11. The binary form of 11 is 1011.
So 5 (i.e. 101) is consuming 3 bits, 6 (i.e. 110) is also consuming 3 bits. But 11 (i.e. 1011) is consuming 4 bits.
That is the problem. Because by applying 'a=a+b' we are consuming 4 bits here. We are wasting 1 bit.


To save that 1 bit, we can use XOR operations.

*/

/*
    Truth table of XOR:

        0   0       0
        0   1       1
        1   0       1
        1   1       0
*/
