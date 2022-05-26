// Write a program to accept ‘n’ employee details (eno, ename, salary) and
// display all employee details whose salary is more than 10000, by passing
// array of structure to the function.



#include<stdio.h>
#include<stdlib.h>
typedef struct Employee
{
    int eno;
    char name[30];
    float salary;
};
int main()
{
    struct Employee e[50];
    int n,i;
    printf("\n How many employees? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
   {
      printf("\n Enter employee no.%d : ",i+1);
      scanf("%d",&e[i].eno);
      printf("\n Enter employee name%d : ",i+1);
      scanf("%s",e[i].name);
      printf("\n Enter salary : ");
      scanf("%f",&e[i].salary);
    }
    // defining function
    void display_max(struct Employee e[50])
   {
       printf("\n\n Employee Details are : ");
       for(i=0;i<n;i++)
      {
         if(e[i].salary>10000)
        {
           printf("\n\n Employee no. : %d",e[i].eno);
           printf("\n Employee Name : %s",e[i].name);
           printf("\n Salary : %f",e[i].salary);
         }
      }
  }
   // calling function
   display_max(e);
   return 0;
}