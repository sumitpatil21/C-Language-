#include<stdio.h>

int main()
{
	int x,n,sum;
	for(x=1;x<=10;x++)
	{
		for(n=1;n<=10;n++)
		{
			sum=x*n;
			printf("%d*%d=%d\n",n,x,sum);
    	}
    	printf("\n");
	}
}