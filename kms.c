/* Converts distances from miles to kilometers */
#include <stdio.h>
#include <stdio.h>
#define KMS_PER_MILES 1.609 /* conversion constant */
int main()
{
    double miles,kms;
    /*distance in miles,equivalent distance in kilometers*/

    printf("Enter the distance in miles\n");//Get the distance in miles
    scanf("%lf",&miles);
    kms = KMS_PER_MILES * miles;//Convert the distance to kilometers
    printf("That equel to %lf kilometers\n",kms);//Display the distance in kilometers
    getch(0);

    }
