#include<stdio.h>
#include<conio.h>

void main()
{
     FILE *f1,*f2,*f3;
     int i,n;
     clrscr();
     printf("\nDATA file content is");
     f1=fopen("DATA","w");
     for(i=1;i<10;i++)
     {
       printf("\nEnter Number : ");
	scanf("%d",&n);
	   if(n==0)
	     {
		break;
	     }
		putw(n,f1);

     }
     fclose(f1);
     f1=fopen("DATA1","r");
     f2=fopen("ODD","w");
     f3=fopen("EVEN","w");
     while((n=getw(f1))!=EOF)
     {
       if(n %2==0)
       {
	 putw(n,f3);
       }
       else
       {
	 putw(n,f2);
       }
     }
     fclose(f1);
     fclose(f2);
     f	close(f3);
     f2=fopen("ODD","r");
     f3=fopen("EVEN","r");
     printf("contents of Odd file : ");


     while((n=getw(f2))!=EOF)
       printf("%3d",n);
       printf("contents of Even file : ");

     while((n=getw(f3))!=EOF)
       printf("%3d",n);
  fclose(f2);
  fclose(f3);
  getch();
}

