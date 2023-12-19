#include "sort.h"

/**
 * quick_sort - simple implementation of the quick sort algorithm while using
 * recursive calls
 * @array: pointer to a list of integers to be sorted
 * @size: length of the array
 * Return:void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size == 0 || size == 1)
		return;

	quick_sort_r(array, 0, size - 1, size);
}

/**
 * quick_sort_r - function that uses the quick sort algorithm and recursive
 * calls to return a sorted array.
 * @A: pointer to the array of integers
 * @first:first index in the array
 * @last: last index in the array
 * @size: allows us to print the array after each swap
 * Return: void
 */
void quick_sort_r(int *A, int first, int last, size_t size)
{
	/* check if the cross each other */
	int pivot = A[last];
	/* ptr divides the array into two parts */
	int ptr = first, i = 0;

	if (first >= last)
		return;

	i = first;
	while (i < last)
	{
		if (A[i] < pivot)
		{
			if (ptr != i)
			{
				Swap2(A[i], A[ptr]);
				print_array(A, size);
			}
			/*increment ptr*/
			ptr++;
		}
		i++;
	}
	/* moves the pivot to the correct position */
	Swap2(A[ptr], A[last]);
	if (A[ptr] != A[last])
		print_array(A, size);
	/* sort the first half */
	quick_sort_r(A, first, ptr - 1, size);
	/* sort the second half of the array high */
	quick_sort_r(A, ptr + 1, last, size);
}
