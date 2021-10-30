#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=50,tea=50,vada=200;
   int aidly,adosa,atea,avada;
   int midly,mdosa,mtea,mvada;
   int baidly,badosa,batea,bavada;
   clrscr();
   //scanf("%d%d",&aidly,&adosa,&atea,&avada);
   printf("Enter Ani's idly\n:",aidly);
   scanf("%d",&aidly);
   printf("Enter Moni'sidly\n:",midly);
   scanf("%d",&midly);
   printf("Enter Ani's dosa\n:",adosa);
   scanf("%d",&adosa);
   printf("Enter Moni's dosa\n:",mdosa);
   scanf("%d",&mdosa);
   printf("Enter Ani's tea\n:",atea);
   scanf("%d",&atea);
   printf("Enter Moni's tea\n:",mtea);
   scanf("%d",&mtea);
   printf("Enter Ani's vada\n:",avada);
   scanf("%d",&avada);
   printf("Enter Moni's vada\n:",mvada);
   scanf("%d",&mvada);
   idly=idly-aidly-midly;
   dosa=dosa-adosa-mdosa;
   tea=tea-atea-mtea;
   vada=vada-avada-mvada;
   printf("Balance\nidly\t%d\ndosa\t%d\ntea\t%d\nvada\t%d",idly,dosa,tea,vada);
   getch();
}


