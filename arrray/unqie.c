#include<stdio.h>

int main()
{
	int i,j;
	int acc;
	int n,ch=0;
	int a[5]={2,3,2,4,5};
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]==a[j]&& (i!=j))
			{
				ch=
				1;
			}
		}
		
	}
	if(ch==0)
		{
			printf("%d ",a[i]);
		}
	ch=0;
}