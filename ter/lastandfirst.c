#include<stdio.h>

int main()
{
	int x;
	printf("enter your value :");
	scanf("%d",&x);
	int l=x%10;
	int f;
	while(x>9)
	{
		x=x/10;
	}	
	f=x;
	printf("sum is :%d+%d=%d",f,l,f+l);
}