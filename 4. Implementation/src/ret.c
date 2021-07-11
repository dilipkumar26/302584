#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include "../inc/ret.h"
void ret()
{
int bid,sid,d1,d2,dd,m1,m2,md,f,fine=20;
printf("Enter student id");
scanf("%d",&sid);
printf("Enter book id");
scanf("%d",&bid);
printf("Enter date of book issued");
scanf("%d",&d1);
printf("Enter month");
scanf("%d",&m1);
printf("Enter date of book returned");
scanf("%d",&d2);
printf("Enter month");
scanf("%d",&m2);
dd=d2-d1;
md=m2-m1;
printf("Difference in dates");
printf("%d\n",dd);
printf("Difference in month");
printf("%d\n",md);
if(md==0)
{
printf("minimum fine is 20\n");
}
else if(md==1)
printf("%d days fine is %d\n",30+dd,1*20);
//fine=30+fine;

else if(md==2)
printf("%d days Fine is %d\n",60+dd,2*20);
else if(md==3)
printf("%d days fine is %d\n",90+dd,3*20);
//fine=30+fine;

else if(md==4)
printf("%d days Fine is %d",120+dd,4*20);
else if(md==5)
printf("%d days fine is %d\n",150+dd,5*20);
//fine=30+fine;

else if(md==6)
printf("%d Fine is %d\n",180+dd,6*20);

else
printf("Fine is 150");
}
