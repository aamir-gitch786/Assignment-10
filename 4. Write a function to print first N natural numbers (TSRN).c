/******************************************************************************
4. Write a function to print first N natural numbers (TSRN)
*******************************************************************************/

#include <stdio.h>
void natural(int);//function declaration

int main()
{ int n;
printf("Enter the value of N :");
scanf("%d",&n);
 natural(n);//function calling

    return 0;
}
void natural(int a)//function definition
{ for(int i=1;i<=a;i++)
 printf("%d ",i);

}
