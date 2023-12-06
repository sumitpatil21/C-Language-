#include<stdio.h>

int main()
{
	int n;
	printf("enter your A :");
	scanf("%d",&n);
	int a[n];
	int sum;
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter your a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		sum=a[i]*a[i];
		printf("square is %d\n",sum);
	}
	
	
	

}