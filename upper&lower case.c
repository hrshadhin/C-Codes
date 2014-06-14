
#include<stdio.h>
#include<string.h>
#include<time.h>
int main()
{

    char nam[1000];
    printf("Enter your name\n");
    gets(nam);
    printf("Your name in Uppercase:\n");
    int n=0;
    while(nam[n] != '\0')
    {
        nam[n] = toupper(nam[n]);
        n++;
    }
    puts(nam);
    printf("Your name in Lowercase:\n");
    n=0;
    while(nam[n] != '\0')
    {
        nam[n] = tolower(nam[n]);
        n++;
    }
    puts(nam);


    return 0;
}
