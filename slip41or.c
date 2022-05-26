/*Write a program to copy contents of file a.txt to b.txt by changing the
case of each alphabet.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
     FILE *fp1,*fp2;
     char ch;
     fp1=fopen("a.txt","r");
     fp2=fopen("b.txt","w");
     if(!fp1)
        printf("\n Error in reading..");
     if(!fp2)
        printf("\n Error in writing..");
     else
     {
          while((ch=fgetc(fp1))!=EOF)
          {
             if(isupper(ch))
                 fputc(tolower(ch),fp2);
             else
                 fputc(toupper(ch),fp2);
           }
      }
return 0;
}