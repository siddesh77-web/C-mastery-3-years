#include<stdio.h>
main()
{
	int a,b,c;
	printf("ENTER a,b:\n");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("SUM=%d",c);
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
