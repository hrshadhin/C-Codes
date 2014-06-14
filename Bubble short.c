#include<stdio.h>

int main()
{
    int i,te,k,temp;
    printf("Enter how many elements in the array>\n");
    scanf("%d",&te);//Get total number of array elements by user
    int data[te];
    printf("Input %d intergers>\n",te);
    for(i=0;i<te;i++)//get inputs
    {
        scanf("%d",&data[i]);
    }
    for(k=0;k<te;k++)
    {
        i=0;
        while(i<te-1)
        {
            if(data[i]>data[i+1])
            {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
            i=i+1;
        }
    }
    printf("After bubble short (ascending order)\nThe numbers are:\n");
    for(i=0;i<te;i++)
    {
        printf("%d\t",data[i]);

    }
     printf("\n\nAfter bubble short (descending order)\nThe numbers are:\n");
     for(k=0;k<te;k++)
    {
        i=0;
        while(i<te-1)
        {
            if(data[i]<data[i+1])
            {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
            i=i+1;
        }
    }
      for(i=0;i<te;i++)
    {
        printf("%d\t",data[i]);

    }
    return(0);


}
