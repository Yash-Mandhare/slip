/*Write a program to create student structure having fields roll no,
name. Accept details of one student and write a function to
display the details.*/


#include<stdio.h>
typedef struct Student
{
    int rno;
    char name[30];
}

int main() {
   struct Student s;
   printf("\n Enter Roll Number : ");
   scanf("%d",&s.rno);
   printf("\n Enter Student name : ");
   scanf("%s",s.name);
   void display(struct Student s1)
  {
     printf("\n Roll Number is : %d",s1.rno);
     printf("\n Name is : %s",s1.name);
   }
     printf("\n\n Details of Student are :");
    display(s);
     return 0;
}