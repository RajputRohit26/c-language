#include<stdio.h>
#include<conio.h>

void printline()
{
    for(int i=0;i<50;i++)
    {
       printf("*");
    }
    printf("\n");
}
void main()
{
    clrscr();
    printline();
    printf("\nWELCOME TO USER DEFINED FUNCTION\n");
    printline();
    getch();
}