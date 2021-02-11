/* Write a program in C to print the following pattern:
    *   *   *   *
    *            *
    *            *
    *   *   *   *
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i==1 || i==4 || j==1 || j==4)    // To print this type of pattern, we have to think 'i' as rows and 'j' as columns.
            {
                printf("*   ");
            }
            else
            {
                printf("    ");     // It will create the blank area of the pattern.
            }
        }
        printf("\n");
    }
    return 0;
}
