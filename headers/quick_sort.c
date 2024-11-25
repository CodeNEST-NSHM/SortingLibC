#include "sorting.h"

/**
 * @brief Sorts an array of integers in ascending order using Quick Sort algorithm.
 *
 * This function implements the Quick Sort algorithm by recursively partitioning the
 * array into smaller sub-arrays and sorting them. The array is divided based on a pivot element.
 *
 * @param arr A pointer to the array of integers to be sorted.
 * @param low The starting index of the sub-array to be sorted.
 * @param high The ending index of the sub-array to be sorted.
 */
void quickSortInt(int *arr, int low, int high)
{
    if (low < high)
    {
        // Partition the array and get the pivot index
        int pivot = partitionInt(arr, low, high);

        // Recursively sort the sub-arrays
        quickSortInt(arr, low, pivot - 1);
        quickSortInt(arr, pivot + 1, high);
    }
}

/**
 * @brief Partitions the array for Quick Sort using the last element as the pivot.
 *
 * This helper function places the pivot element in its correct sorted position.
 *
 * @param arr A pointer to the array to be partitioned.
 * @param low The starting index of the sub-array.
 * @param high The ending index of the sub-array.
 * @return The index of the pivot element after partitioning.
 */
int partitionInt(int *arr, int low, int high)
{
    int pivot = arr[high]; // Take the last element as pivot
    int i = (low - 1);     // Index of smaller element

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            // Swap elements
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap the pivot element with the element at i+1
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

/**
 * @brief Sorts an array of floating point numbers in ascending order using Quick Sort algorithm.
 *
 * This function works the same way as quickSortInt, but operates on floating point numbers.
 *
 * @param arr A pointer to the array of floats to be sorted.
 * @param low The starting index of the sub-array to be sorted.
 * @param high The ending index of the sub-array to be sorted.
 */
void quickSortFloat(float *arr, int low, int high)
{
    if (low < high)
    {
        // Partition the array and get the pivot index
        int pivot = partitionFloat(arr, low, high);

        // Recursively sort the sub-arrays
        quickSortFloat(arr, low, pivot - 1);
        quickSortFloat(arr, pivot + 1, high);
    }
}

/**
 * @brief Partitions the array for Quick Sort using the last element as the pivot.
 *
 * This helper function places the pivot element in its correct sorted position.
 *
 * @param arr A pointer to the array to be partitioned.
 * @param low The starting index of the sub-array.
 * @param high The ending index of the sub-array.
 * @return The index of the pivot element after partitioning.
 */
int partitionFloat(float *arr, int low, int high)
{
    float pivot = arr[high]; // Take the last element as pivot
    int i = (low - 1);       // Index of smaller element

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            // Swap elements
            float temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap the pivot element with the element at i+1
    float temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}
