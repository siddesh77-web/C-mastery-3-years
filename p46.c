#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int a[], int size) 
{
    if (size <= 1) 
	{
        return;
    }

    int step = 0;
    do 
	{
        int min = step;
        int j = step + 1;

        if (j < size) 
		{
            do 
			{
                if (a[j] < a[min]) 
				{
                    min = j;
                }
                j++;
            } while (j < size);
        }

        if (min != step) 
		{
            swap(&a[min], &a[step]);
        }
        step++;
    } while (step < size - 1);
}

void printarray(int a[], int size) 
{
	int i;
    for (i = 0; i < size; i++) 
	{
        printf("%4d", a[i]);
    }
    printf("\n");
}

int main()
{
	int n,i,size;
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
