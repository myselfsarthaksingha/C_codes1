#include<stdio.h>

int main()
{
    int i=5;
    int temp;

    printf(" The initial value of i is %d\n",i);   // Printing the initial value of 'i'.

    temp=i; // At first the initial value of 'i' (i.e. 5) is stored in a variable called 'temp'.
    i++;  // Here it will increment the value of 'i'.
    i=temp; // But here the stored value in 'temp' (i.e. 5) will again assign to 'i'. So the value becomes 5 again.

    printf("The latest value of i is %d\n",i);   // Printing the value of 'i'.

    return 0;
}
