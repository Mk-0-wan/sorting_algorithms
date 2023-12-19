#include "sort.h"

/**
 * selection_sort - simple selection sort algorithm
 * @array: an array of integers
 * @size: lenghth of the array
 * Return: always void
 */
void selection_sort(int *array, size_t size)
{
	size_t imin = 0, j = 0, i = 0;

	if (!array || size == 0 || size == 1)
		return;

	for (; i < size; i++)
	{
		imin = i; /* smallest value */
		j = i + 1; /* ahead */

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[imin])
				imin = j;
		}
		if (i != imin)
		{
			Swap2(array[i], array[imin]);
			print_array(array, size);
		}
	}
}
