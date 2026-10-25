#include<stdio.h>
main()
{
	int a,b,*ptr1,*ptr2;
	printf("ENTER a,b:\n");
	scanf("%d%d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	if(*ptr1>*ptr2)
	{
		printf("a is greater");
	}
	else if(*ptr2>*ptr1)
	{
		printf("b is greater");
	}
	else
	{
		printf("both are equal");
	}
}
