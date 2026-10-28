#include <stdio.h>
#include <string.h>

main()
{
    char s1[100];
    char s2[100];
    printf("Enter a string: ");
    gets(s1);
    strcpy(s2, s1);
    if (strcmp(strrev(s2), s1) == 0)
	{
        printf("palindrome\n");
    }
	else 
	{
        printf("not palindrome\n");
    }
}
