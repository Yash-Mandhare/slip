// Write a C program to accept three integers as command line
// arguments and find the maximum of the three.






#include<stdio.h>
#include<conio.h>
void main(int argc , char * argv[])
{
            int i,sum=0;
            float avg;
            int max;
            int min;
            clrscr();

            if(argc!=4)
              {
              printf("you have forgot to type numbers.");
              exit(1);
              } 
            for(i=1;i<argc;i++)
             {
                        sum = sum + atoi(argv[i]);
                        avg=sum/3;
                        }
             printf("the average is%f",avg);

             //for max
             max=argv[1];
             min=argv[1];
                        for(i=1;i<argc;i++)
                          {
                        if(atoi(argv[i])>max)
                         {
                         max=atoi(argv[i]);
                         }
                         }
                            if(atoi(argv[i])<min)
                         {
                         min=atoi(argv[i]);
                         }
  printf("\n the maximum number is %d",max);
              printf("\n the minimum number is %d",min);
                          getch()
}