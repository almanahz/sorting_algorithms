#include "sort.h"

/**
 * swap - swaps elements of an array in their respective index
 * @n: pointer to the first element
 * @m: pointer to the second element
 * Return: Nothing
 */
void swap(int *n, int *m)
{
	int temp = *m;

	*m = *n;
	*n = temp;
}

/**
 * pivot_point - returns the pivot point where the partion will be created
 * implements the Lomuto partition scheme
 * @array: the array to be sorted
 * @low: the lowest index in the current partition
 * @high: the highest index in the current partition
 * @size: Number of elements of the array
 * Return: the new pivot index location for partitioning
 */
void pivot_point(int array[], int low, int high, size_t size)
{
	int pivot_value = array[high], i = low - 1, j, pivot;

	if (low < high)
	{
		for (j = low; j < high; j++)
		{
			if (array[j] <= pivot_value)
			{
				i++;
				if (i != j)
				{
					swap(&array[j], &array[i]);
					print_array(array, size);
				}
			}
		}
		if (array[i + 1] > array[high])
		{
			swap(&array[high], &array[i + 1]);
			print_array(array, size);
		}
		pivot = i + 1;
		pivot_point(array, low, pivot - 1, size);
		pivot_point(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array using insertion sort algorithm
 * @array: array to be sorted
 * @size: Number of elements of the array
 */

void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	if (array == NULL || size == 1)
		return;
	pivot_point(array, low, high, size);
}
