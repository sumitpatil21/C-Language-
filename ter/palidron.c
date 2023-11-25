#include<stdio.h>

int main()
{
	int x,n=0,a;
	printf("enter your value :");
	scanf("%d",&x);
	
	a=x;
	
	int r;
	while(x>0)
	{
		r=x%10;
		n=r+(n*10);
		x=x/10;
	}
	
	if(a==n)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
		