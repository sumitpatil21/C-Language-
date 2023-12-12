#include<stdio.h>

void main()
{
	char name[30];
	int i;
	printf("enter your value :");
	scanf("%s",&name);
	
	for(i=0;i<=30;i++)
	{
		if(name[0]>=97&&name[0]<=122)
		{
			name[0]=name[0]-32;	
		}
		else if(name[i]>=65&&name[i]<=90)
		{
			name[i]=name[i]+32;
		}

	}
	printf("%s",name);
}