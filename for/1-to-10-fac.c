#include<stdio.h>

int main()
{
	int x;
	int n;
	int fac=1;
	printf("enter your value n:");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		fac=fac*x;
		printf("%d ",x);
	}
	printf("\nfactorial is : %d",fac);
}