#include<stdio.h>

int main()
{
	int j,i,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",i%2);
		}
		printf("\n");
	}
}