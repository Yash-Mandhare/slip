// Write a program to find the length of a string using standard library
// function.


#include<stdio.h>
#include<string.h>
 
int main() {
   char str[100];
   int len;
 
   printf("\nEnter the String : ");
   gets(str);
 
   len = strlen(str);
 
   printf("\nLength of Given String : %d", len);
   return(0);
}