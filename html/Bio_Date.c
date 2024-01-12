#include<stdio.h>
#include<string.h>
main()
{
	FILE *fp;
	fp=fopen("Bio_Data.html","w");
	char name[32];
	printf("Enter Your Name :");
	gets(name);
	int age,id;
	
	printf("Enter Your Age :");
	scanf("%d",&age);
	printf("Enter Your Id :");
	scanf("%d",&id);
	
	double number;
	printf("Enter Your Number :");
	scanf("%lf",&number);
	char gender[10];
	printf("Enter Your Gender :");
	scanf("%s",&gender);
	
	fprintf(fp,"<html>");
	fprintf(fp,"<head>");
	fprintf(fp,"<title>");
	fprintf(fp,"HTML_Bio_Date_By_C");
	fprintf(fp,"</title>");
	fprintf(fp,"</head>");
	fprintf(fp,"<body>");
	printf("%s",name);
	fprintf(fp,"<h1>BIO DATE</h1>");
	fprintf(fp,"<h2>Name : %s</h2>",name);
	fprintf(fp,"<h2>Age  : %d</h2>",age);
	printf("\n%d",age);
	fprintf(fp,"<h2>ID   : %d</h2>",id);
	printf("\n%d",id);
	fprintf(fp,"<h2>Number : %.0lf</h2>",number);
	printf("\n%.0lf",number);
	fprintf(fp,"<h2>Gender : %s</h2>",gender);
	printf("\n%s",gender);
	fprintf(fp,"</body>");
	fprintf(fp,"</html>");
	
}