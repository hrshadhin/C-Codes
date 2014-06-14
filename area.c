#include<stdio.h>
int main()
{
    double pi,radius,area;
    pi = 3.1416;
    printf("Enter the radius of the circle in cm\n");
    scanf("%lf",&radius);
    area = pi * radius * radius;
    printf("The Area of this circle is %.2f cm\n",area);
    getch(0);
    }
