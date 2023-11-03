#include<stdio.h>

main()
{
	int x;
	printf("enter your valur :");
	scanf("%d",&x);
	if(x>0)
	{
		if(x>100)
		{
			printf("your so older ");
		}
		else
		{
			printf("your age is a posi");
			
		}
	}
	else
	{
		if(x==0)
		{
			printf("your age is neu");
		}
		else
		{
			printf("your age is neg");
		}
	}
	
}