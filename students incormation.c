#include <stdio.h>
#include<string.h>

int main()
{
    FILE *fp;

    fp = fopen("DIU.students.info.text","a");
    int n;
    printf("How many students information do you want to store?\n");
    scanf("%d",&n);
	struct studentsinfo
	{
	    char name[40];
	    long int id;
	    char dept[30];
	    int  level;
	    int term;
	    char semester[10];
	    char mobile_no[15];
	}DIU_students_info[n];
	int i;
	printf("\nPlease give the students info below:\n");
	for(i=0;i<n;i++)
	{
	    fprintf(fp,"\n\t\t\tSudents Information\n");
	    printf("\nName:");
	    scanf("%s",&DIU_students_info[i].name);
	    fprintf(fp,"Name:%s\n",DIU_students_info[i].name);
	    printf("\nID:");
	    scanf("%d",&DIU_students_info[i].id);
	    fprintf(fp,"ID:%d\n",DIU_students_info[i].id);
	    printf("\nDepertment:");
	    scanf("%s",&DIU_students_info[i].dept);
	    fprintf(fp,"Depertment:%s\n",DIU_students_info[i].dept);
	    printf("\nLevel:");
	    scanf("%d",&DIU_students_info[i].level);
	    fprintf(fp,"Level:%d\n",DIU_students_info[i].level);
	    printf("\nTerm:");
	    scanf("%d",&DIU_students_info[i].term);
	    fprintf(fp,"Term:%d\n",DIU_students_info[i].term);
	    printf("\nSemester:");
	    scanf("%s",&DIU_students_info[i].semester);
	    fprintf(fp,"Semester:%s\n",DIU_students_info[i].semester);
	    printf("\nMobile No:");
	    scanf("%s",&DIU_students_info[i].mobile_no);
	    fprintf(fp,"Mobile No:%s\n",DIU_students_info[i].mobile_no);
	    fprintf(fp,"---------@---------");
	    if(i==n-1)
	    {

	    }
	    else printf("\n\t\tNext>>\n");

	}
    i=0;
    printf("\t\t\nStudents Information:\n");
    for(i=0;i<n;i++)
    {
        printf("\nName:\"%s\"",DIU_students_info[i].name);
        printf("\nID:%d",DIU_students_info[i].id);
	    printf("\nDepertment:%s",DIU_students_info[i].dept);
	    printf("\nLevel:%d",DIU_students_info[i].level);
	    printf("\nTerm:%d",DIU_students_info[i].term);
	    printf("\nSemester:%s",DIU_students_info[i].semester);
	    printf("\nMobile No:%s",DIU_students_info[i].mobile_no);
	    printf("\n@------------------------@");
    }


	return 0;


}
