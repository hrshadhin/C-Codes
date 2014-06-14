/*  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    > Programer: Habibur Rahman(shadhin)                                     <
    > ID:103-15-1106                                                         <
    > program: CSE                                                           <
    > Section: A                                                             <
    > purpose: This program for claculate volume and surface of the Cylinder <
    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
*/
#include<stdio.h>
#include<math.h>
#define PI 3.1416
void instruct(void);
void thanks(void);
int main(void)
{
    double radius,height,volume,surface;
    instruct();
    printf("\n\nEnter the radius of the Cylinder>\n");
    scanf("%lf",&radius);
    printf("Enter the height of the Cylinder>\n");
    scanf("%lf",&height);
    volume = PI*radius*radius*height;
    surface = 2*PI*radius*height + 2*PI*radius*radius;
    printf("The volume of the Cylinder is  = %.2f\n",volume);
    printf("The surface of the Cylinder is = %.2f\n",surface);
    thanks();
    return(0);



}
 void instruct(void)
    {
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("Welcome!!This program get the height and radius \n");
        printf("of a cylinder.It calculate the value of volume \n");
        printf("and surface area.\n");
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }
     void thanks(void)
     {
        printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("Thank you for using this program\n");
        printf("It written by Habibur Rahman\n");
        printf("Institute: DIU,Program: CSE\n");
        printf("Section: A, ID:103-15-1106\n");
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }

