#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
int accno;
char title[20];
char author[20];
char isavail[3];
}b,bk;
void addbook();
void viewbook();
void issue();
void ret();
int main()
{
int c;
//clrscr();
printf("\n\t\t\t\t WELCOME TO LIBRARY");
do
{
printf("\n Enter your choice\n1.ADD BOOK \n2.VIEW BOOK \n3.ISSUE\n4.RENEWAL\n5.EXIT");
scanf("%d",&c);
switch(c)
{
case 1:addbook();
break;
case 2:viewbook();
break;
case 3:issue();
break;
case 4:ret();
break;
case 5:exit(0);
break;
}
}while(c!=5);
}
void addbook()
{
int n,i;
FILE *fp;
fp=fopen("abc.txt","a");
printf("\n Enter number of books you want to add to library");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf(" \nEnter new acc number for new book");
scanf("%d",&b.accno);
printf("\n Enter title of the book");
//flushall();
gets(b.title);
printf("\n Enter author of the book");
//flushall();
gets(b.author);
strcpy(b.isavail,"yes");
fprintf(fp,"\n %d %s %s %s",b.accno,b.title,b.author,b.isavail);
}
fclose(fp);
}
void viewbook()
{
FILE *fp;
int i;
printf("\n Books in Library\n");
fp=fopen("abc.txt","r");
if(fp==NULL)
{
printf("\n File cannot open");
return;
}
printf("\n**********BOOKS IN LIBRARY*****************\n");
printf("\nACNO\t\tBOOK TITLE\tAUTHER\tAVAILABLE\n");
while(!feof(fp))
{
fscanf(fp,"%d%s%s%s",&bk.accno,bk.title,bk.author,bk.isavail);
printf("\n%d\t\t %s\t\t %s\t\t %s",bk.accno,bk.title,bk.author,bk.isavail);
}
fclose(fp);
}
void issue()
{
FILE *fp;
int acno;
struct book bk;
printf("\n *****BOOKS IN LIBRARY\n");
viewbook();
fp=fopen("abc.txt","r");
if(fp==NULL)
{
printf("\n File cannot open");
return;
}
printf("\n Enter ACNO of book from above list  for issue:");
scanf("%d",&acno);
while(!feof(fp))
{
fscanf(fp,"%d%s%s%s",&bk.accno,bk.title,bk.author,bk.isavail);
if(bk.accno==acno )
{
if(strcmp(bk.isavail,"yes")!=0)
{
printf("\n BOOK NOT Available");
return;
}
else
{
printf("\n Book ISSUED");
return;
}
}
else
{
printf("\n No book with given ACCNO");
return;
}
}
}
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
