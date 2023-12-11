#include<stdio.h>

int main()
{
	int n;
	printf("Array A :");
	scanf("%d",&n);
	int a[n];
	int i,j;
	
	for(i=0;i<n;i++)
	{
		printf(" a[%d]",i);
		scanf("%d",&a[i]);
	}
	int x;
	printf("ENTER YOUR VALUE :");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==x)
			{
			printf("(%d,%d)",a[i],a[j]);
			}
		}
	}	
}