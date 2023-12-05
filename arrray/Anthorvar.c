#include<stdio.h>

int main()
{
	int b[5]={1,2,3,4,5};
	
	int a[5]={6,7,8,9,10};
	int i,j;
	int c[5];
	for(i=0;i<5;i++)
	{
		printf("enter youe a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("enter youe b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("sum is : %d",c[i]);
}