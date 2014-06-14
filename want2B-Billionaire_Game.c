/*This game named "Who want to be a billinear release under the license of GPLv3
  Author: H.R.Shadhin
  Email: root@hrshadhin.me
  Web: htttp://hrshadhin.me

*/



#include<stdio.h>
#include<string.h>
int mainmenu(void);
void correct(long int credit);
void worng(void);
void error(void);
void easy_level(void);
void medium_level(void);
void hard_level(void);
void checkans(char ch, char ch1);
char name[100];
int total_correctans=0;
int total_worngans=0;
long int total_credit=0;
int creditadd1=200000;
int creditadd2=800000;
int creditadd3=1000000;
int level=0;

int main()//main function and control of gave level
{
    printf("\nWhat's your name?\n");
    gets(name);
    char goto_level2;
    mainmenu();
    printf("\n******************************************************************************\n");
    printf("You have finished easy leved of this game and total given correct answers is %d and worng answers is %d.\nYour win blance is %d BDT.\n",total_correctans,total_worngans,total_credit);
    printf("\nPress \"N\" for goto next level or \"X\" for exit.\n");
    fflush(stdin);
    scanf("%c",&goto_level2);
    if(goto_level2=='N'|| goto_level2=='n')
    {
        medium_level();

    }
    else if(goto_level2=='X'|| goto_level2=='x')
    {
        return(0);
    }
    printf("\n\n******************************************************************************\n");
    printf("You have finished Medium leved of this game and total given correct answers is %d and worng answers is %d.\nYour win blance is %d BDT.\n",total_correctans,total_worngans,total_credit);
    printf("\nPress \"N\" for goto next level or \"X\" for exit.\n");
    fflush(stdin);
    scanf("%c",&goto_level2);
    if(goto_level2=='N'|| goto_level2=='n')
    {
        hard_level();
    }
    else if(goto_level2=='X'|| goto_level2=='x')
    {
        return(0);
    }
        printf("\n\t\t**************************************************************");
        printf("\n\t\t\t ------------");
        printf("\n\t\t\t|:Your Score:");
        printf("|\n");
        printf("\t\t\t ------------\n");
        printf("\t\t\tLevel played:%d\n\t\t\tTotal Questions:15\n\t\t\tCorrect answer:%d\n\t\t\tWorng answer:%d\n\t\t\tWin Balance:%d\n",level,total_correctans,total_worngans,total_credit);
        printf("\t\t\tDownload sourccode from:http://computune.blogspot.com\n");
        printf("\t\t\t#Thank you \"%s\"#\n",name);
        printf("\t\t***************************************************************\n");

    return(0);

}
//menu of the game
int mainmenu(void)
{

    char press,back;
    printf("Press:  S for start game\tR for see rules\n\tH for help\t\tA for about game\n\tX for exit\n");
    fflush(stdin);
    scanf("%c",&press);
    if(press=='s' || press=='S')
    {
        easy_level();
    }
    else if(press=='R' || press=='r')
    {

        printf("In this game have 3 levels as Easy,Medium and hard.Each level have 5 Questions.\n");
        printf("Your would got 200000 BDT(Bangladeshi Taka),800000 BDT and 1000000 BDT\nfor each Q in Easy,medium and hrad level.\n");
        printf("If you gives worng answers,you will not get BDT.\n");
        printf("Press: b for back to main menu.\n");
        fflush(stdin);
        scanf("%c",&back);
        if(back=='b' || back=='B')
        {
            mainmenu();
        }
    }
    else if(press=='H'|| press=='h')
    {
        printf("Do you fall in problem to play this game?Get solution or any kind of help from H.R.Shadhin to  email or call.\n");
        printf("Email:hrshadhin@yahoo.com # cell no.+8801755305105\n");
        printf("Press: b for back to main menu.\n");
        fflush(stdin);
        scanf("%c",&back);
        if(back=='b' || back=='B')
        {
            mainmenu();
        }
    }
    else if(press=='A'|| press=='a')
    {
        printf("This is a Quiz game as \"Who want to be a Billionaire\". Its base on Big reality show “Who want to be a Millionaire”.\n");
        printf("You can download this game from http://computune.blogspot.com and know abouts programer.You also visit www.facebook.com/H.R.Shadhin\n");
        printf("\n*******Game info***********\n");
        printf("\nName:Who want to be Billionaire\nVersion:11.09.11(beta)\nProgramer:H.R.Shadhin\n");
         printf("\n*******H.R.Shadhin***********\n");
        printf("\n\nPress: b for back to main menu.\n");
        fflush(stdin);
        scanf("%c",&back);
        if(back=='b' || back=='B')
        {
            mainmenu();
        }
    }
    else if(press=='X'|| press=='x')
    {
        return(0);
    }

}

void checkans(char ch, char ch1)//answer check function
{
  if(ch<'a' ||ch>'d' )
    {
       error() ;
    }
    else if(ch==ch1){
        correct(total_credit);
        total_correctans +=1;

    }
    else{
        worng();
        total_worngans +=1;
}
}
void easy_level(void)//Question function start from here
{
    printf("\t\t*********Easy level********\nHere you have 5 Questions and for each right answer you got 100000 BDT.\n");
    printf("Press any key to countinue..\n\n");
    getch();
    level=1;
    char ans;
    printf("1.Who is the father of computer?\n(a)Mular\t\t(b)Bilgates\n(c)Charles Byabej\t(d) Libnij\n");
    fflush(stdin);
    scanf("%c",&ans);
    char ans1='c';
    checkans(ans,ans1);
    printf("\n2.what's the name of Charles babbage Mathematical Medical device?\n(a)Calculator\t\t(b)Abacus\n(c)Complex computer\t(d)Difference Engine\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='d';
    checkans(ans,ans1);
    printf("\n3.The world's first commercial electronic computer name?\n(a)Advac\t(b)Matoyam\n(c)Univac\t(d)adsac\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='c';
    checkans(ans,ans1);
    printf("\n4.Which is the first web browser ever discovered?\n(a)Internet Explorer\t(b)Mosaic\n(c)Mozilla Firefox\t(d)Safari\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='b';
    checkans(ans,ans1);
    printf("\n5.when windows 95 was released on market?\n(a)14 August 1995\t\t(b)24 August 1995\n(c) 24 September 1996\t\t(d)14 October 1997\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='b';
    checkans(ans,ans1);
}

//medium level functions 
void medium_level(void)
{
    printf("\t\t*********Medium level********\nHere you have 5 Questions and for each right answer you got 800000 BDT.\n");
    printf("Press any key to countinue..\n");
    getch();
    level=2;
    char ans,ans1;
    printf("\n6.when the first computer established in Bangladesh?\n(a)1965\t\t(b)1962\n(c)1964\t\t(d)1971\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='c';
    checkans(ans,ans1);
    printf("\n7.Which Bank was first established computer in Bangladesh?\n(a) Sonali Bank\t\t(b)United Bank Ltd.\n(c) Janota Bank\t\t(d)Rupali Bank Ltd.\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='b';
    checkans(ans,ans1);
    printf("\n8.Bangladesh has established the first computer and how much it  was the beginning of Ram?\n(a)20kb\t\t(b)64kb\n(c)2mb\t\t(d)4mb\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='a';
    checkans(ans,ans1);
    printf("\n9.What's the name of first microprocessor ever created?\n(a)Intel 2002\t\t(b)Intel 3003\n(c)Intel 4004\t\t(d)AMD 2001\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='c';
    checkans(ans,ans1);
    printf("\n10.What's the name of the company that created the MS-DOS operating system?\n(a)IBM\t\t(b)Apple\n(c)Microsoft\t\t(dJareksa\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='c';
    checkans(ans,ans1);
}
void hard_level(void)
{
   printf("\n\n\t\t*********Hard level********\nHere you have 5 Questions and for each right answer you got 1000000 BDT.\n");
    printf("Press any key to countinue..\n");
    getch();
    level=3;
    char ans,ans1;
    printf("\n11.what is CP/M ?\n(a)Programing language\t\t(b)Application program\n(c)Operating System\t\t(d)Packages software\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='c';
    checkans(ans,ans1);
    printf("\n12.The Internet was actual started in?\n(a)1990\t\t(b)1979\n(c)1969\t\t(d)1993\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='c';
    checkans(ans,ans1);
    printf("\n13.When the first submarine fiber-optic cable is established?\n(a)1983\t\t(b)1986\n(c)1999\t\t(d)1995\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='a';
    checkans(ans,ans1);
    printf("\n14.Where the Submarine cable landing station is located in Bangladesh?\n(a)Dhaka\t\t(b)Cox's Bazar\n(c)Shylet\t\t(d)Khulna\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='b';
    checkans(ans,ans1);
    printf("\n15.Who first added the symbol \'@\' in email address?\n(a)John Carlin\t\t(b)Michael Bay\n(c)Ray Tomlinson\t\t(d)None of them\n");
    fflush(stdin);
    scanf("%c",&ans);
    ans1='c';
    checkans(ans,ans1);
    printf("\n\t\t\t ****************************");
    printf("\n \t\t\t*");
    printf("\n\t\t\t* You have finished the game");
    printf(" *\n");
    printf("                                                     *\n");
    printf("\t\t\t *****************************\n");
}

//result output function
void correct(long int credit)
{
    if(level==1){
        total_credit += creditadd1;
        printf("Your answer is correct.Your win %d BDT.\n",total_credit);
    }
    else if(level==2)
    {
       total_credit += creditadd2;
        printf("Your answer is correct.Your win %d BDT.\n",total_credit);
    }
    else if(level==3)
    {
        total_credit += creditadd3;
        printf("Your answer is correct.Your win %d BDT.\n",total_credit);
    }

}


void worng(void)
{
    printf("Your answer is worng!!!");
}

void error(void)
{
    printf("\a\nYour enter invalid key!!\n\n");
}


