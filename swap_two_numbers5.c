// Swap two numbers (shortest way).

#include<stdio.h>
int main()
{
    int a=4;
    int b=5;

    printf("Initial value of a is %d\n",a);     // Before swapping.
    printf("Initial value of b is %d\n\n",b);   // Before swapping.

    b=a+b-(a=b);

    printf("Latest value of a is %d\n",a);     // After swapping.
    printf("Latest value of b is %d\n\n",b);   // After swapping.

    return 0;
}


/*
If we do 'b=a' then we are losing the value of 'b' (i.e. 5).
if we do 'b=a+b-b' then '+b-b' will be subtracted and we will get 'a'. But again we are losing the value of 'b' (i.e. 5).
So we can preserve the value of 'b' in 'a' (i.e. 'a=b'). Here the value of 'b' is going to 'a'. So value of 'a' becomes 5.
And 'b=a+6-6'. So we get 'b=a'. So value of 'b' becomes 4.


*/
