#include<stdio.h>
main()
{
	int a,b,c;
	printf("ENTER a,b:\n");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
}
void sum(int x,int y)
{
	int z;
	z=x+y;
	printf("SUM=%d",z);
}
