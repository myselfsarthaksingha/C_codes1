/* Write a program in C to print the following pattern:
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)   // Nested for loop.
        {
            printf("*  ");
        }
        printf("\n");
    }

    return 0;
}
