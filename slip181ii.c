// ii. Write a program to perform the following operations on strings using
// standard library functions:
// a. Copy one string to another
// b. Convert a string to uppercase


#include<stdio.h>
int main()
{
    char s1[1000],s2[1000];  
    int i;
 
    printf("Enter any string: ");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)  //  or  for(i=0;s1[i];i++)
    {
    	s2[i]=s1[i];
	}
	s2[i]='\0';
 
    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'",s2);
 
 
    return 0;
}

#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str1[100];
  	int i;
 
  	printf("\n Please Enter a String that you want to Convert into Uppercase :  ");
  	gets(Str1);
  	
  	for (i = 0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'a' && Str1[i] <= 'z')
  		{
  			Str1[i] = Str1[i] -32;
		}
  	}

  	printf("\n The given String in Upper Case = %s", Str1);
  	
  	return 0;
}