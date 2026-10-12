#include<stdio.h>//to read and print fibonacci series
main()
{
	int a=0,b=1,n,c;
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	n=n-2;
	do
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		n--;
	}while(n>0);
	printf("%d\n",n);
}
