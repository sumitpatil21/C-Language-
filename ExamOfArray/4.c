#include<stdio.h>

int main()
{
	int n;
	printf("Array A :");
	scanf("%d",&n);
	int a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf(" a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	int b[n];
	printf("Array B :");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf(" b[%d]",i);
		scanf("%d",&b[i]);
	}
	
	int c[n];
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];	
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}
}