#include<stdio.h>
main()
{
	int a=10,b=20;
	printf("BEFORE SWAP:\n");
	printf("a=%d\nb=%d\n",a,b);
	swap(&a,&b);
	printf("AFTER SWAP:\n");
	printf("a=%d\nb=%d\n",a,b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
