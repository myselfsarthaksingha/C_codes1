// Swap two numbers.

#include<stdio.h>
int main()
{
    int a=5;
    int b=6;
    int temp;

    printf("Initial value of a is %d\n",a);     // Before swapping.
    printf("Initial value of b is %d\n\n",b);   // Before swapping.

    temp=a;     // Saving the value of 'a' (i.e. 5) in a variable 'temp'. So value of 'temp' becomes 5.

    a=b;    // Assigning the value of 'b' to 'a'. So value of 'a' becomes 6. (At this stage, both the values of 'a' and 'b' are 6)
    b=temp; // Assigning the value of 'temp' to 'b'. So value of 'b' becomes 5.

    printf("Latest value of a is %d\n",a);     // After swapping.
    printf("Latest value of b is %d\n\n",b);   // After swapping.

    return 0;
}


/*
Here in case of swapping, when we assign 'b' to 'a', then the value of 'b' is 6 and the value of 'a' becomes 6. So we lost 5.
So both the values becomes 6.
So before assigning the values, we need to save the value of 'a' in a variable 'temp' to avoid this problem.
*/

