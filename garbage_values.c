#include<stdio.h>

int main()  // Return type
{
    int i,j,k;    // Variable declaration. (We can declare all variables of similar types in one line.)

    k=i+j;

    printf("The addition of %d & %d is %d",i,j,k);  // We will get some garbage values as output.

    return 0;
}

/* If we not specify the value of variables in the code, then it will take some default values. That means, when we create a
variable, then it takes the value of a location of the memory by default. This value is called garbage value.
*/


