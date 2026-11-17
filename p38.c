#include <stdio.h>
int binarysearch (int array[],int trgt,int low,int high)
{
	while (low <= high)
	{
		int mid = (low ) + (high - low)/2;
		if (array[mid] == trgt)
		{
			return mid;
		}
		if (trgt > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}
int main ()
{
	int N;
	printf("Enter n :\n");
	scanf("%d",&N);
	
	int i,array[N];
	printf("Enter elements :\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}
	 
	int trgt;
	printf("Enter target to be searched :\n");
	scanf("%d",&trgt);
	 
	int n = sizeof(array)/sizeof(array[0]);
	int low = 0;
	int high = n - 1;
	int result = binarysearch(array,trgt,0,n-1);
	
	if(result == -1)
	{
		printf("Element not found ");
	}
	else
	{
		printf("Element found at [%d] index",result);
	}
	return 0;
}
