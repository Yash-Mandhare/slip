/*Write a program to declare a structure person (name, address) which
contains another structure birthdate (day, month, year). Accept the details
of n persons and display them.*/

#include<stdio.h>
struct date{
int day;
int month;
int year;
};
struct persons {
    char name [50];
    char address[50];
    struct date dob;
    };
 void main()
{
int i,j,n;
struct persons a[50];
{
printf("How many data you want to input?");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter your name ");
scanf("%s",&a[i].name);
printf("Enter your address ");
scanf("%s",&a[i].address);
printf("Enter your Date of Birth (dd/mm/yy)");
scanf("%d%d%d",&a[i].dob.day,&a[i].dob.month,&a[i].dob.year);
}
printf("\n");

for(j=0;j<n;j++)
{
printf("Name :- %s \n ",a[j].name);
printf("Address :- %s \n ",a[j].address);
printf("Date of Birth(dd/mm/yy) :- %d/%d/%d\n",a[j].dob.day,a[j].dob.month,a[j].dob.year );
printf("\n");

}
}
}