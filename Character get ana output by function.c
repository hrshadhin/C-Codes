#include<stdio.h>
#define max 3
void getname(char nam[][20] , int n);
void putname(char pnam[][20], int n);
int main()
{
    char name[max][20];
    getname(name, max);
    putname(name, max);
    printf("");
    return(0);
    }
void getname(char nam[][20] , int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the name of [%d]:",i);
        gets(nam[i]);
        }
    }
void putname(char pnam[][20], int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        printf("the name of [%d] is %s.\n",j,pnam[j]);
        }
    }
