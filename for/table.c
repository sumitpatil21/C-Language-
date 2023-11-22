#include<stdio.h>

int main()
{
	int x;
	int n;
	int sum=1;
	printf("enter your value n:");
	scanf("%d",&n);
	for(x=1;x<=10;x++)
	{
	
		printf("%d*%d=%d\n",n,x,x*n);
	}

}