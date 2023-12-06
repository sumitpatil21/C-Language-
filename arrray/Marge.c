#include<stdio.h>

int main()
{
	int n;
	printf("enter your A :");
	scanf("%d",&n);
	int a[n];

	int i;
	for(i=0;i<n;i++)
	{
		printf("enter your a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	
	int x;
	printf("enter your B :");
	scanf("%d",&x);
	int b[x];
	

	for(i=0;i<x;i++)
	{
		printf("enter your b[%d]",i);
		scanf("%d",&b[i]);
	}
	
	int c[n+x];
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<x;i++)
	{
		c[i+n]=b[i];
	}
	for(i=0;i<n+x;i++)
	{
		printf("%d ",c[i]);
	}

}