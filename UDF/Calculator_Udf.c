#include<stdio.h>

int calculator()
{
	int n1;
	int n2;
	char op;
	printf("enter your op:");
	scanf(" %c",&op);
	printf("enter n1 :");
	scanf("%d",&n1);
	printf("enter n2 :");
	scanf("%d",&n2);
	
	
	switch(op)
	{
		case '+':printf("%d + %d : %d",n1,n2,n1+n2);
		break;
		case '-':printf("%d - %d : %d",n1,n2,n1-n2);
		break;
		case '*':printf("%d * %d : %d",n1,n2,n1*n2);
		break;
		case '/':printf("%d / %d : %d",n1,n2,n1/n2);
		break;
		default:printf("Error:enter valid value................");
	}
	printf("\n");
	calculator(); 
}
int main()
{
	calculator();
}