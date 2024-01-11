#include<stdio.h>
#include<string.h>
struct student 
{
	int stu_id;
	char stu_name[50];
	int stu_age;
	char stu_course[50];
	char stu_city[50];
	int stu_standard;
	char stu_school[50];
};
int main()
{
	struct student s[3];

	int name[50];
	
	int i,j;
	for(i=0;i<3;i++)
	{
			printf("enter student NAME s[%d] :",i);
			gets(s[i].stu_name);
			printf("enter student ID :");
			scanf("%d",&s[i].stu_id);
			printf("enter student AGE :");
			scanf("%d",&s[i].stu_age);
			printf("enter student COURSE :");
			scanf("%s",&s[i].stu_course);
			printf("enter student SCHOOL :");
			scanf("%s",&s[i].stu_school);
			printf("enter student STANDARD:");
			scanf("%d",&s[i].stu_standard);
			printf("enter student CITY :");
			scanf("%s",&s[i].stu_city);	
	}
	
	for(i=0;i<3;i++)
	{
		printf("s[%d]NAME : %s\n",i,s[i].stu_name);
		printf("s[%d]ID : %d\n",i,s[i].stu_id);
		printf("s[%d]AGE : %d\n",i,s[i].stu_age);
		printf("s[%d]COURSE : %s\n",i,s[i].stu_course);
		printf("s[%d]SCHOOL: %s\n",i,s[i].stu_school);
		printf("s[%d]STANDARD : %d\n",i,s[i].stu_standard);
		printf("s[%d]CITY : %s\n",i,s[i].stu_city);
		printf("\n");
	}

}