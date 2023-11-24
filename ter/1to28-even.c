#include<stdio.h>

main()
{
	int x=1;
	int sum=0;
	for(x=1;x<=28;x++)
	{
		if(x%2==0)
		{
			printf("%d ",x);
			sum=sum+x;
		}
		
	}
	printf("\nsum is %d",sum);

	
}