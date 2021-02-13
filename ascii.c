/* ASCII Code */

/* ASCII stands for American Standard Code for Information Interchange. ASCII is the number representation of character.
 Every character has a unique ASCII value. Normally the range of ASCII is 0-127.
*/

#include<stdio.h>
int main()
{
    int i;

    for(i=0;i<=127;i++)
    {
        // printf("%d \t",i);   // '\t' gives a big space.
        printf("%d: %c \n",i,i);
    }
    return 0;
}
