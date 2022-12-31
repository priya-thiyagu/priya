//to find fibonacci sequence of n numbers
#include<stdio.h>
#include<conio.h>
void main()

{
int firstNum=0,secNum=1,ipnum,temp;
getch();
clrscr();
printf("enter the value:\n",ipnum);
scanf("%d",&ipnum);
if(ipnum>=2)
{
printf("fibonacci series:\n");
printf("%d %d ",firstNum,secNum);
for(int i=2;i<=ipnum;++i)
{
temp=firstNum+secNum;
printf("%d ",temp);
firstNum=secNum;
secNum=temp;
}
}
printf("\npress any key to exit");
getch();
}
