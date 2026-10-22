#include<stdio.h>
main()
{
	int c;
	c=sum();
}
void sum()
{
	int a,b,z;
	printf("ENTER a,b:\n");
	scanf("%d%d",&a,&b);
	z=a+b;
	printf("sum=%d",z);
}
