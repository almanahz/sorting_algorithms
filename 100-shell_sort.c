#include "sort.h"
/**
 * shell_sort - Sorts an array of integers using shell sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void shell_sort(int *array, size_t size)
{
	size_t interv = 1, f_int, b_int, swap;

	while (interv < size / 3)
	{
		interv = interv * 3 + 1;
	}

	for (interv; interv >= 1; interv /= 3)
	{
		for (b_int = 0; b_int < size - interv; b_int++)
		{
			f_int = interv + b_int;
			for (f_int; f_int < size; f_int += interv)
			{
				if (array[f_int] > array[b_int])
					continue;
				if (array[f_int] < array[b_int])
				{
					swap = array[f_int];
					array[f_int] = array[b_int];
					array[b_int] = swap;
				}
			}
		}
		print_array(array, size);
	}
}
