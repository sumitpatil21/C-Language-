#include<stdio.h>
#include<string.h>
int main()
{
	char name[30];
	gets(name);
	char *ptr=&name;
	int l=0;
	while(*ptr!='\0')
	{
		l++;
		ptr++;
	}
	printf("Length is :%d",l);

}