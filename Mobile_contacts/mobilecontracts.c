#include<stdio.h>
#include<string.h>
void instruct(void);
void thanks(void);
int main()
{
    FILE *fp;
    fp = fopen("Mobile_contacts.txt","a");
    char name[100];
    int m;
    fprintf(fp,"Name\t\tMobile number\n");
    instruct();

    do
    {
        printf("Enter the name and mobile numbers.\n");
        gets(name);
        fprintf(fp,"%s\n",name);

    }while(strcmp(name,"END") != 0);
    fclose(fp);
    thanks();
    return(0);
}
 void instruct(void)
    {
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("Welcome!!!!!This is a Mobile contacts saver program.when it run \n");
        printf("it gets name and mobile numbers from user.Then it write these data\n");
        printf("into a text file as \"Mobile_contacts\".Enter the name and mobile \n");
        printf("numbers separate by a \"Tab\".When it finish type \"END\".\n");
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
    }
     void thanks(void)
     {
        printf("\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("Thank you for using this program\n");
        printf("It written by Habibur Rahman[shadhin]\n");
        printf("Email:root@hrshadhin.me\n");
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }

