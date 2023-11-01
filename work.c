#include<stdio.h>

main()
{
	int x=10;
	int y=11;
	printf("%d\n",!(!(x>=10)||(x<=y)||(x>0)||(x!=y))&&!(y!=0||y>10));
	
}