#include<stdio.h>
#include<conio.h>

void main()
{
    int num,sum=0;
    clrscr();
    printf("\nEnter Number :");
    scanf("%d",&num);

       while(num!=0)
       {
	  sum=sum+(num%10);
	  num=num/10;
       }
       printf("\nSum Of Digits : %d",sum);
       getch();
}


