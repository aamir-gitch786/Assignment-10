/******************************************************************************
10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)

*******************************************************************************/

#include<stdio.h>
void factors(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    factors(n);
}
void factors(int n)
{
    for(int i=2;i<=n;i++)
    {
        while(i)
       { if(n%i==0)
            { printf("%d ",i);
            n=n/i;
            }
         else
         break;
       }
    }
}
