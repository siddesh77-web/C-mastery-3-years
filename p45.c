#include <stdio.h> //selection sort with functions using while loop
int step,i;
void swap(int *a,int *b)
{
	int temp = *a ;
	*a = *b;
	*b = temp;
}
void selectionsort(int a[],int size)
{
	int min, j;
	step = 0;
	while(step < size - 1)
	{
		min = step;
		j = step + 1;
		while(j < size)
		{
			if(a[j] < a[min])
			min = j;
			j++;
		}
		swap(&a[min],&a[step]);
		step++;
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
