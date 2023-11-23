#include<stdio.h>

main()
{
	int x=1,n,f=1;
	printf("enter your value :");
	scanf("%d",&n);
	start:	
	f = f * x;	
	x++;
	if(x<=n)
	{
		goto start; 
	}

	printf("factorial is : %d",f);
	
}