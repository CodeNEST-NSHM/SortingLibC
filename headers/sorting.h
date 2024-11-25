#ifndef SORTING_H
#define SORTING_H

/**
 * @brief Sorts an array of integers in ascending order using Bubble Sort algorithm.
 *
 * This function repeatedly steps through the list, compares adjacent elements,
 * and swaps them if they are in the wrong order. The pass through the list is
 * repeated until the list is sorted.
 *
 * @param arr A pointer to the array of integers to be sorted.
 * @param n The number of elements in the array.
 */
void bubbleSortInt(int *arr, int n);

/**
 * @brief Sorts an array of floating point numbers in ascending order using Bubble Sort algorithm.
 *
 * This function behaves the same as bubbleSortInt but works with floating point numbers.
 * It repeatedly steps through the list, compares adjacent elements, and swaps them if
 * they are in the wrong order.
 *
 * @param arr A pointer to the array of floats to be sorted.
 * @param n The number of elements in the array.
 */
void bubbleSortFloat(float *arr, int n);

/**
 * @brief Sorts an array of integers in ascending order using Quick Sort algorithm.
 *
 * This function uses the Quick Sort algorithm to sort an array of integers.
 * The array is divided into two smaller sub-arrays, and the elements are
 * sorted recursively. It uses the partitioning method to place the pivot
 * element in the correct position in the array.
 *
 * @param arr A pointer to the array of integers to be sorted.
 * @param low The starting index of the sub-array to be sorted.
 * @param high The ending index of the sub-array to be sorted.
 */
void quickSortInt(int *arr, int low, int high);

/**
 * @brief Sorts an array of floating point numbers in ascending order using Quick Sort algorithm.
 *
 * This function uses the Quick Sort algorithm to sort an array of floating point numbers.
 * It divides the array into two sub-arrays and recursively sorts each of them.
 *
 * @param arr A pointer to the array of floats to be sorted.
 * @param low The starting index of the sub-array to be sorted.
 * @param high The ending index of the sub-array to be sorted.
 */
void quickSortFloat(float *arr, int low, int high);

#endif
