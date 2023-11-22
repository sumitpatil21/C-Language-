#include<stdio.h>

int main()
{
	int x;
	int n;
	printf("enter your value n:");
	scanf("%d",&n);
	for(n;n>=1;n--)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
	}
	
}