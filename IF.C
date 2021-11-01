#include<stdio.h>
#include<conio.h>

int raghul;
void main()
{      while(raghul)
       {
       clrscr();
	       printf("enter raghul's status");
	       scanf("%d",&raghul);
	       if (raghul==0)
	       {
			 printf("raghul is sitting\n");
			// raghul=1;
		       // getch();
		       // continue;
	       }

	       else if(raghul==1)
	       {
			 printf("raghul is standing\n");
			 //break;
	       }
	       else
	       {
			 printf("Invalid Input");
	       }
   }
	 getch();

}