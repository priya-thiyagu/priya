#include<stdio.h>
#include<conio.h>

void main()
{
int firstVal,secVal;
int result;
getch();
clrscr();
printf("enter the first value:",firstVal);
scanf("%d",&firstVal);
printf("enter the second value:",secVal);
scanf("%d",&secVal);
printf("select operation\n");
printf("1.addition\n");
printf("2.subtraction\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("5.modulus\n");
scanf("%d",&result);
switch(result)
{
case 1:printf("result of addition :%d\n",firstVal+secVal);
break;
case 2:printf("result of subtraction:%d\n",firstVal-secVal);
break;
case 3:printf("result of multiplication :%d\n",firstVal*secVal);
break;
case 4:printf("result of division :%d\n",firstVal/secVal);
break;
case 5:printf("result of modulus : %d\n",firstVal%secVal);
break;
default:printf("error!!!,please enter the valid number");
break;
}
printf("press any key to exit");
getch();
exit(0);
}