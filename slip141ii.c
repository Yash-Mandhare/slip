// Write a C program to accept names of n cities and search for city
// named “Pune”



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
     int n,flag=0,i;
     char str[50][50];
     printf("\n Enter how many strings? ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
    {
         printf("\n Enter String%d : ",i+1);
         scanf("%s",str[i]);
    }
    for(i=0;i<n;i++)
   {
       if(strcmp(str[i],"Pune")==0)
      {
          flag=1;
          break;
       }
   }
   if(flag==1)
      printf("\n Pune is found..");
   else
      printf("\n Pune NOT found..");
   return 0;
}