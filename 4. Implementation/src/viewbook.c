#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
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