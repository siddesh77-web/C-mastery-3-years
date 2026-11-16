#include <stdio.h>
int main()
{
	int arr[20],n,i,found = -1,tr;
	int low = 0;
	printf("Enter no of elements :\n");
	scanf("%d",&n);
	printf("Enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int high = n - 1;
	printf("Enter target :\n");
	scanf("%d",&tr);
	
	while(low <= high)
	{
		int mid = (low + high)/2;
		if(tr == arr[mid])
		{
		found = mid;
		break;
	    }
		if(tr > arr[mid])
		{
		low = mid + 1;
	    }
		else
		{ 
		high = mid - 1;
	    }
	}
	if(found == -1)
	{
	printf("Element not found\n");
    }
	else
	{
	printf("element found at %d index\n",found);	 
    }
    return 0;
}

