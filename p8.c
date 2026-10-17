#include<stdio.h>//function with arguments and with return type
main()
{
	int a=10,b=10,c;
	c=sum(a,b);
	printf("SUM=%d",c);
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
