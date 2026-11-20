#include <stdio.h> //insertion sort with functions in C
int i,j,n;
void insertionsort(int a[],int n)
{

	for(i=1;i<n;i++)
	{
		int temp = a[i];
		j=i-1;
		while(i>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
void printarray(int a[],int n)
{
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n");
}
int main()
{
	int N;
	printf("Enter n value :");
	scanf("%d",&N);
	
	int data[N];
	printf("Enter elements :\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&data[i]);
	}
	
	insertionsort(data,N);
	printf("Sorted array is :\n");
	printarray(data,N);
	
	return 0;
}
