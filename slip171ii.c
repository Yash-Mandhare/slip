// Write a program to read a text file and display all the characters such
// that the case is reversed (upper to lower and lower to upper case).



#include <bits/stdc++.h>
  
int main()
{
    // initializing the file pointer
    FILE* fptr;
  
    // name of the file as sample.txt
    char file[50] = { "gfg.txt" };
    char ch;
  
    // opening the file in read mode
    fptr = fopen(file, "r");
    ch = fgetc(fptr);
  
    // converting into upper case
    while (ch != EOF) {
  
        // converting char to upper case
        ch = toupper(ch);
        printf("%c", ch);
        ch = fgetc(fptr);
    }
  
    // closing the file
    fclose(fptr);
  
    return 0;
}