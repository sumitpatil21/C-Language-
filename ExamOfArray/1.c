#include<stdio.h>

int main()
{
	int n;
	printf("enter your value :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf(" a[%d]",i);
		scanf("%d",&a[i]);
	}
	int j,ch;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			ch=1;
			if(a[i]==a[j])
			{
			a[j]=-1;
			}	
		}	
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			printf("%d",a[i]);
		}
	}
}