//Write a C program to find maximum of two numbers using macro.



#include<stdio.h>
#define MAX(a,b) (a>b?a:b)
int main()
{
  int n1,n2,max;
  printf("\n Enter two numbers : ");
  scanf("%d%d%d",&n1,&n2);
  max=MAX(n1,n2);
  printf("\n Maximum of three numbers = %d",max);
  return 0;
}