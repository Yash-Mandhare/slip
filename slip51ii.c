//Write a program to perform the following operations on two
//strings using standard library functions:
//a. Copy b. Compare



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
 {
     char s1[50],s2[50],s3[50];
     printf("\n Enter String: ");
     scanf("%s",s1);
     printf("\n Length of string = %d",strlen(s1));
     strcpy(s3,s1);
     printf("\n Copied String is : %s",s3);
     printf("\n Enter String2 : ");
     scanf("%s",s2);
     if(strcmp(s1,s2)==0)
        printf("\n Entered strings are equal...");
     else
        printf("\n Entered strings are different..");
  return 0;
}