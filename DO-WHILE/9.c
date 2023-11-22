#include<stdio.h>

int main()
{
	int x=1;
	int n;
	int sum=1;
	printf("enter your value n:");
	scanf("%d",&n);
	do
	{
		sum=sum*x;
		printf("%d ",x);
		x++;
	}while(x<=n);
	printf("\nsum is : %d",sum);
}