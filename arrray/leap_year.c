#include<stdio.h>

int main()
{
	int i,x,y,size,num=0;
	printf("enter your value x & y");
	scanf("%d%d",&x,&y);
	size=y-x;
	size=size/4+1;
	int a[size];
	for(i=x;i<=y;i++)
	{
		if(i%4==0)
		{
			a[num]=i;
			num++;
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%d ",a[i]);
	}
}