#include <stdio.h> //selection sort with functions
int step,i;
void swap(int *a,int *b)
{
	int temp = *a ;
	*a = *b;
	*b = temp;
}
void selectionsort(int a[],int size)
{
	int min;
	for(step = 0;step < size - 1;step++)
	{
		min = step;
		for(i = step+1;i<size;i++)
		{
			if(a[i] < a[min])
			min = i;
		}
		swap(&a[min],&a[step]);
	}
}
void printarray(int a[],int size)
{
	for(i = 0;i<size;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
}
int main()
{
	int n,size;
	printf("Enter n value :");
	scanf("%d",&n);
	
	int data[n];
	size = sizeof(data)/sizeof(data[n]);
	printf("Enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	
	selectionsort(data,size);
	printf("Sorted array is :\n");
	printarray(data,size);
	
	return 0;
}
