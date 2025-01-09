#include<stdio.h>
#include<conio.h>

void printstrarray(char *str[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
	 printf("\n%s",str[i]);
    }
}
void main()
{
    char *s[5];
    int i;
    clrscr();
    for(i=0;i<5;i++)
    {
	printf("\nEnter String : ");
	scanf("%s",s[i]);
    }
    printstrarray(s,5);
    getch();
}