#include<stdio.h>
#include<math.h>
void instruct(void);
void thanks(void);
int main(void)
{
    int change_amount,bill_of_50,bill_of_10,bill_of_5,bill_of_1;
    instruct();//call the function of instruction
    printf("\n\nEnter the amount of change >\a\n");
    scanf("%d",&change_amount);
    bill_of_50 = change_amount/50;//formula for calculating
    bill_of_10 = (change_amount%50)/10;
    bill_of_5  = (change_amount%10)/5;
    bill_of_1  = (change_amount%5)/1;
    printf("\nBill of 50 = %d\n",bill_of_50);//display result
    printf("Bill of 10 = %d\n",bill_of_10);
    printf("Bill of 5  = %d\n",bill_of_5);
    printf("Bill of 1  = %d\n",bill_of_1);
    thanks();//call the function of thank message
    return(0);
}
void instruct(void)
    {
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("Welcome!!This program get the amount of change\n");//welcome note and decration about how this program work
        printf("and show the minimum number of 50,10,5 and 1 in the\n");
        printf("change amount\n");
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }
     void thanks(void)
     {
        printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("Thank you for using this program\n");
        printf("It written by Habibur Rahman\n");//thanks message and about programer information
        printf("Institute: DIU,Program: CSE\n");
        printf("Section: A, ID:103-15-1106\n");
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }
