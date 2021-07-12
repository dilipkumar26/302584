#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include "lms_operations.h"
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
