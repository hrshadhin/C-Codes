#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct train{
    int bogie_no;
    struct train *chain;
}*start;

void clearTerminal();
void create_Train();
void insert_at_end(int bogie_no);
void display();
int main()
{
    int choice;
    start=NULL;
    while(1){
              clearTerminal();
              printf("1.Create Train\n");
              printf("2.Display Train\n");
              printf("3.Insert Bogie into Train\n");
              printf("4.Remove Bogie from Train\n");
              printf("5.Search Bogie into Train\n");
              printf("6.Reverse the Train\n");
              printf("7.Exit");
              printf("\nEnter Your choice : ");
              fflush(stdin);
              scanf("%d",&choice);
              clearTerminal();
              switch(choice)
              {
                  case 1:
                     create_Train();
                      break;
                  case 2:
                        display();
                        break;
                  case 7:
                        exit(1);
                  default:
                      printf("\a\a\aInvalid Input!!!\n");

              }

             printf("Press [Enter] key to continue.\n");
             getchar();
             getchar();
    }


    return 3;
}
void clearTerminal()
{
    system("clear");
}
void create_Train()
{
    clearTerminal();
    if(start!=NULL)
    {
        printf("\aTrain already created.You can now add bogies to it!!!");

    }
    else
    {
        int no_of_bogies,counter;

        printf("How many bogies you want to add?:");
        scanf("%d",&no_of_bogies);

        struct train *temp;
        temp = (struct train *)malloc(sizeof(struct train));

        for(counter=1;counter<=no_of_bogies;counter++)
        {
            int number;
            printf("Enter the Number of %d th bogie:",counter);
            scanf("%d",&number);
            if(start==NULL)
            {
              temp->bogie_no=number;
              temp->chain=NULL;
              start=temp;
            }
            else
            {
                insert_at_end(number);
            }
        }
        printf("Train is created with %d bogies.\n",--counter);


    }

}
void insert_at_end(int bogie_no)
{
    struct train *new_bogie,*ptr;
    new_bogie = (struct train *)malloc(sizeof(struct train));
    ptr=start;
    while(1)
    {
        if(ptr->chain==NULL)
            break;
        else
            ptr=ptr->chain;

    }

    new_bogie->bogie_no=bogie_no;
    new_bogie->chain=NULL;
    ptr->chain=new_bogie;
}
void display()
{
    if(start!=NULL)
   {
    struct train *ptr;
    ptr=(struct train *)malloc(sizeof(struct train));
    ptr=start;
    printf("Train Bogies are:\n");
   while(ptr!=NULL)
   {
        printf("%d--->",ptr->bogie_no);
        ptr=ptr->chain;

   }
   printf("End_Of_Train.\n");
   }
   else
   {
    printf("\a\a\aThere no train is build yet!!!\n");
   }

}

