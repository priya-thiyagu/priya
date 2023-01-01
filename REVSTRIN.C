#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char name[100];
int value;
getch();
clrscr();
printf("enter the string to be reversed:\n",name);
scanf("%s",&name);
printf("\n the reversed string is :%s",strrev(name));
printf("\n lower casestring is :%s",strlwr(name));
printf("\n uppercase string is :%s",strupr(name));
getch();
}


