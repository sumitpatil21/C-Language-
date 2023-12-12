#include<stdio.h>

int main()
{
	
	char a[10];
	printf("enter your value :");
	scanf("%s",&a);
	int i,x=0;
	while(a[x]!='\0')
	{
		x++;
	}
	for(i=x;i>=0;i--)
	{
		printf("%c",a[i]);
		
	}
}