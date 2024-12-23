#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
     char str1[50],i,palimdrome=1;
     clrscr();
     printf("\nEnter String 1 : ");
     gets(str1);
     printf("\nGiven String 1 is %s",str1);
     strrev(str1);
     printf("\nAfter Reverse String 1 is %s",str1);
     for(i=0;i<
       {
	   printf("\n String 1 is Palindrome :");
       }
       else
       {
	   printf("\nIs not Palindrome :");
       }
     getch();
}