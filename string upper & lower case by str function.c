#include<stdio.h>
#include<string.h>
#include<time.h>

int main()
{

    char nam[500];
    printf("Enter your string.\n");
    gets(nam);
    printf("Making Uppercase of your string....\n");
    sleep(8000);
    strupr(nam);
    printf("\n\nUppercase of your string is:");
    puts(nam);
    printf("----------------------------------------------------------\n");
    printf("\n\nMaking lowercase of your string....\n");
    sleep(8000);
    strlwr(nam);
    printf("\n\nLowercase of your string is:");
    puts(nam);
    printf("\n\n\n\n\n\n\n");


    return 0;
}
