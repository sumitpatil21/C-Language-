#include<stdio.h>

int main()
{
	int a;
	int x;
	
	printf("enter the value a:");
	scanf("%d",&a);
	while(a>0)
	{
		x=a%10;
		printf("%d",x);
		a=a/10;	
	}
}