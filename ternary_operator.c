#include<stdio.h>
int main()
{

    int a=2;
    int b=3;

    if(a==2)
    {
        b=5;
    }
    else
    {
        b=6;
    }

    printf("The updated value of b is %d\n\n",b);



    /* Using Ternary operator */

    int i=8;
    int j=7;

    j=i==2?5:6; // Here 'i==2' is the condition. If the condition is true then the first value i.e 5 after '?' will be assigned to 'j'. Otherwise the second value i.e. 6 after ':' will be assigned to 'j'.)

    printf("The latest value of j is %d\n",j);


    return 0;
}

/*
In case of ternary operation, we have to give the condition before the question mark (i.e. '?').
After the question mark (i.e. '?') we have to give 2 parts. There will be a colon (i.e. ':') between these 2 parts.
If the condition becomes true, then the first part will be executed. Otherwise the second part will be executed.
*/
