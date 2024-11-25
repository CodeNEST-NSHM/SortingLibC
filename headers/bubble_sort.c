#include "sorting.h"

/**
 * @brief Sorts an array of integers in ascending order using Bubble Sort algorithm.
 *
 * The function compares each pair of adjacent elements and swaps them if they are
 * in the wrong order. This process is repeated until the array is sorted.
 *
 * @param arr A pointer to the array of integers to be sorted.
 * @param n The number of elements in the array.
 */
void bubbleSortInt(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * @brief Sorts an array of floating point numbers in ascending order using Bubble Sort algorithm.
 *
 * This function works the same way as bubbleSortInt, but operates on floating point numbers.
 *
 * @param arr A pointer to the array of floats to be sorted.
 * @param n The number of elements in the array.
 */
void bubbleSortFloat(float *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
