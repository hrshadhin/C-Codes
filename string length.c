#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enetr your string that you want to caculate its length:\n");
    gets(string);
    int len=0,n=0;
    while(string[n] != '\0')
    {
        n++;
        len++;
    }
    printf("the string length is %d",len);
    return 0;
}
