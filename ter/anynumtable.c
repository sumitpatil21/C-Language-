#include<stdio.h>

int main()
{
	int x,n,sum;
	printf("enter your num :");
	scanf("%d",&n);
	for(x=1;x<=10;x++)
	{
		printf("%d*%d=%d\n",n,x,n*x);
	}
}