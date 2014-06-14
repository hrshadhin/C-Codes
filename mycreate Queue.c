#include<stdio.h>
void enqueue(int x);
int dequeue(void);
int y;
int head=0;
int tail =0;
int Queue[10];
int count=0;
int main()
{
    int input,i;
    while(1)
    {
	printf("Press:\n1 for enqueue to Queue\t2 for dequeue to Queue\n3 for print array \t4 for Exit.\n");
	scanf("%d",&input);
	if(input==1)
	{
	    printf("Enter value for enqueue to Queue.\n");
	    scanf("%d",&y);
	    enqueue(y);
	}
	else if(input==2)
	{
	    dequeue();
	}
	else if(input==3)
	{
	    for(i=0;i<count;i++)
            {
                printf("%d\n",Queue[i]);
            }
        if(tail==0)
        {
            printf("Queue is empty\n");
        }
        }
        else
        {
            return(0);
        }
    }

    return(0);
}
void enqueue(int x)
{

    Queue[tail] = x;
    tail++;
    count++;

    }
int dequeue(void)
{
    if(head==tail)
    {
        printf("Queue is empty..\n");

    }
    else
    {
        Queue[head]=0;
    int i;
    for(i=0;i<tail;i++)
    {
        Queue[head+i]=Queue[head+(i+1)];
    }

    tail--;
    count--;
    }




}
