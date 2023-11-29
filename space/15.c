#include<stdio.h>

int main()
{
	char j,i,k;
	for(i='A';i<='E';i++)
	{
		for(k='B';k<=i;k++)
		{
			printf(" ");
		}
		for(j=i;j<='E';j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}