#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
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