#include<stdio.h>

main()
{
	int x=1;
	int sum=1;
	printf("factorial of 3\n");
	while(x<=3)
	{
		sum=sum*x;
		x++;
	}
	printf("sum is :%d",sum);
}