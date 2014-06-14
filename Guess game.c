#include<stdio.h>
void instruct(void);
void thanks(void);
int main()
{
    printf("\t\aWelcome!!\n");
    int i,Guess_num,random_num=91,result;
    char ch1='H';
    char ch2='h';
    char ch;
    printf("To know how to play this game press 'H'\n");
    scanf("%c",&ch);
    if(ch==ch1||ch2){
        instruct();
        }

    for(i=1;i<=5;i=i+1){
    printf("\nEnter your Guess number>\n");
    scanf("%d",&Guess_num);
    result = random_num - Guess_num;
    if(result>0){
        printf("Your Guess number is worng!!It %d higher than your number.\n",result+2);
    }
    else if(Guess_num==random_num)
    {
        printf("\aYour Guess is correct.you win^^\n");
        thanks();
        getch(0);
        }
    else
    {
        printf("Your Guess number is worng!!It %d lower than your number.\n",result*(-1));


        }
        }
    printf("\n\n\aGame is over.You are a looser!!!\tTry again.\n");
    thanks();

    getch(0);
    }
void instruct(void)
    {
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("This is a simple game as guess number.\n");//welcome note and instruction to play this game
        printf("To play this game you just enter your guess number.\n");
        printf("If your number is incorrect,it will be shows it something\n");
        printf("higher or lower than your number.Again you guess and enter,\n");
        printf("untill you win.\n");
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
    }
     void thanks(void)
     {
        printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("Thank you for playing this game.\n");//thank message and some information about programer
        printf("It made by Habibur Rahman[shadhin]\n");
        printf("Emai:root@hrshadhin.me\n");
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }


