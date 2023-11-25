#include<stdio.h>

int main()
{
	int x;
	int n;
	printf("enter your value :");
	scanf("%d",&n);
	for(x=10;x>=1;x--)
	{
		printf("%d*%d=%d\n",n,x,n*x);
		
	}
}