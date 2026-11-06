#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter n:\n");
	scanf("%d",&n);
	struct student
	{
		char name[20];
		int rollno;
		char branch[10];
	}s[n];
	printf("Enter student details :\n");
	for(i=0;i<n;i++)
	{
		printf("Student [%d] details:\n",i+1);
		scanf("%s%d%s",s[i].name,&s[i].rollno,s[i].branch);
	}
	printf("\n\n----------------------------------------------\n\n");
	//printf("Student details are...\n");
	for(i=0;i<n;i++)
	{
		printf("Student [%d] details are:\n\n",i+1);
		printf("Name = %s\nRollno = %d\nBranch = %s\n\n",s[i].name,s[i].rollno,s[i].branch);
	}
	return 0;
}
