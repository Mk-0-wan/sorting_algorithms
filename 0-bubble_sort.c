#include "sort.h"

/**
 * bubble_sort -  simple sorting algorithm which acts by swapping two integers
 * @array: pointer to an array of integers
 * @size: pointer to an array of integers
 * Return: a sorted array using bubble_sort algorithm
 */
void bubble_sort(int *array, size_t size)
{

	ul i = 0;
	int flag = 0;
	size_t new_size = size;

	if (!array || size == 0 || size == 1)
		return;

	while (i < size)
	{
		flag = 0;
		if (array[i] > array[i + 1])
		{
			Swap2(array[i], array[i + 1]);
			print_array(array, new_size);
			flag = 1;
		}
		if (i == size - 2)
		{
			if (flag == 0)
				break;
			size--;
			i = -1;
		}
		i++;
	}
}
