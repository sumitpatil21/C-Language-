#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==1||j==7||i==2&&(j==3)||i==2&&(j==5)||i==3&&(j==4))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
} 