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
			if(j%2)
			{
				printf("-");
			}
			else
			{
				printf("|");
			}
		}
		printf("\n");
	}
}