#include<stdio.h>
main()
{
	int a[10],sum=0,i;
	printf("Enter elements:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("SUM OF ELE:\n");
	for(i=0;i<10;i++)
	sum=sum+a[i];
    {
		printf("%d\t",sum);
	}
}
