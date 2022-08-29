/******************************************************************************

7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)

*******************************************************************************/

#include <stdio.h>
int factorial(int );
int main()
{
   int n,r;
   printf("Enter the value of items ");
   scanf("%d",&n);
   printf("Enter the value of r ");
   scanf("%d",&r);
   printf("combinations is : %d",factorial(n)/(factorial(n-r)*factorial(r)));

    return 0;
}
int factorial(int n)
{ int a=1;
if(n==0)
  return 0;

for(int i=1;i<=n;i++)
     a=a*i;
  return a;
}

