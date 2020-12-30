#include<stdio.h>

int main()
{
    int i=8;
    int j;

    printf("The initial value of i is %d\n",i); // At this stage, the value of 'i' is 8.

    /* post increment. */

    j=i++;  // Here first it will fetch the value of 'i' (so the value of 'j' will be 8 at this stage) and then increment.
    printf("The value of j is %d\n",j); // The value of 'j' i.e. 8 will be printed.
    printf("The value of i is %d\n\n",i); // The value of 'i' is now 9 after increment.


    /* pre increment */

    j=++i;  // Here first it will increment the value of 'i' (so the value of 'j' will be 10 at this stage) and then assing it to 'j'.
    printf("The value of j is %d\n",j); // The value of 'j' i.e. 10 will be printed.
    printf("The value of i is %d\n\n",i); // The value of 'i' is now 10 after increment.



    return 0;
}
