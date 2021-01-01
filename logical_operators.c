#include<stdio.h>
int main()
{
    int a=3!=4 && 3>1;  // Here 'AND' operator (i.e. '&&') is used. If both conditions are true then only '1' will be printed as output.
    printf("%d\n\n",a);     // This will print 1 as output as both conditions are true.

    int b=3==4 && 3>1;
    printf("%d\n\n",b);     // This will print 0 as output as first condition is false and second condition is true.

    int c=3!=4 || 3>1;  // Here ''OR operator (i.e. '||') is used. If both conditions are false then only '0' will be printed as output.
    printf("%d\n\n",c);     // This will print 1 as output as both conditions are true.

    int d=3==4 || 3>1;
    printf("%d\n\n",d);     // This will print 1 as output as first condition is false and second condition is true.

    int e=3==4 && 3<1;
    printf("%d\n\n",e);     // This will print 0 as output as both conditions are false.

    return 0;
}

/* Logical operators are used to combine 2 expressions. */

/*
    Truth Table of AND:

        F   F       F
        F   T       F
        T   F       F
        T   T       T


    Truth Table of OR:

        F   F       F
        F   T       T
        T   F       T
        T   T       T

*/
