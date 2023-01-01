#include<stdio.h>
#include<conio.h>
void main()
{
	int value,i,j;
	getch();
	clrscr();
	printf("enter the value:\n");
	scanf("%d",&value);
	if(value>=1)
	{
		for(i=value;i>=1;i--)
		{
			for(j=1;j<=i;j++)
		       {
				printf("%d\t",i);
		       }
		       printf("\n");
		}
		for(i=1;i<=value;i++)
		{
			for(j=1;j<=i;j++)
			{	printf("%d\t",i);
			}
			printf("\n");
		}
		for(i=value;i>=1;i--)
		{
			for(j=i;j<=value;j++)
			{
				printf("%d\t",i);
			}
			printf("\n");
		}
		for(i=1;i<=value;i++)
		{
			for(j=i;j<=value;j++)
			{
				printf("%d\t",i);
			}
			printf("\n");
		}
	}
	printf("\npress any key to exit");
	getch();
}