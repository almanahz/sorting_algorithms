#include "sort.h"

/**
 * selection_sort - sorts an array using using selection sort algorithm
 * @array: array to be sorted
 * @size: Number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	size_t ip, op;
	int min, swap;

	if (array == NULL)
		return;

	for (op = 0; op < size; op++)
	{
		min = op;
		for (ip = 0; ip < size - 1; ip++)
		{
			if (array[ip] < array[op])
				min = ip;
		}

		if (min != op)
		{
			swap = array[op];
			array[op] = array[i];
			array[ip] = swap;
		}
	}
}
