#include<stdio.h>

main()
{
	int x;
	int n;
	printf("enter your value :");
	scanf("%d",&n);
	for(x=1;x<=10;x++)
	{
		
		if(x==n)
		{
			continue;
		}
		printf("%d ",x);
	}
}