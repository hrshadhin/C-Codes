#include<stdio.h>
#include<math.h>
#define PI 3.1416
void instruct(void);
void thanks(void);
int main(void)
{

    double height,surface_area,radius1,radius2;
    instruct();//call the instructon message function
    printf("\n\nEnter the height of the cylinder>\n");//get input
    scanf("%lf",&height);
    printf("Enter the surface area of the cylinder>\n");
    scanf("%lf",&surface_area);
    radius1 = (-2*PI*height+sqrt(pow(2*PI*height,2) - 4*2*PI*(-surface_area)))/(2*2*PI);//formula for calculeting
    radius2 = (-2*PI*height-sqrt(pow(2*PI*height,2) - 4*2*PI*(-surface_area)))/(2*2*PI);
    printf("\nThe radius of the cylinder is %.2f or %.2f(negative value not acceptable)\n",radius1,radius2);//display result
    thanks();//call the thank message function
    return(0);
}
    void instruct(void)
    {
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("Welcome!!This program get the height and surface area\n");//welcome note and about how this program work
        printf("of a cylinder and calculate the value of radius.\n");
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }
     void thanks(void)
     {
        printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("Thank you for using this program\n");//thank message and about programer
        printf("It written by Habibur Rahman\n");
        printf("Institute: DIU,Program: CSE\n");
        printf("Section: A, ID:103-15-1106\n");
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }

