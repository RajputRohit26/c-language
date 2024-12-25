#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{
     int que,ans,marks=0;
     clrscr();
     textcolor(3);
     cprintf("\A.Who invented C language?");
     printf("\n\n\t");
     delay(2000);
     textcolor(5);
     cprintf("1.Danish Ritche");
      printf("\n\t");
	delay(1000);
     cprintf("2.Guido Van Russoum");
      printf("\n\t");
	delay(1000);
      cprintf("3.James Bond");
       printf("\n\t");
	delay(1000);
     cprintf("4.James Goslin");
      printf("\n\n");
	delay(2000);
	textcolor(7);
     cprintf("Enter Your choice : ");
     scanf("%d",&ans);
     if(ans==1)
     {
	marks++;
     }
     delay(3000);



	 textcolor(3);
     cprintf("\B.How many types of if available in c?");
     printf("\n\n\t");
     delay(2000);
     textcolor(5);
     cprintf("1.2");
      printf("\n\t");
	delay(1000);
     cprintf("2.3");
      printf("\n\t");
	delay(1000);
      cprintf("3.4");
       printf("\n\t");
	delay(1000);
     cprintf("4.5");
      printf("\n\n");
	delay(2000);
	textcolor(7);
     cprintf("Enter Your choice : ");
     scanf("%d",&ans);
     if(ans==3)
     {
	marks++;
     }
     delay(3000);



     textcolor(3);
     cprintf("\C.How many parameters in for loop?");
     printf("\n\n\t");
     delay(2000);
     textcolor(5);
     cprintf("1.2");
      printf("\n\t");
	delay(1000);
     cprintf("2.1");
      printf("\n\t");
	delay(1000);
      cprintf("3.4");
       printf("\n\t");
	delay(1000);
     cprintf("4.3");
      printf("\n\n");
	delay(2000);
	textcolor(7);
     cprintf("Enter Your choice : ");
     scanf("%d",&ans);
     if(ans==4)
     {
	marks++;
     }
     delay(3000);



      textcolor(3);
     cprintf("\A.Which statement is incorrect in context to while loop?");
     printf("\n\n\t");
     delay(2000);
     textcolor(5);
     cprintf("1.Entry controlled loop");
      printf("\n\t");
	delay(1000);
     cprintf("2.Condition checks first");
      printf("\n\t");
	delay(1000);
      cprintf("3.While is a keyword");
       printf("\n\t");
	delay(1000);
     cprintf("4.There is a semicolon after while");
      printf("\n\n");
	delay(2000);
	textcolor(7);
     cprintf("Enter Your choice : ");
     scanf("%d",&ans);
     if(ans==4)
     {
	marks++;
     }
     delay(3000);
     printf("\nYou Obtained %d Marks",marks);
     getch();
}

