// Write a program to print the greatest number among three numbers.
#include<stdio.h>

int main()
{
    int a,b,c;
    a=6;
    b=3;
    c=4;

    if(a>b && a>c)  // If both conditions are true then only the value of 'a' will be greatest. So we are using AND operator here.
    {
        printf("%d is the greatest number.\n",a);
    }

    else if(b>c)    // Here in 'else' we have to apply 'if' again to check which is greater between 'b' and 'c'. This part will be executed only when 'if' part is false.
    {
        printf("%d is the greatest number.\n",b);
    }

    else    // If all of the previous parts are false then only this part will be executed.
    {
        printf("%d is the greatest number.\n",c);
    }


    return 0;
}
