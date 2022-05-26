/* Write a program to display the command line arguments in reverse order */

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char * argv[])
{
int i;
for(i=argc-1;i>0;i--)
  printf("\n Argument [%d] is : %s",i,argv[i]);
return 0;
}
