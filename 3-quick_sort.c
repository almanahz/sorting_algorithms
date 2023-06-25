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
 * @low: the lowest index in the current partition
 * @high: the highest index in the current partition
 * Return: the new pivot index location for partitioning
 */
int pivot_point(int array[], int low, int high)
{
	int pivot_value = array[high], i = low - 1, j;
	
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			i++;
			swap(&array[j], &array[i]);
		}
	}
	swap(&array[high], &array[i + 1]);
	return (i + 1);
}

/**
 * quick_sort - sorts an array using insertion sort algorithm
 * @array: array to be sorted
 * @size: Number of elements of the array
 */

void quick_sort(int *array, size_t size)
{
	int pivot, low = 0, high = size - 1;

	if (array == NULL || size == 1)
		return;

	if (low < high)
	{
		pivot = pivot_point(array, low, high);
		quick_sort(array, pivot);
		quick_sort(array + pivot + 1, size - pivot - 1);
	}
	print_array(array, size);
}
