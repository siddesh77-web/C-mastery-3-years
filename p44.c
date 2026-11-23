#include <stdio.h> //selection search by initializing an arrray with functions
void selectionSort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min = j;
		}
		int temp = a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
int main()
{
	int a[]={10,9,8,7,6};
	int size = 5;
	int i;
	selectionSort(a,size);
	printf("sorted elements :\n");
	for(i=0;i<size;i++)
	{
		printf("%4d",a[i]);
	}
}
