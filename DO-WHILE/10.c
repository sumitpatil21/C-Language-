#include<stdio.h>

int main()
{
	int x=1;
	int n;
	printf("enter your value n:");
	scanf("%d",&n);
	do
	{
		printf("%d*%d=%d\n",n,x,n*x);
		x++;
	}while(x<=10);
	
}