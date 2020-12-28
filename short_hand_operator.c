// Short Hand operators

#include<stdio.h>

int main()
{
    int a=9,b=3;

    printf("The initial value of a is %d\n",a);
    printf("The initial value of b is %d\n\n",b);

    a=a+3;   // Here the initial value of 'a' is 9. But after adding 3 with it, the new value of 'a' becomes 12.
    b+=4;   // Here the initial value of 'b' (i.e. 3) will be incremented by 4 and become 7. This operator is called Short Hand Operator.

    printf("The new value of a is %d \n",a);
    printf("The new value of b is %d \n\n",b);

    a=a*4;  // The present value of 'a' is 12. But after multiplying 4 with it, the new value of 'a' becomes 48. (Standard way)
    b*=5;   // Short hand operator.

    printf("The latest value of a is %d \n",a);
    printf("The latest value of b is %d \n\n",b);

    return 0;
}
