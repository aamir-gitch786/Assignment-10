/******************************************************************************
1. Write a function to calculate the area of a circle. (TSRS)
*******************************************************************************/

#include <stdio.h>
float area(float);//function declaration

int main()
{ float  r;
printf("Enter the radious of circle  ");
scanf("%f",&r);
printf("Area of circle is %0.2f",area(r));//function calling

    return 0;
}
float area(float R)  //function definition
{
    return 3.14*R*R;
}
