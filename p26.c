#include <stdio.h>
int main()
{
struct student
{
	char name[20];
	char RollNo[20];
	float cgpa;
}s1;
printf("Enter student details name,rollno,cgpa:\n");
scanf("%s%s%f",s1.name,s1.RollNo,&s1.cgpa);
printf("Student details are...\n");
printf("Name = %s\nRoll no = %s\nCGPA = %f",s1.name,s1.RollNo,s1.cgpa);

return 0;
}
