#include<stdio.h>

int cube(int n,int x,int a[n][x])
{
	int *ptr = &a[n][x];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
			*ptr=a[i][j]*a[i][j];
			printf("%d ",*ptr);
		}
		printf("\n");
	}
	
}
main()
{
	
	int n,x;
	printf("enter your value :");
	scanf("%d",&n);
	printf("enter your value :");
	scanf("%d",&x);
	int a[n][x];
	cube(n,x,a);
	
}