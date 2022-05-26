// Write a user defined function to calculate the length of a string.
// Use this function in main.


#include<stdio.h>
 
// Prototype Declaration
int FindLength(char str[]);
 
int main() {
   char str[100];
   int length;
 
   printf("\nEnter the String : ");
   gets(str);
 
   length = FindLength(str);
 
   printf("\nLength of the String is : %d", length);
   return(0);
}
 
int FindLength(char str[]) {
   int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
}