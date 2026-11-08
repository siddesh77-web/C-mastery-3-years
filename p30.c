#include <stdio.h>
struct number
{
	char rollno[20];
	float cgpa;
};
struct student 
{
	char name[50];
	struct number num;
};
void main()
{
	int i,n;
	printf("Enter n :\n");
	scanf("%d",&n);
	struct student std[n];
	printf("Enter student details...\n");
	for(i=0;i<n;i++)
	{
		printf(" Enter student [%d] details :\n",i+1);
		scanf("%s%s%f",std[i].name,std[i].num.rollno,&std[i].num.cgpa);
	}
	printf(" student details are:\n",i+1);
	for(i=0;i<n;i++)
	{
		printf("Student [%d] details :\n",i+1);
		printf("Name = %s\nRollno = %s\nCGPA = %f\n",std[i].name,std[i].num.rollno,std[i].num.cgpa);
	}
}
