/*Write a program to allocate memory dynamically for n integers.
Accept the elements and calculate their sum and average.*/

#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,i,sum=0;
    int *ptr;
    float avg;
    printf("\n Enter how many integers: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
  {
      printf("\n Enter number%d : ",i+1);
      scanf("%d",&ptr[i]);
      sum=sum+ptr[i];
  }
  avg=sum/n;
  printf("\n Sum of numbers = %d\n",sum);
  printf(" Average of numbers = %f",avg);
  return 0;
}

