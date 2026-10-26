#include<stdio.h>
main()
{
	int i,*ptr;
	ptr=&i;
	for(i=1;i<=10;i++)
	{
		printf("%d\t",i);
	}
	printf("\n\n");
	for(i=10;i>=1;i--)
	{
		printf("%d\t",i);
	}
}
