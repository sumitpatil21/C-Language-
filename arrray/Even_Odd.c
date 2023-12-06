#include<stdio.h>

int main()
{
	int i,j,n;
	printf("enter your value :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("even : %d \n",a[i]);
		}
		else
		{
			printf("odd :  %d\n",a[i]);
		}
		
	}

}