#include<stdio.h>
#define DC_PER_DF -17.22// conversion constant(1Degree Fahrenheit = -17.22 Degree Celsius approximately)
int main()
{
    double celsius,fahrenheit;
    printf("Enter the value in Degrees Fahrenheit >\n");//Get the value in Degree Fahrenheit
    scanf("%lf",&fahrenheit);
    celsius = DC_PER_DF * fahrenheit; //calculate these value
    printf("That equals to %.2f Degrees Celsius\n",celsius);//Display the result in Degree Celsius
    return(0);

    }
