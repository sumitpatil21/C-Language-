#include<stdio.h>

int main()
{
	int x;
	printf("enter your value :");
	scanf("%d",x);
	if(x>0)
	{
		if(x<100)
		{
			printf("your so older");
		}
		else
		{
			printf("your value is positive ");
		}
	}
	else
	{
		if(x==0)
		{
			printf("your value is neutral ");	
		}
		else
		{
			printf("your value is negitive ");
		}
	}

	
}