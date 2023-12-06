#include<stdio.h>

int main()
{
	int n;
	printf("enter your A :");
	scanf("%d",&n);
	int a[n];
	int max;
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter your a[%d]",i);
		scanf("%d",&a[i]);
		
	}

	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("max is :%d ",max);
	
	
	

}