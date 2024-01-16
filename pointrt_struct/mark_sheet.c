//2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) 
//using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.

#include<stdio.h>
#include<string.h>

struct student
{
	int rollno,chem, maths, phy;
	char name[50];
};

int main()
{
	struct student s[5];
	char name[200];
 	int i,ans;
 	float result;
 	
 	for(i=0; i<5; i++)
 	{
 		printf("\n\nEnter the details for student : %d",i+1);
 		
		printf("\nEnter the name : ");
		scanf(" %[^\n]s",&s[i].name);
		
		printf("\nEnter the roll no. : ");
		scanf("%d",&s[i].rollno);
		
		printf("\nEnter the chem: ");
		scanf("%d",&s[i].chem);
		
		printf("\nEnter the maths: ");
		scanf("%d",&s[i].maths);
		
		printf("\nEnter the phy: ");
		scanf("%d",&s[i].phy);
	}
	
 	for(i=0; i<5; i++)
 	{
 		printf("\n\nThe Student %d result is below\n",i+1);
 		printf("%s(%d)\n",s[i].name,s[i].rollno);
 		printf("Chemistry   : %d\n",s[i].chem);
 		printf("Mathematics : %d\n",s[i].maths);
 		printf("Physics     : %d\n",s[i].phy);
 		ans = s[i].chem + s[i].maths + s[i].phy;
 		printf("Total       : %d/300\n",ans);
 		result = (ans*100.0)/300;
 		printf("Percent     : %.2f%%",result);
	} 
 	
 	return 0;
}
