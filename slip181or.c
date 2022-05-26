// A file “student.txt” contains rollno, name and total_marks. Write a
// program to read this file to display all student details on screen.




#include <stdio.h>

int main() {

char name[50];

       int roll[50];

int marks,i,j,n;

printf("Enter number of students: ");

scanf("%d",&n);

FILE *fptr;

fptr=(fopen("C:\\student.txt","w"));

if(fptr==NULL) {

 printf("Error!");

 exit(1);

}

for (i=0;i<n;++i) {

 printf("For student%d\nEnter name: ",i+1);

 scanf("%s",name);

               printf("For student%d\nEnter roll: ",j+1);

 scanf("%s",roll);

 printf("Enter marks: ");

 scanf("%d",&marks);

 fprintf(fptr,"\nName: %s \nMarks=%d \n",name, roll,marks);

}

fclose(fptr);

return 0;

}