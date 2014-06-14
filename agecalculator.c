#include<stdio.h>
void about(void);
void start(void);
int main()
{

    start();
    about();
    return 10;
}
void start(void)
{
    int date,month,year;
    int date1,month1,year1;
    int ans_date,ans_month,ans_year;
    printf("Enter the Current Day,Month,Year separate by space.\n");
    scanf("%d%d%d",&date,&month,&year);
    printf("Enter your birth Day,Month,Year separate by space.\n");
    scanf("%d%d%d",&date1,&month1,&year1);
    ans_date = date - date1;
    ans_date += 1;
    ans_month = month - month1;
    ans_year = year - year1;
    while(ans_month<0){
        ans_month = 12 + ans_month;
        ans_year -= 1;
    }
    while(ans_date<0){
        ans_date = 30 + ans_date;
        ans_month -= 1;
        }




    printf("\nYou are %d years %d months %d days old\n",ans_year,ans_month,ans_date);



}
void about(void)
{
    printf("\n\n******************************************\n");
    printf("Thank you for using this Age calculator.\nThis application writtern by H.R.Shadhin\n");
    printf("Email:hrshadhin.i386@gmail.com\nCell no.+8801554322707\n");
    printf("******************************************\n");
}


