#include<stdio.h>
main()
{
	int n;
	printf("enter your value :");
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
		else
		{
			printf("enter your valid num");
		}
	}
	
}

