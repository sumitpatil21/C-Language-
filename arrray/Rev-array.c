#include<stdio.h>

int main()
{
	int n;
	printf("enter your value :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=n;i>0;i--)
	{
		printf("enter youe a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=n;i>0;i--)
	{
		printf("%d ",a[i]);
		
	}
}