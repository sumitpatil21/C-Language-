#include<stdio.h>
#include<string.h>
int main()
{
	char name[30];
	printf("enter your name :");
	gets(name);
	int i;
	if(name[0]>=97&&name[0]<=122)
	{
		name[i]=name[i]-32;	
	}
	for(i=1;i<=30;i++)
	{
		if(name[i-1]==' ')
		{
			if(name[i]>=97&&name[i]<=122)
			{
				name[i]=name[i]-32;
			}
		}
		else if(name[i]>=65&&name[i]<=90)
		{
			name[i]=name[i]+32;
		}
		else if(name[i]==' ')
		{
				name[i+1]=name[i+1]-32;
		}
	}
	puts(name);
}