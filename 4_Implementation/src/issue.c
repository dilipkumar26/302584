#include<stdio.h>
#include<string.h>
#include "../inc/lms_operations.h"
void issue()
{
FILE *fp;
int acno;
struct book b;
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