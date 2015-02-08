#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct train{
    int bogie_no;
    struct train *chain;
}*start;

void clearTerminal();
int getInput();
struct train *create_bogie(int bogie_No);
void create_Train();
void insert_at_end(int bogie_no);
void insert_at_beg(int bogie_no);
void insert_at_pos();
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
                  case 3:
                        if(start!=NULL)
                        {
                        clearTerminal();
                        printf("1.Insert at begining of the Train\n");
                        printf("2.Insert at End of the Train\n");
                        printf("3.Insert at Position of the Train\n");
                        printf("4.Back To Previous Menu.\n");
                        printf("\nEnter Your choice : ");
                        fflush(stdin);
                        scanf("%d",&choice);
                         int bg_no;
                        switch(choice)
                        {
                            case 1:
                               insert_at_beg(getInput());
                               printf("Bogie Insert at begining of the Train.\n");
                               break;
                            case 2:
                                insert_at_end(getInput());
                                printf("Bogie Insert at end of the Train.\n");
                                break;
                            case 3:
                                insert_at_pos();
                                break;
                            case 4:
                               break;
                            default:
                                printf("\a\a\aInvalid Input!!!\n");

                        }
                        }
                        else
                        {
                           printf("\a\a\aThere no train is build yet!!!\n");
                        }
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
int getInput()
{
    int bg_no;
    printf("Enter The bogie number:");
    scanf("%d",&bg_no);
    return bg_no;
}
struct train *create_bogie(int bogie_No)
{
    struct train *new_bogie;
    new_bogie = (struct train *)malloc(sizeof(struct train));
    new_bogie->bogie_no=bogie_No;
    new_bogie->chain=NULL;

    return new_bogie;
}
void create_Train()
{
    clearTerminal();
    if(start!=NULL)
    {
        printf("\aTrain already created.You can now add bogies to it!!!\n");

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
    new_bogie = create_bogie(bogie_no);
    ptr=start;
    while(1)
    {
        if(ptr->chain==NULL)
            break;
        else
            ptr=ptr->chain;

    }
    ptr->chain=new_bogie;
}

void insert_at_beg(int bogie_no)
{
    struct train *new_bogie=create_bogie(bogie_no);
    new_bogie->chain=start;
    start=new_bogie;

}
void insert_at_pos()
{
    display();
    int pos,bg_no,i;
    printf("Enter the position where you want to insert a bogie:");
    scanf("%d",&pos);
    pos--;
    struct train *ptr,*new_bogie;
    ptr=start;
    for(i=1;i<pos;i++)
    {
        ptr=ptr->chain;
        if(ptr==NULL)
        {
            printf("Invalid Positon to insert bogie!!!\n");
            return 0;
        }

    }
    bg_no=getInput();
    if(ptr->chain==NULL)
    {
        insert_at_end(bg_no);

    }
    else
    {

        new_bogie=create_bogie(bg_no);
        new_bogie->chain=ptr->chain;
        ptr->chain=new_bogie;
    }
    printf("New Bogie insert at position %d.\n",++pos);
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
