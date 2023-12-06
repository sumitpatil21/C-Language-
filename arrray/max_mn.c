#include<stdio.h>

int main()
{
	int i,j,n;
	printf("enter your value :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	int max,mn ;
	mn=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<mn)
		{
			mn=a[i];
		}
		
	}
	printf("max is a:%d\n",max);
	printf("mn is a:%d\n",mn);
}