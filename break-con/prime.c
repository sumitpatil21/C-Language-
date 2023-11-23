#include<stdio.h>

main()
{
	int x=1,n,sum=0;
	printf("enter your value :");
	scanf("%d",&n);
	if(n%3!=0 && n%5!=0 && n%7!=0 && n%11!=0 && n%13!=0 || n==3 || n==5 || n==7 || n==11 || n==13 )
	{
		printf("prime num");
	}
	else
	{
		printf("not prime num");	
	}
}