#include <stdio.h> //bubble sort using functions
int step , i;
void bubblesort(int arr[],int size)
{
	for(step=0;step<size-1;step++)
	{
		for(i=0;i<size-step-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
}
void printarray(int arr[],int size)
{
	for(i=0;i<size;i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
}
int main()
{
	int n,size;
	
	printf("Enter n :");
	scanf("%d",&n);
	
	int data[n];
	size = sizeof(data)/sizeof(data[n]);
	printf("Enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	
	printf("Elements before sorting :\n");
	printarray(data,size);
	
	bubblesort(data,size);
	
	printf("Elements after sorting :\n");
	printarray(data,size);
	 
	return 0;
}
