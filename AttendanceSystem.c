#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define len 10
#define students 40
#define days 2
int main()
{

  //welcome message
  printf("+++++++++++++++++++++++++++++++++\n");
  printf("|  Welcome to attendance system |\n");
  printf("+++++++++++++++++++++++++++++++++\n");

  //some needed variables
  char studentIDs[students][12];
  char courseCode[len]="\0";
  char section[len]="\0";
  int lCounter;//loop counter
  int lCounter2;//loop counter 2

  //get input for course code
  printf("\nEnter the course code:");
  scanf("%s", courseCode);
  //get inpur for section
  printf("\nEnter the section:");
  scanf("%s", section);

  //compare inputs
  if(strcmp(courseCode,"cse123")==0 && strcmp(section,"s")==0){
    //file read write pointer
    FILE *stdIdReadPointer,*stdAtdWritePointer;
    //read students id file 'input.txt'
    stdIdReadPointer = fopen("input.txt","r");
	if(stdIdReadPointer==null){
		printf("'input.txt' file doesn't exists!");
		return 0;
	}
    //message
    printf("Students id is reading.....\n");
    //read 40 students id from file
    for(lCounter=0;lCounter<students;lCounter++){
      fscanf(stdIdReadPointer,"%s\n",studentIDs[lCounter]);
    }
    //close file read pointer
    fclose(stdIdReadPointer);
    printf("Students id reading complete.\n");
    //open attenace file to write
    stdAtdWritePointer = fopen("attendance.txt","a");

    //all students presents holder
    int presents[students]={0};
    //get attenace for x days of all students
    for(lCounter=0;lCounter<days;lCounter++){
      printf("\nAttendance for day:%d",lCounter+1);
      //get attenace for x studens
      for(lCounter2=0;lCounter2<students;lCounter2++){
        printf("\nStudent ID:%s\nIf present press 1 or 0 for absent.\n",studentIDs[lCounter2]);
        int present=0;//present value holder
        scanf("%d",&present);
        //write present to file
        fprintf(stdAtdWritePointer,"%d\n",present);
        presents[lCounter2]+=present;//add current present with previous
      }

    }
    //close attendance file write pointer
    fclose(stdAtdWritePointer);
    //marks calucalation of x students for x days
    printf("\nPresents marks is calculating....\n");
    float marks=0.00;
    printf("\n\n+++++++++++++++++++++++++\n");
    printf("| Student ID  |   Marks |\n");
    printf("+++++++++++++++++++++++++\n");
    for(lCounter2=0;lCounter2<students;lCounter2++){
      marks=(presents[lCounter2]*7)/days;
      printf("|%s  |   %0.2f  |\n",studentIDs[lCounter2],marks);
      printf("|-----------------------|\n");
    }

    //thanks message
    printf("\n\n\n++++++++++++++++++++++++++++++++++++++++\n");
    printf("|           (-:Thank You:-)            |\n");
    printf("|       For using my program.          |\n");
    printf("|       Programmer: H.R.Shadhin		   |\n");
    printf("|       email:hrshadhin.i386@gmail.com |\n");
    printf("|       website:hrshadhin.me           |\n");
    printf("|       ====]:------------:[====       |\n");
    printf("++++++++++++++++++++++++++++++++++++++++\n");
  }
  else{
    //try again message
    printf("++++++++++++++++++++++++++++++++++++++++\n");
    printf("|           Sorry :-)                  |\n");
    printf("|Your inputs are not correct try again.|\n");
    printf("++++++++++++++++++++++++++++++++++++++++\n");
  }
  return 0;
}
