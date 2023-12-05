#include<stdio.h>

int main()
{
	int n;
	printf("enter your value :");
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("enter youe a[%d]:",i);
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\n",a[i],j,a[i]*j);
		}
		printf("\n");
	}

	
}