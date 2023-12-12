#include<stdio.h>

void main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	int i,j,sum,k=2;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Anti Diagonal Element :\n");
	for(i=0;i<3;i++)
	{
		printf("%d",a[i][k]);
		sum=sum +a[i][k];
		k--;
		printf("\n");
	}
	printf("sum is :%d",sum);
}