#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integer in ascending order
 * using the Bubble sort algorithm.
 * @array: pointer to an array of integers.
 * @size: size of the array
 *
 * Return: void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t higher_val, i, j;

	if (array == NULL && size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[i] > array[i + 1])
			{
				higher_val = array[i];
				array[i] = array[i + 1];
				array[i + 1] = higher_val;
			}
		}
	}
}
