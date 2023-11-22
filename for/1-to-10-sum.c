#include<stdio.h>

int main()
{
	int x;
	int n;
	int sum=0;
	printf("enter your value n:");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		sum=sum+x;
		printf("%d ",x);
	}
	printf("\nsum is : %d",sum);
}