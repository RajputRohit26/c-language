#include<stdio.h>
#include<conio.h>

void main()
{
     int a[5],i;
     clrscr();
     for(i=0;i<5;i++)
     {
	printf("\nEnter %d Element : ",i);
	scanf("%d",&a[i]);
     }
     getch();
}