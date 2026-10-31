#include <stdio.h>
#include <string.h>
int main()
{
	char s1[20],s2[20];
	printf("Enter word :\n");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	if(strcmp(s1,s2)==0)
	{
		printf("Given word is palindrome");
	}
	else 
	{
		printf("Not palindrome");
	}
	return 0;
}
