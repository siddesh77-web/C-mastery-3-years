#include <stdio.h>

void bubblesort(int arr[], int size)
{
    int step = 0;
    while (step < size - 1)
    {
        int i = 0;
        while (i < size - step - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            i++;
        }
        step++;
    }
}

void printarray(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%3d", arr[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    int n, i = 0;
    int data[100];

    printf("Enter n (up to 100): ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    while (i < n)
    {
        scanf("%d", &data[i]);
        i++;
    }

    printf("Elements before sorting:\n");
    printarray(data, n);

    bubblesort(data, n);

    printf("Elements after sorting:\n");
    printarray(data, n);

    return 0;
}
