#include <stdio.h>
#include <stdio.h>
int main(void){
    int roll;
    printf("Enter ur roll please?");
    scanf("%d", &roll);
    int marks;
    printf("Enter ur marks please?");
    scanf("%d", &marks);
    if(marks>79)
    {
                   printf("A+ point:5.00");
                   }
    else if(marks>69)
    {
         printf("A,point:4.00");
         }
    else if(marks>59)
    {
         printf("A-,point:3.50");
         }
    else
    {
        printf("F,point:0");
        }
   

    getch(0);
    }
