/******************************************************************************
2. Write a function to calculate simple interest. (TSRS)
*******************************************************************************/

#include <stdio.h>
float simple_interest(float,float ,float);//function declaration

int main()
{ float P,R,T;
printf("Enter the value of principal ");
scanf("%f",&P);
printf("Enter the value of rate ");
scanf("%f",&R);
printf("Enter the value of time ");
scanf("%f",&T);
printf("Simple interest is : %0.2f",simple_interest(P,R,T));//function calling

    return 0;
}
float simple_interest(float A,float B, float T)  //function definition
{
    return A*B*T/100;
}
