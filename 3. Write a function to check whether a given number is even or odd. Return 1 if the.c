/******************************************************************************
3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)
*******************************************************************************/

#include <stdio.h>
int Even_odd(int);//function declaration

int main()
{ int n;
printf("Enter the number :");
scanf("%d",&n);
printf("%d",Even_odd(n));//function calling

    return 0;
}
 int Even_odd(int a)//function definition
{ int t;
    t=(a%2==0)?  1: 0;
    return t;
}
