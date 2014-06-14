#include<stdio.h>

void quicksort(int array[], int p, int r);
int partition(int array[], int p, int r);
int main()
{
    int n;
    printf("How many inputs do you want to enter?\n");
    scanf("%d",&n);
    int array[n];
    int i,p=1,r=n;
    printf("Enter %d intigers.\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nYour given values is now sorting.Please wait..............\n\n\n");
    quicksort(array,p,r);
    int k;
    for(k=1;k<=n;k++)
    {
        printf("%d  ",array[k]);
    }

    return 0;

}
void quicksort(int array[], int p, int r)
{
    if(p<r)
    {
        int q;
        q= partition(array,p,r);
        quicksort(array,p,q-1);
        quicksort(array,q+1,r);
    }
}
int partition(int array[], int p, int r)
{
    int x;
    x=array[r];
    int i=p-1;
    int j,temp1,temp2;
    for(j=p;j<=r-1;j++)
    {
        if(array[j]<=x)
        {
            i++;
            temp1=array[i];
            array[i]=array[j];
            array[j]=temp1;
        }
    }
    temp2=array[i+1];
    array[i+1]=array[r];
    array[r]=temp2;
    return i+1;
}
