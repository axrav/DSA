#include <math.h>
#include <stdio.h>

void insertionSort(float arr[], float n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(float arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%f ", arr[i]);
    printf("\n");
}

int main()
{
    int n;
    printf("Enter number of Elements : ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter float values : ");
    for (int i = 0; i < n; i++)
        scanf("%f", &arr[i]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
