#include<stdio.h>

int main()
{
	int x=1;
	int n;
	printf("enter your value n:");
	scanf("%d",&n);
	do
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;
	}while(n>=1);
	
}