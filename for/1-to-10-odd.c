#include<stdio.h>

int main()
{
	int x;
	int n;
	printf("enter your value n:");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		if(x%2==1)
		{
			printf("%d ",x);	
		}
	}	
}