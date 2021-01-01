/* Assignment Operators */
#include <stdio.h>
int main()
{

    int a=5>3;
    printf("%d\n\n",a);  // This will print 1 as output as 5>3 is true.

    int b=4>9;
    printf("%d\n\n",b);  // This will print 0 as output as 4>9 is false.

    int c=3==3; // To check something are equal or not we have to use double equals (i.e. '==') between these elements.
    printf("%d\n\n",c);     // This will print 1 as output as 3 equals to 3 is true.

    int d=3==8;
    printf("%d\n\n",d);     // This will print 0 as output as 3 equals to 8 is false.

    int e=3<=8;
    printf("%d\n\n",e);     // This will print 1 as output as 3 less than or equals to 8 is true.

    int f=3<=3;
    printf("%d\n\n",f);     // This will print 1 as output as 3 less than or equals to 3 is true.

    int g=3!=3;
    printf("%d\n\n",g);     // This will print 0 as output as 3 not equals to 3 is false.

    int h=3!=8;
    printf("%d\n\n",h);     // This will print 1 as output as 3 not equals to 8 is true.

    return 0;
}


/* To check something are equal or not we have to use double equals (i.e. '==') between these elements. Because single equals
(i.e. '=') is used to assign values. Assignment operator is used to fetch the value from the right part and assign it to the left part.
*/

/* C does not support true & false directly, it supports boolean values. Here 'true' means '1' and 'false' means '0'. */
