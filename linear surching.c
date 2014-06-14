# include <stdio.h>
#include<string.h>
#define MAX 5
int main ()
{
string name[40],surch_name;
int i;
for(i=0;i<MAX;i++){

printf("Enter the students name of [%d]:",i);
scanf("%[^\n]",name);
}
printf("Enter the name which u want to surch?\n");
scanf("%[^\n]",surch_name);
for (i = 0; i < MAX; i++)
{
if(strcmp(name,surch_name))
break;
}
if (i == MAX)
printf("%s was not found\n",surch_name);
else
printf("\n%s was found at position %d",surch_name, i);

/*for(i=0;i<=4;i++)
{
    printf("the sscor of [%d] is %d\n",i,num[i]);
    }*/
return(0);
}
