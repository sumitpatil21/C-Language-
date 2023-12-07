#include<stdio.h>

int main()
{
	int i,j;
	int acc;
	int n;
	printf("enter your value :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<5;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				acc=a[i];
				a[i]=a[j];
				a[j]=acc;
			}
		}
		printf("%d ",a[i]);
	}
}