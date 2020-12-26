#include<stdio.h>   // 'printf()' and 'scanf()' both belongs to 'stdio.h'.

int main()
{
    int a,b,c,d,e;
    int sum;

    printf("Enter 5 numbers: \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);     // We can use only one 'scanf()' to take multiple inputs by this way.

    sum=a+b+c+d+e;

    printf("The addition result is %d \n",sum);

    return 0;

}
