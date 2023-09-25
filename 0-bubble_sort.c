
#include "sort.h"

/**
 * swap - swap two values
 *
 * @a: the first value
 * @b: the second value
 * Return: void
 */
void swap(int *a, int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

/**
 * bubble_sort - sort array using bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int keep = 1;

	while (keep)
	{
		keep = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				keep = 1;
			}
		}
	}
}
