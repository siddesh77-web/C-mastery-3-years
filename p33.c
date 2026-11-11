#include <stdio.h>
int binarysearch(int array[],int trgt,int low,int high)
{
	while (low <= high)
	{
		int mid = (low + high)/2;
		
		if(trgt == array[mid])
		   return mid;
		   
		if(trgt > mid) 
		  low = mid +1;
		  
		else
		high = mid - 1;    
	}
	
	return -1;
}
int main ()
{
	int array[]={1,2,3,4,5,6,7};
	int trgt = 7;
	int n = sizeof(array)/sizeof(array[0]);
	int result = binarysearch(array,trgt,0,n-1);
	
	if (result == -1)
	
	printf("Element not found");
	 
	else
	
	printf("Element found at index %d",result); 
	
	return 0;
}
