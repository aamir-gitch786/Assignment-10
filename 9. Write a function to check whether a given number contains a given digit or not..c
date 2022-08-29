/******************************************************************************

9. Write a function to check whether a given number contains a given digit or not.
(TSRS)

*******************************************************************************/

#include <stdio.h>
int check(int,int);
int main()
{
   int n,d;
   printf("Enter the number ");
   scanf("%d",&n);
   printf("Enter the digit ");
   scanf("%d",&d);
   check(n,d)?printf("Yes"):printf("No");
    return 0;
}
int  check(int n,int d)
{ int a;
while(n!=0)
{
    if(n%10==d)
     {a=1;
    return a;
     }
    n/=10;
}
if(n==0)
{a=0;}
return a;
}

