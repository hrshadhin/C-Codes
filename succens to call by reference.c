#include<stdio.h>
#define max 5
void marks( int num[], int size);
void frint( int jan[], int len);
int main()
{  int point[max];
   marks(point, max);
   frint(point, max);


    return(0);
}
void marks( int num[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
    printf("enter ur marks of [%d]\n",i);
    scanf("%d",&num[i]);
    }
    }
void frint( int jan[], int len)
{
    int j;
    for(j=0;j<len;j++)
    {
        printf("the mark of [%d] is %d\n",j,jan[j]);
        }
    }
