#include <stdio.h>
	struct numbers 
	{
		char rollno[30];
		float cgpa;
	};
	struct student
	{
		char name[10];
		struct numbers num;
	};
	void main()
	{
		struct student std;
	printf("Enter student details...\n");
	scanf("%s%s%f",std.name,std.num.rollno,&std.num.cgpa);
	printf("Student details are...\n");
	printf("Name = %s\nRollno = %s\nCGPA = %f\n",std.name,std.num.rollno,std.num.cgpa);
    }

