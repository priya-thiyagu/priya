#include<stdio.h>
#include<conio.h>
void main()
{
	int value,result,i;
	int temp=0;
	getch();
	clrscr();
	printf("enter the number:\n",value);
	scanf("%d",&value);
	if(value>=2)
	{
		for(i=2;i<value;i++)
		{
			result=value%i;
			if(result==0)
			{
				temp++;
				break;
			}
		}

		if(temp!=0)
		{
			printf("\nit's not a prime number and is divisible by %d",i);
		}
		else
		{
			printf("\nit's a prime number");

		}
	  }
	  else
	  {
		printf("\ninvalid input!!!!!!!");
	  }
	  printf("\npress any key to exit");
	  getch();
}


