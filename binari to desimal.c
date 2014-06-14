#include<stdio.h>

int main()
{
int i,j,x;
x=0;
i=1;
j=10;
printf("enter ur nember\n");
scanf("%d",&x);
while ( x > ( j-1 ) ){
i=i+1;
j=j*10;
}
printf("The number is %d and it has %d length>>>\n",x,i);

int k,sum;
sum=0;
for(k=0;k<i;k=k+1)
{
    sum = sum+pow(2,k);
}
printf("the decimal number is %d",sum);



return(0);
}

