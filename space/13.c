#include<stdio.h>

int main()
{
	char j,i,k;
	for(i='A';i<='E';i++)
	{
		for(k=i;k<='E';k++)
		{
			printf(" ");
		}
		for(j=i;j>='A';j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}