/* 2D Array */

#include<stdio.h>
int main()
{
    int d[3][4]={{1,2,3,4},{3,4,5,6},{8,6,2,9}};  // To declare a 2D array, we have to use 2 curly braces after the variable, first one is for no. of rows and second one is for no. of columns. And we have to assign values row wise respectively like this way.
    int i,j;

    printf("%d \n\n",d[1][2]);  // We can print a value by using the index numbers like this way.

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d \t",d[i][j]);
        }
        printf("\n");   // This statement is used to go to the new line after completion of a row.
    }

    return 0;
}
