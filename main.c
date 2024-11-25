#include <stdio.h>
#include "headers/sorting.h" // Include the header file from the 'headers' folder

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5;

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array using Bubble Sort
    bubbleSortInt(arr, n);
    printf("Sorted array using Bubble Sort: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int arr2[] = {10, 7, 8, 9, 1, 5};
    int n2 = 6;

    // Sort the array using Quick Sort
    quickSortInt(arr2, 0, n2 - 1);
    printf("Sorted array using Quick Sort: ");
    for (int i = 0; i < n2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}