#include<stdio.h>

int main()
{
	int n;
	printf("enter your value :");
	scanf("%d",&n);
	int a[n];
	int i,sum;
	for(i=0;i<n;i++)
	{
		printf("enter youe a[%d]:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum is :%d",sum);
	
}