#include<stdio.h>
main()
{
	int a[2][2],i,j,trace=0;
	printf("ENTER ELEMENTS:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("THE MATRIX IS:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
	    if(i==j)
        {
		trace=trace+a[i][j];
	    }
	    }
	}
	printf("TRACE=%d",trace);
}
