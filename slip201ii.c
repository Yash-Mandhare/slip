// Write a program to accept and display details of 5 students (roll no,
// name, percentage) using structure.




#include<stdio.h>
#include<stdlib.h>
typedef struct Student
{
   int rno;
   char name[50];
   float perc;
};

int main() {
      struct Student s[5];
      int i;
      for(i=0;i<5;i++)
     {
          printf("\n\n Enter Roll no. : ");
          scanf("%d",&s[i].rno);
          printf("\n Enter Name : ");
          scanf("%s",s[i].name);
          printf("\n Enter percentage : ");
          scanf("%f",&s[i].perc);
      }
      printf("\n\n Given details are : ");
      for(i=0;i<5;i++) 
     {
          printf("\n \n Roll number : %d\n",s[i].rno);
          printf("Name : %s \n",s[i].name);
          printf(" Percentage : %f",s[i].perc); 
      }
return 0;
}