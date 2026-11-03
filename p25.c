#include <stdio.h>
int main()
{
	char s1[50];
	printf("Enter string :\n");
	gets(s1);
	printf("len = %d\n rev = %s\n",strlen(s1),strrev(s1));
	return 0;
}
